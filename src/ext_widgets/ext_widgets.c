﻿/**
 * File:   ext_widgets.c
 * Author: AWTK Develop Team
 * Brief:  ext widgets
 *
 * Copyright (c) 2018 - 2018  Guangzhou ZHIYUAN Electronics Co.,Ltd.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2018-08-07 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#include "ext_widgets.h"
#include "keyboard/keyboard.h"
#include "base/widget_factory.h"
#include "rich_text/rich_text.h"
#include "keyboard/candidates.h"
#include "scroll_view/list_item.h"
#include "scroll_view/list_view.h"
#include "slide_view/slide_view.h"
#include "scroll_view/scroll_bar.h"
#include "scroll_view/scroll_view.h"
#include "scroll_view/list_view_h.h"
#include "color_picker/color_picker.h"
#include "color_picker/color_component.h"
#include "time_clock/time_clock.h"

ret_t tk_ext_widgets_init() {
  widget_factory_register(widget_factory(), WIDGET_TYPE_RICH_TEXT, rich_text_create);
  widget_factory_register(widget_factory(), WIDGET_TYPE_COLOR_PICKER, color_picker_create);
  widget_factory_register(widget_factory(), WIDGET_TYPE_COLOR_COMPONENT, color_component_create);
  widget_factory_register(widget_factory(), WIDGET_TYPE_SCROLL_VIEW, scroll_view_create);
  widget_factory_register(widget_factory(), WIDGET_TYPE_LIST_VIEW, list_view_create);
  widget_factory_register(widget_factory(), WIDGET_TYPE_LIST_VIEW_H, list_view_h_create);
  widget_factory_register(widget_factory(), WIDGET_TYPE_LIST_ITEM, list_item_create);
  widget_factory_register(widget_factory(), WIDGET_TYPE_SCROLL_BAR, scroll_bar_create);
  widget_factory_register(widget_factory(), WIDGET_TYPE_SCROLL_BAR_DESKTOP,
                          scroll_bar_create_desktop);
  widget_factory_register(widget_factory(), WIDGET_TYPE_SCROLL_BAR_MOBILE,
                          scroll_bar_create_mobile);
  widget_factory_register(widget_factory(), WIDGET_TYPE_SLIDE_VIEW, slide_view_create);
  widget_factory_register(widget_factory(), WIDGET_TYPE_KEYBOARD, keyboard_create);
  widget_factory_register(widget_factory(), WIDGET_TYPE_CANDIDATES, candidates_create);
  widget_factory_register(widget_factory(), WIDGET_TYPE_TIME_CLOCK, time_clock_create);

  return RET_OK;
}
