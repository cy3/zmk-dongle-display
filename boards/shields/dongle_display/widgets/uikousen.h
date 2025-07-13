#pragma once

#include <zephyr/kernel.h>
#include <lvgl.h>
#include <zmk/event_manager.h>

/* Public handle for the LVGL anim‑img object */
struct zmk_widget_uikousen {
    sys_snode_t node;  /* global list linkage            */
    lv_obj_t   *obj;   /* lv_animimg instance             */
};

/** Initialise the widget and attach under @parent. */
int zmk_widget_uikousen_init(struct zmk_widget_uikousen *widget, lv_obj_t *parent);

/** Get raw LVGL object (for alignment, styling, …). */
lv_obj_t *zmk_widget_uikousen_obj(struct zmk_widget_uikousen *widget);