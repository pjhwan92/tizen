/*
 * vconf-internal-keys
 *
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Hakjoo Ko <hakjoo.ko@samsung.com>, Genie Kim <daejins.kim@samsung.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef __VCONF_INTERNAL_DOCK_KEYS_H__
#define __VCONF_INTERNAL_DOCK_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-dock-keys.h
 * @defgroup    vconf_internal_dock_key Definitions of internal shared Keys for desk-dock
 * @ingroup     vconf_internal_key
 * @author      yun.xu@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for desk-dock \n
 */

/* ========================== Desk-dock Setting Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_dock_key
 * @{
 * @brief Dock Setting Keys & Values\n
 *        Maintainer : yun.xu@samsung.com
 */

/**
 * @brief hide status bar on/off (bool)
 *
 * Show = 0 \n
 * Hide = 1
 */
#define VCONFKEY_DOCK_HIDE_STATUS_BAR "memory/dock/hide_status_bar"

/**
 * @brief the path of background image(string)
 */
#define VCONFKEY_DOCK_BG_PATH "memory/dock/bg_path"

/**
 * @brief clock/calendar display type (int)
 *
 * Clock = 0 \n
 * Calendar = 1 \n
 * None = 2
 */
#define VCONFKEY_DOCK_CLOCK_CALENDAR "memory/dock/clock_calendar"

/**
 * @brief show AccuWeather on/off (bool)
 *
 * Disabled = 0 \n
 * Enabled = 1
 */
#define VCONFKEY_DOCK_WEATHER_ON "memory/dock/weather_on"

/**
 * @brief the city name for weather (string)
 */
#define VCONFKEY_DOCK_WEATHER_CITY_NAME "memory/dock/city_name"

/**
 * @brief the last auto refresh item index of weather (int)
 */
#define VCONFKEY_DOCK_WEATHER_AUTO_REFRESH "memory/dock/auto_refresh"

/**
 * @brief the auto refresh interval(sec) of weather (int)
 */
#define VCONFKEY_DOCK_WEATHER_AUTO_REFRESH_VAL "memory/dock/auto_refresh_val"

/**
 * @brief the last auto scroll item index of weather (int)
 */
#define VCONFKEY_DOCK_WEATHER_AUTO_SCROLL "memory/dock/auto_scroll"


/**
 * @brief the auto scroll interval(sec) of weather (int)
 */
#define VCONFKEY_DOCK_WEATHER_AUTO_SCROLL_VAL "memory/dock/auto_scroll_val"

/**
 * @brief the unit of weather (int)
 *
 * CELSIUS = 0 \n
 * FAHRENHEIT = 1
 */
#define VCONFKEY_DOCK_WEATHER_UNIT "memory/dock/unit"

/**
 * @brief auto brightness of screen on/off (bool)
 *
 * Disabled = 0 \n
 * Enabled = 1
 */
#define VCONFKEY_DOCK_BRIGHTNESS_AUTO "memory/dock/brightness_auto"

/**
 * @brief the brightness value of screen (int)
 */
#define VCONFKEY_DOCK_BRIGHTNESS_VAL "memory/dock/brightness_val"

/**
 * @brief enable ext_speaker on/off (bool)
 *
 * Disabled = 0 \n
 * Enabled = 1
 */
#define VCONFKEY_DOCK_EXT_SPEAKER "memory/dock/ext_speaker"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_DOCK_KEYS_H__ */

