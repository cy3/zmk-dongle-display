/* 10‑frame "Uikousen" animation widget – speed scales with WPM            */
#include <zephyr/kernel.h>
#include <zephyr/bluetooth/services/bas.h>

#include <lvgl.h>

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/display.h>
#include <zmk/event_manager.h>
#include <zmk/events/wpm_state_changed.h>
#include <zmk/wpm.h>

#include "uikousen.h"

/* frames supplied by uikousen_images.c */
extern const lv_img_dsc_t *uikousen_frames[];
extern const size_t UIKOUSEN_FRAME_CNT;

#define SRC(arr) (const void **)(arr), UIKOUSEN_FRAME_CNT

static uint32_t calc_duration(uint8_t wpm)
{
    /*
     * Map WPM → loop duration (ms) with an inverse‑proportional curve
     * so that:
     *   ‑   <5 WPM   : 6000 ms  (거의 정지)
     *   ‑   40 WPM   : ~1250 ms (자연스러운 기본 속도)
     *   ‑   120 WPM  :  250 ms  (아주 빠름, ≈40 fps)
     *
     * duration_ms = clamp( 2500 + (40000 / wpm), 250 … 6000 )
     */
    if (wpm < 5) return 6000;

    uint32_t dur = 2500 + (40000U / wpm);  /* 역비례 + 오프셋으로 곡선 완화 */
    if (dur < 400)  dur = 400;   /* 너무 빠르면 OLED 잔상 발생 */
    if (dur > 6000) dur = 6000;  /* idle 한계 */
    return dur;
}

/* keep list of live widgets so all can update together */
static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);
static uint32_t current_duration_ms = 0;

static void start_anim(lv_obj_t *obj, uint32_t duration_ms)
{
    lv_animimg_set_src(obj, SRC(uikousen_frames));
    lv_animimg_set_duration(obj, duration_ms);
    lv_animimg_set_repeat_count(obj, LV_ANIM_REPEAT_INFINITE);
    lv_animimg_start(obj);
}

struct uikousen_state { uint8_t wpm; };

static void apply_state(lv_obj_t *obj, struct uikousen_state st)
{
    uint32_t target = calc_duration(st.wpm);

    /* 부드러운 속도 전환: 이전 75% + 새 25% 가중 평균 */
    if (!current_duration_ms) {
        current_duration_ms = target;      /* 초기화 */
    } else {
        current_duration_ms = (current_duration_ms * 3 + target) / 4;
    }

    start_anim(obj, current_duration_ms);
}

/* ----------  ZMK event plumbing  ---------- */
static struct uikousen_state uikousen_state_from_evt(const zmk_event_t *eh)
{
    const struct zmk_wpm_state_changed *ev = as_zmk_wpm_state_changed(eh);
    return (struct uikousen_state){ .wpm = ev->state };
}

static void uikousen_listener_cb(struct uikousen_state st)
{
    struct zmk_widget_uikousen *w;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, w, node) {
        apply_state(w->obj, st);
    }
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_uikousen,
                            struct uikousen_state,
                            uikousen_listener_cb,
                            uikousen_state_from_evt)
ZMK_SUBSCRIPTION(widget_uikousen, zmk_wpm_state_changed);
/* ----------  public API  ---------- */
int zmk_widget_uikousen_init(struct zmk_widget_uikousen *widget, lv_obj_t *parent)
{
    widget->obj = lv_animimg_create(parent);
    lv_obj_center(widget->obj);

    sys_slist_append(&widgets, &widget->node);

    start_anim(widget->obj, calc_duration(0));
    return 0;
}

lv_obj_t *zmk_widget_uikousen_obj(struct zmk_widget_uikousen *widget)
{
    return widget->obj;
}
