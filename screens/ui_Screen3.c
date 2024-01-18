// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: rc1_before_chart

#include "../ui.h"

void ui_Screen3_screen_init(void)
{
    ui_Screen3 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Header3 = ui_Header_create(ui_Screen3);
    lv_obj_set_x(ui_Header3, 0);
    lv_obj_set_y(ui_Header3, 0);

    lv_label_set_text(ui_comp_get_child(ui_Header3, UI_COMP_HEADER_SCREENNAME), "Screen 3");

    ui_rollerHour1 = lv_roller_create(ui_Screen3);
    lv_roller_set_options(ui_rollerHour1,
                          "0\n1\n2\n3\n4\n5\n6\n7\n8\n9\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23", LV_ROLLER_MODE_NORMAL);
    lv_obj_set_width(ui_rollerHour1, 70);
    lv_obj_set_height(ui_rollerHour1, 90);
    lv_obj_set_x(ui_rollerHour1, -100);
    lv_obj_set_y(ui_rollerHour1, 0);
    lv_obj_set_align(ui_rollerHour1, LV_ALIGN_CENTER);

    ui_rollerHour2 = lv_roller_create(ui_Screen3);
    lv_roller_set_options(ui_rollerHour2,
                          "0\n1\n2\n3\n4\n5\n6\n7\n8\n9\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23", LV_ROLLER_MODE_NORMAL);
    lv_obj_set_width(ui_rollerHour2, 70);
    lv_obj_set_height(ui_rollerHour2, 90);
    lv_obj_set_x(ui_rollerHour2, 100);
    lv_obj_set_y(ui_rollerHour2, 0);
    lv_obj_set_align(ui_rollerHour2, LV_ALIGN_CENTER);

    ui_btnSetTime1 = lv_btn_create(ui_Screen3);
    lv_obj_set_width(ui_btnSetTime1, 60);
    lv_obj_set_height(ui_btnSetTime1, 31);
    lv_obj_set_x(ui_btnSetTime1, 2);
    lv_obj_set_y(ui_btnSetTime1, 2);
    lv_obj_set_align(ui_btnSetTime1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnSetTime1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnSetTime1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_btnSetTime1, lv_color_hex(0x08DE10), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnSetTime1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_txtBtnSetTime1 = lv_label_create(ui_btnSetTime1);
    lv_obj_set_width(ui_txtBtnSetTime1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_txtBtnSetTime1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_txtBtnSetTime1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_txtBtnSetTime1, "Set");

    lv_obj_add_event_cb(ui_btnSetTime1, ui_event_btnSetTime1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen3, ui_event_Screen3, LV_EVENT_ALL, NULL);

}
