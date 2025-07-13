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


/* ------------------------------------------------------------------
 *  Duration buckets – tuned for 10‑frame loop
 * ----------------------------------------------------------------*/
#define DUR_IDLE   6000  /* <5   WPM */
#define DUR_SLOW   2000  /* 5‑29 WPM */
#define DUR_MID    1200  /* 30‑69 WPM */
#define DUR_FAST    800  /* ≥70  WPM */

static uint32_t bucket_duration(uint8_t wpm)
{
    if (wpm < 5)   return DUR_IDLE;
    if (wpm < 30)  return DUR_SLOW;
    if (wpm < 70)  return DUR_MID;
    return DUR_FAST;
}

/* ------------------------------------------------------------------
 *  Global widget list – all sync to same speed bucket
 * ----------------------------------------------------------------*/
static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

/* Track current bucket so we restart only when bucket changes */
static uint32_t cur_dur_ms = DUR_IDLE;

/* ------------------------------------------------------------------
 *  Helper to (re)start animation at given duration
 * ----------------------------------------------------------------*/
static void restart_anim(lv_obj_t *obj, uint32_t dur_ms)
{
    lv_animimg_set_src(obj,
                       (const void **)uikousen_frames,   /* 프레임 배열 */
                       UIKOUSEN_FRAME_CNT);              /* 프레임 수 */
    lv_animimg_set_duration(obj, dur_ms);
    lv_animimg_set_repeat_count(obj, LV_ANIM_REPEAT_INFINITE);
    lv_animimg_start(obj);
}

/* ------------------------------------------------------------------
 *  WPM event handling – bucket logic identical to reference code
 * ----------------------------------------------------------------*/
struct uikousen_state { uint8_t wpm; };

static struct uikousen_state state_from_evt(const zmk_event_t *eh)
{
    const struct zmk_wpm_state_changed *ev = as_zmk_wpm_state_changed(eh);
    return (struct uikousen_state){ .wpm = ev->state };
}

static void listener_cb(struct uikousen_state st)
{
    uint32_t target_dur = bucket_duration(st.wpm);
    if (target_dur == cur_dur_ms) return; /* same bucket – keep playing */

    struct zmk_widget_uikousen *w;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, w, node) {
        restart_anim(w->obj, target_dur);
    }
    cur_dur_ms = target_dur;
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_uikousen,
                            struct uikousen_state,
                            listener_cb,
                            state_from_evt)
ZMK_SUBSCRIPTION(widget_uikousen, zmk_wpm_state_changed);

/* ------------------------------------------------------------------
 *  Public API
 * ----------------------------------------------------------------*/
int zmk_widget_uikousen_init(struct zmk_widget_uikousen *widget, lv_obj_t *parent)
{
    widget->obj = lv_animimg_create(parent);
    lv_obj_center(widget->obj);

    sys_slist_append(&widgets, &widget->node);

    restart_anim(widget->obj, DUR_IDLE);
    cur_dur_ms = DUR_IDLE;

    return 0;
}

lv_obj_t *zmk_widget_uikousen_obj(struct zmk_widget_uikousen *widget)
{
    return widget->obj;
}