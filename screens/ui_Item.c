// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: menu_practice

#include "../ui.h"

void ui_Item_screen_init(void)
{
    ui_Item = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Item, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_add_event_cb(ui_Item, scr_unloaded_delete_cb, LV_EVENT_SCREEN_UNLOADED, &ui_Item);

    ui_hidddenWipeGesture = ui_hideWipe_create(ui_Item);
    lv_obj_set_x(ui_hidddenWipeGesture, 0);
    lv_obj_set_y(ui_hidddenWipeGesture, 0);

}
