/*
 * vconf-internal-keys
 *
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Hakjoo Ko <hakjoo.ko@samsung.com>
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

#ifndef __VCONF_INTERNAL_SETTING_KEYS_H__
#define __VCONF_INTERNAL_SETTING_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-setting-keys.h
 * @defgroup    vconf_internal_setting_key Definitions of internal shared Keys for setting
 * @ingroup     vconf_internal_key
 * @author      Hyejin Kim (hyejin0906.kim@samsung.com)
 * @version     0.1
 * @brief       This file has the definitions of shared keys for setting \n
 */

/* ========================== Setting UI Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_setting_key
 * @{
 * @brief Setting UI Keys & Values\n
 *        Maintainer : hyejin0906.kim@samsung.com
 */
#define VCONFKEY_SETAPPL_PREFIX                                 "db/setting"
#define VCONFKEY_SETAPPL_MEM_PREFIX                             "memory/setting"


/**
 * @brief status of screen lock sound
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_SOUND_LOCK_BOOL                        VCONFKEY_SETAPPL_PREFIX"/sound/sound_lock"

/**
 * @brief volume level of media sound
 *
 * Min : 0 \n
 * Max : 15 \n
 */
#define VCONFKEY_SETAPPL_MEDIA_SOUND_VOLUME_INT                 VCONFKEY_SETAPPL_PREFIX"/sound/media/sound_volume"


/** @brief current theme name */
#define VCONFKEY_SETAPPL_WIDGET_THEME_STR                       VCONFKEY_SETAPPL_PREFIX"/widget_theme"

/**
 * @brief level of brightness
 *
 * Min : 1 \n
 * Max : 24 \n
 */
#define VCONFKEY_SETAPPL_LCD_BRIGHTNESS                         VCONFKEY_SETAPPL_PREFIX"/Brightness"
/* display - brightness */
enum {
	SETTING_BRIGHTNESS_LEVEL1 = 1,
	SETTING_BRIGHTNESS_LEVEL2,
	SETTING_BRIGHTNESS_LEVEL3,
	SETTING_BRIGHTNESS_LEVEL4,
	SETTING_BRIGHTNESS_LEVEL5,
	SETTING_BRIGHTNESS_LEVEL6,
	SETTING_BRIGHTNESS_LEVEL7,
	SETTING_BRIGHTNESS_LEVEL8,
	SETTING_BRIGHTNESS_LEVEL9,
	SETTING_BRIGHTNESS_LEVEL10
};

/**
 * @brief screen mode
 *
 * 0 : dynamic \n
 * 1 : Standard \n
 * 2 : Natural \n
 * 3 : Movie \n
 */
#define VCONFKEY_SETAPPL_SCREEN_MODE_INT		VCONFKEY_SETAPPL_PREFIX"/screen_mode"
/* display - screen mode */
enum {
	SETTING_SCREEN_MODE_DYNAMIC = 0,
	SETTING_SCREEN_MODE_STANDARD,
	SETTING_SCREEN_MODE_NATURAL,
	SETTING_SCREEN_MODE_MOVIE,
	SETTING_SCREEN_MODE_MAX
};

/**
 * @brief timeout of lcd
 *
 * 0 : always on \n
 * 15 : 15 sec \n
 * 30 : 30 sec \n
 * 60 : 1 min \n
 * 120 : 2 min \n
 * 300 : 5 min \n
 * 600 : 10 min \n
 */
#define VCONFKEY_SETAPPL_LCD_TIMEOUT_NORMAL			VCONFKEY_SETAPPL_PREFIX"/lcd_backlight_normal"

/**
 * @brief volume level of ringtone sound
 *
 * Min : 0 \n
 * Max : 15 \n
 */
#define VCONFKEY_SETAPPL_CALL_RINGTONE_SOUND_VOLUME_INT			VCONFKEY_SETAPPL_PREFIX"/sound/call/ringtone_sound_volume"

/** @brief current incoming call ringtone file path */
#define VCONFKEY_SETAPPL_CALL_RINGTONE_PATH_STR				    VCONFKEY_SETAPPL_PREFIX"/sound/call/ringtone_path"

/**
 * @brief vibration type of incoming call
 *
 * 0 : vibration 1 \n
 * 1 : vibration 2 \n
 * 2 : vibration 3 \n
 */
#define VCONFKEY_SETAPPL_CALL_VIBRATION_PATTERN_INT			    VCONFKEY_SETAPPL_PREFIX"/sound/call/vibration_type"
/* profile - call alert vib type */
enum {
	SETTING_CALL_ALERT_VIB_TYPE1 = 0,
	SETTING_CALL_ALERT_VIB_TYPE2,
	SETTING_CALL_ALERT_VIB_TYPE3,
	SETTING_CALL_ALERT_VIB_TYPE4,
	SETTING_CALL_ALERT_VIB_TYPE5,
	SETTING_CALL_ALERT_VIB_TYPE6,
	SETTING_CALL_ALERT_VIB_TYPE7,
	SETTING_CALL_ALERT_VIB_TYPE8,
	SETTING_CALL_ALERT_VIB_TYPE9,
	SETTING_CALL_ALERT_VIB_TYPE10,
	SETTING_CALL_ALERT_VIB_MAX
};


/**
 * @brief volume level of notification sound
 *
 * Min : 0 \n
 * Max : 15 \n
 */
#define VCONFKEY_SETAPPL_NOTI_SOUND_VOLUME_INT				    VCONFKEY_SETAPPL_PREFIX"/sound/noti/sound_volume"

/**
 * @brief type of message alert repitition
 *
 * 0 : once \n
 * 1 : every 2 minutes \n
 * 2 : every 5 minutes \n
 * 3 : every 10 minutes \n
 */
#define VCONFKEY_SETAPPL_NOTI_MSG_ALERT_REP_TYPE_INT			VCONFKEY_SETAPPL_PREFIX"/sound/noti/msg_alert_rep_type"
enum {
	SETTING_SOUND_REP_ONCE = 0,
	SETTING_SOUND_REP_EVERY_2_MIN,
	SETTING_SOUND_REP_EVERY_5_MIN,
	SETTING_SOUND_REP_EVERY_10_MIN
};

/** @brief current message ringtone file path */
#define VCONFKEY_SETAPPL_NOTI_MSG_RINGTONE_PATH_STR			    VCONFKEY_SETAPPL_PREFIX"/sound/noti/msg_ringtone_path"

/**
 * @brief type of email alert repitition
 *
 * 0 : once \n
 * 1 : every 2 minutes \n
 * 2 : every 5 minutes \n
 * 3 : every 10 minutes \n
 */
#define VCONFKEY_SETAPPL_NOTI_EMAIL_ALERT_REP_TYPE_INT			VCONFKEY_SETAPPL_PREFIX"/sound/noti/email_alert_rep_type"

/** @brief current email ringtone file path */
#define VCONFKEY_SETAPPL_NOTI_EMAIL_RINGTONE_PATH_STR			VCONFKEY_SETAPPL_PREFIX"/sound/noti/email_ringtone_path"

/**
 * @brief vibration level of notification
 *
 * Min : 0 \n
 * Max : 5 \n
 */
#define VCONFKEY_SETAPPL_NOTI_VIBRATION_LEVEL_INT			    VCONFKEY_SETAPPL_PREFIX"/sound/noti/vibration_level"

/**
 * @brief volume level of system sound
 *
 * Min : 0 \n
 * Max : 15 \n
 */
#define VCONFKEY_SETAPPL_TOUCH_FEEDBACK_SOUND_VOLUME_INT		VCONFKEY_SETAPPL_PREFIX"/sound/touch_feedback/sound_volume"

/**
 * @brief backup vibration level of haptic feedback for powersaving
 *
 * Min : 0 \n
 * Max : 5 \n
 */
#define VCONFKEY_SETAPPL_TOUCH_FEEDBACK_VIBRATION_LEVEL_BAK_INT     VCONFKEY_SETAPPL_PREFIX"/sound/touch_feedback/vibration_level_bak"

/**
 * @brief vibration level of haptic feedback
 *
 * Min : 0 \n
 * Max : 5 \n
 */
#define VCONFKEY_SETAPPL_TOUCH_FEEDBACK_VIBRATION_LEVEL_INT     VCONFKEY_SETAPPL_PREFIX"/sound/touch_feedback/vibration_level"
/* phone - vibration feedback */
enum {
	SETTING_VIB_FEEDBACK_LEVEL0 = 0,
	SETTING_VIB_FEEDBACK_LEVEL1,
	SETTING_VIB_FEEDBACK_LEVEL2,
	SETTING_VIB_FEEDBACK_LEVEL3,
	SETTING_VIB_FEEDBACK_LEVEL4,
	SETTING_VIB_FEEDBACK_LEVEL5
};


/**
 * @brief status of changing USB mode
 *
 * 0 : done \n
 * 1 : on changing \n
 * 2 : on changing to NONE mode \n
 */
#define VCONFKEY_SETAPPL_USB_IN_MODE_CHANGE                     VCONFKEY_SETAPPL_MEM_PREFIX"/usb_in_mode_change"

/**
 * @brief selected popup button
 *
 * 0 : NO/Cancel button \n
 * 1 : YES/OK button \n
 */
#define VCONFKEY_SETAPPL_SELECT_POPUP_BTN_INT                   VCONFKEY_SETAPPL_PREFIX"/select_popup_btn"
/* setting - on,off status */
enum {
	SETTING_ON_OFF_BTN_OFF = 0,
	SETTING_ON_OFF_BTN_ON,
	SETTING_ON_OFF_BTN_MAX
};

/**
 * @brief current USB mode
 *
 * SETTING_USB_NONE_MODE : None \n
 * SETTING_USB_SAMSUNG_KIES : kies \n
 * SETTING_USB_MASS_STORAGE : Mass storage \n
 * SETTING_USB_DEBUG_MODE : Debug \n
 * SETTING_USB_MOBILE_HOTSPOT : USB tethering \n
 */
#define VCONFKEY_SETAPPL_USB_MODE_INT                           VCONFKEY_SETAPPL_MEM_PREFIX"/usb_mode"
enum {
	/** None */
	SETTING_USB_NONE_MODE = -1,
	/** KIES */
	SETTING_USB_SAMSUNG_KIES = 0,
	/** Mass storage */
	SETTING_USB_MASS_STORAGE,
	/* SETTING_USB_INTERNET_SHARING, */
	/** KIES INSTALLER */
	SETTING_USB_KIES_INSTALLER,
	/** DEBUG */
	SETTING_USB_DEBUG_MODE,
	/** USB tethering */
	SETTING_USB_MOBILE_HOTSPOT
};	/* connectivity - usb connection */

/**
 * @brief USB mode that user selected
 *
 * 0 : kies \n
 * 1 : Mass storage \n
 * 3 : Debug \n
 * 4 : USB tethering \n
 */
#define VCONFKEY_SETAPPL_USB_SEL_MODE_INT                       VCONFKEY_SETAPPL_MEM_PREFIX"/usb_sel_mode"

/**
 * @brief status of select network
 *
 * 0 : Automatic Off \n
 * 1 : Automatic On \n
 */
#define VCONFKEY_SETAPPL_SELECT_NETWORK_INT                     VCONFKEY_SETAPPL_PREFIX"/select_network"
/* network - select network */
enum {
	SETTING_SELECT_NETWORK_AUTOMATIC = 0,
	SETTING_SELECT_NETWORK_MANUAL,
	SETTING_SELECT_NETWORK_MAX
};

/**
 * @brief network node
 *
 * 0 : automatic \n
 * 1 : gsm900/1800 \n
 * 2 : gsm 8500/1900 \n
 * 3 : umts \n
 */
#define VCONFKEY_SETAPPL_NETWORK_MODE_INT                       VCONFKEY_SETAPPL_PREFIX"/network_mode"
/* network - network mode */
enum {
	SETTING_NETWORK_MODE_AUTOMATIC = 0,
	SETTING_NETWORK_MODE_GSM_900_1800,
	SETTING_NETWORK_MODE_GSM_850_1900,
	SETTING_NETWORK_MODE_UTMS,
	SETTING_NETWORK_MODE_MAX
};

/**
 * @brief status of phone lock
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_POWER_ON_LOCK_BOOL		        VCONFKEY_SETAPPL_PREFIX"/power_on_lock"

/**
 * @brief left count of trying phone lock on/off
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PHONE_LOCK_ATTEMPTS_LEFT_INT                    VCONFKEY_SETAPPL_PREFIX"/phone_lock_attempts_left"

/**
 * @brief timestamp if phone lock is on
 *
 */
#define VCONFKEY_SETAPPL_PHONE_LOCK_TIMESTAMP_STR                    VCONFKEY_SETAPPL_PREFIX"/phone_lock_timestamp"

/**
 * @brief timestamp if sim lock is on
 *
 */
#define VCONFKEY_SETAPPL_SIM_LOCK_TIMESTAMP_STR                    VCONFKEY_SETAPPL_PREFIX"/sim_lock_timestamp"

/**
 * @brief status of fdn mode
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_FIXED_DIALING_MODE_BOOL		    VCONFKEY_SETAPPL_PREFIX"/fixed_dialing_mode"

/**
 * @brief status of simple password
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_SIMPLE_PASSWORD_BOOL		        VCONFKEY_SETAPPL_PREFIX"/simple_password"


/**
 * @brief screen lock type
 *
 * 0 : Swipe \n
 * 1 : Motion \n
 * 2 : Face and voice \n
 * 3 : Simple password \n
 * 4 : Password \n
 */
#define VCONFKEY_SETAPPL_SCREEN_LOCK_TYPE_INT		        VCONFKEY_SETAPPL_PREFIX"/screen_lock_type"
/* security - screen lock type */
enum {
       SETTING_SCREEN_LOCK_TYPE_SWIPE = 0,
       SETTING_SCREEN_LOCK_TYPE_MOTION,
       SETTING_SCREEN_LOCK_TYPE_FACE_AND_VOICE,
       SETTING_SCREEN_LOCK_TYPE_SIMPLE_PASSWORD,
       SETTING_SCREEN_LOCK_TYPE_PASSWORD,
       SETTING_SCREEN_LOCK_TYPE_MAX
};


/**
 * @brief display and light : font size
 *
 * 1 : SMALL \n
 * 2 : MIDIUM \n
 * 3 : LARGE \n
 */
#define VCONFKEY_SETAPPL_FONT_SIZE_INT                          VCONFKEY_SETAPPL_PREFIX"/font_size"
/* display - font size */
enum {
	SETTING_FONT_SIZE_SMALL = 0,
	SETTING_FONT_SIZE_MIDDLE,
	SETTING_FONT_SIZE_LARGE,
	SETTING_FONT_SIZE_MAX
};


/** @brief display and light : index of font type */
#define VCONFKEY_SETAPPL_FONT_TYPE_INT                          VCONFKEY_SETAPPL_PREFIX"/font_type"

/**
 * @brief status of automatic brightness
 *
 * 0 : Off \n
 * 1 : On \n
 * 2 : Pause \n
 */
#define VCONFKEY_SETAPPL_BRIGHTNESS_AUTOMATIC_INT              VCONFKEY_SETAPPL_PREFIX"/brightness_automatic"
enum {
	SETTING_BRIGHTNESS_AUTOMATIC_OFF = 0,
	SETTING_BRIGHTNESS_AUTOMATIC_ON,
	SETTING_BRIGHTNESS_AUTOMATIC_PAUSE
};

/**
 * @brief time and date : status of automatic time update
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_AUTOMATIC_TIME_UPDATE_BOOL       VCONFKEY_SETAPPL_PREFIX"/automatic_time_update"

/**
 * @brief time and date : index of date format type
 *
 * 0 : DD_MM_YYYY
 * 1 : MM_DD_YYYY \n
 * 2 : YYYY_MM_DD \n
 * 3 : YYYY_DD_MM \n
 */
#define VCONFKEY_SETAPPL_DATE_FORMAT_INT                        VCONFKEY_SETAPPL_PREFIX"/date_format"
/* time - date format */
enum {
	SETTING_DATE_FORMAT_DD_MM_YYYY = 0,
	SETTING_DATE_FORMAT_MM_DD_YYYY,
	SETTING_DATE_FORMAT_YYYY_MM_DD,
	SETTING_DATE_FORMAT_YYYY_DD_MM,
	SETTING_DATE_FORMAT_MAX
};

/** @brief city name */
#define VCONFKEY_SETAPPL_CITYNAME_INDEX_INT                     VCONFKEY_SETAPPL_PREFIX"/cityname_id"

/**
 * @brief first day of week
 *
 * 0 : Sunday \n
 * 1 : Monday \n
 */
#define VCONFKEY_SETAPPL_WEEKOFDAY_FORMAT_INT                   VCONFKEY_SETAPPL_PREFIX"/weekofday_format"
/* time - week of day format */
enum {
	SETTING_WEEKOFDAY_FORMAT_SUNDAY = 0,
	SETTING_WEEKOFDAY_FORMAT_MONDAY,
	SETTING_WEEKOFDAY_FORMAT_TUESDAY,
	SETTING_WEEKOFDAY_FORMAT_WEDNESDAY,
	SETTING_WEEKOFDAY_FORMAT_THURSDAY,
	SETTING_WEEKOFDAY_FORMAT_FRIDAY,
	SETTING_WEEKOFDAY_FORMAT_SATURDAY,
	SETTING_WEEKOFDAY_FORMAT_MAX
};


/**
 * @brief index of current language
 *
 * 0 : automatic \n
 * 1 : korean \n
 * 2 : English \n
 * 3 : chinese \n
 * 4 : chinese(hongkong) \n
 * 5 : chinese(taiwan) \n
 * 6 : Deutsche \n
 * 7 : nederlands \n
 * 8 : espanol \n
 * 9 : portugues \n
 * 10 : greek \n
 * 11 : italiano \n
 * 12 : francais \n
 * 13 : turky \n
 * 14 : japanese \n
 * 15 : Russian \n
 */
#define VCONFKEY_SETAPPL_LANG_INT                               VCONFKEY_SETAPPL_PREFIX"/lang"
/* phone - lnaguage */
enum {
	SETTING_LANG_AUTOMATIC = 0,
	SETTING_LANG_KOREA = 1,
	SETTING_LANG_ENGLISH,
	SETTING_LANG_CHINA,
	SETTING_LANG_CANTONESE,
	SETTING_LANG_TAIWAN,
	SETTING_LANG_GERMAN,
	SETTING_LANG_DUTCH,
	SETTING_LANG_SPAINISH,
	SETTING_LANG_PORTUGUESE,
	SETTING_LANG_GREEK,
	SETTING_LANG_ITALIAN,
	SETTING_LANG_FRENCH,
	SETTING_LANG_TURKISH,
	SETTING_LANG_JAPAN,
	SETTING_LANG_RUSSIAN,
	SETTING_LANG_MAX
};

/**
 * @brief status of IM notification
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_TICKER_NOTI_IM_BOOL              VCONFKEY_SETAPPL_PREFIX"/ticker_noti/im"

/**
 * @brief status of facebook notification
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_TICKER_NOTI_FACEBOOK_BOOL        VCONFKEY_SETAPPL_PREFIX"/ticker_noti/facebook"

/**
 * @brief status of twitter notification
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_TICKER_NOTI_TWITTER_BOOL         VCONFKEY_SETAPPL_PREFIX"/ticker_noti/twitter"

/**
 * @brief status of message notification
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_TICKER_NOTI_MESSAGES_BOOL        VCONFKEY_SETAPPL_PREFIX"/ticker_noti/messages"

/**
 * @brief status of email notification
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_TICKER_NOTI_EMAIL_BOOL           VCONFKEY_SETAPPL_PREFIX"/ticker_noti/email"

/**
 * @brief font size
 *
 * 0 : small
 * 1 : normal
 * 2 : large
 * 3 : huge
 * 4 : giant
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_FONT_SIZE                VCONFKEY_SETAPPL_PREFIX"/accessibility/font_size"

/**
 * @brief Accessibility setting : status of assistive light
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_TORCH_LIGHT              VCONFKEY_SETAPPL_PREFIX"/accessibility/torch_light"

/**
 * @brief Accessibility setting : status of accept call
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_ACCEPT_CALL              VCONFKEY_SETAPPL_PREFIX"/accessibility/accept_call"

/**
 * @brief Accessibility setting : status of auto answer
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_ENABLE_AUTO_ANSWER       VCONFKEY_SETAPPL_PREFIX"/accessibility/enable_auto_answer"

/**
 * @brief Accessibility setting : auto answering time
 *
 * 1 : after 1 second \n
 * 2 : after 2 seconds \n
 * 3 : after 3 seconds \n
 * 4 : after 4 seconds \n
 * 5 : after 5 seconds \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_AUTO_ANSWER              VCONFKEY_SETAPPL_PREFIX"/accessibility/auto_answer"

/**
 * @brief Accessibility setting : status of end call using the power key
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_POWERKEY_END_CALLS       VCONFKEY_SETAPPL_PREFIX"/accessibility/powerkey_end_calls"

/**
 * @brief Accessibility setting : status of led notify
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_LED_NOTIFY       VCONFKEY_SETAPPL_PREFIX"/accessibility/led_notify"

/**
 * @brief Accessibility setting : power key shortcut
 *
 * 0 : off \n
 * 1 : always ask \n
 * 2 : screen reader(TTS) \n
 * 3 : negative colours \n
 * 4 : zoom \n
 * 5 : assistive light \n
 * 6 : shot reader \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_POWER_KEY_HOLD           VCONFKEY_SETAPPL_PREFIX"/accessibility/power_key_hold"

enum {
	SETTING_POWERKEY_SHORTCUT_OFF = 0,
	SETTING_POWERKEY_SHORTCUT_ALWAYS_ASK = 1,
	SETTING_POWERKEY_SHORTCUT_SCREEN_READER_TTS,
	SETTING_POWERKEY_SHORTCUT_NEGATIVE_COLOURS,
	SETTING_POWERKEY_SHORTCUT_ZOOM,
	SETTING_POWERKEY_SHORTCUT_ASSISTIVE_LIGHT,
	SETTING_POWERKEY_SHORTCUT_SHOT_READER,
	SETTING_POWERKEY_SHORTCUT_MAX
};


/**
 * @brief Powersaving : status of system power saving
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PWRSV_SYSMODE_STATUS                   VCONFKEY_SETAPPL_PREFIX"/pwrsv/system_mode/status"

/**
 * @brief Powersaving : status of custom power saving
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_STATUS                  VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/status"

/**
 * @brief Powersaving : status of turn off wifi
 *
 * 0 : Turn on \n
 * 1 : Turn off \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_WIFI                    VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/wifi"

/**
 * @brief Powersaving : status of turn off bluetooth
 *
 * 0 : Turn on \n
 * 1 : Turn off \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_BT                      VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/bt"

/**
 * @brief Powersaving : status of turn off gps
 *
 * 0 : Turn on \n
 * 1 : Turn off \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_GPS                     VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/gps"

/**
 * @brief Powersaving : status of turn off data sync
 *
 * 0 : Turn on \n
 * 1 : Turn off \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_DATASYNC                VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/data_sync"

/**
 * @brief Powersaving : status of turn off hotspot
 *
 * 0 : Turn on \n
 * 1 : Turn off \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_HOTSPOT                 VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/hotspot"

/**
 * @brief Powersaving : status of adjust brightness
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_BRT_STATUS              VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/brt/status"

/**
 * @brief Powersaving : status of automatic brightness for custom power saving
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_BRT_AUTO_STATUS         VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/brt/auto/status"

/**
 * @brief Powersaving : level of brightness for custom power saving
 *
 * Min : 0 \n
 * Max : 24 \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_BRT_VALUE               VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/brt/value"

/**
 * @brief Powersaving : level of backlight time for custom power saving
 *
 * 15 : 15 sec \n
 * 30 : 30 sec \n
 * 60 : 1 min \n
 * 120 : 2 min \n
 * 600 : 10 min \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_BLTIME                  VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/backlight/time"
/* display - backlight time */
enum {
	SETTING_BACKLIGHT_TIME_8SEC = 8,
	SETTING_BACKLIGHT_TIME_15SEC = 15,
	SETTING_BACKLIGHT_TIME_30SEC = 30,
	SETTING_BACKLIGHT_TIME_1MIN = 60,
	SETTING_BACKLIGHT_TIME_3MIN = 180,
	SETTING_BACKLIGHT_TIME_10MIN = 600,
	SETTING_BACKLIGHT_TIME_MAX
};

/**
 * @brief Powersaving : status of reminder for custom power saving
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PWRSV_SYSMODE_STATUS_REMINDER          VCONFKEY_SETAPPL_PREFIX"/pwrsv/system_mode/reminder"

/**
 * @brief Powersaving : rate of saving baterry power
 *
 * default 30 : 30%
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_AT                      VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/at"

/**
 * @brief Powersaving : status of cpu power saving
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_CPU                     VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/cpu"

/**
 * @brief Powersaving : status of display power saving
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_DISPLAY                 VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/display"

/**
 * @brief Powersaving : status of background color power saving
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_BG_COLOR                VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/bg_color"

/**
 * @brief Powersaving : status of turning off vibration on screen tap for power saving
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_SCREEN_VIB              VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/screen_vib"



/**
 * @brief Setting ticker noti : status of displaying message content
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_TICKER_NOTI_DISPLAY_CONTENT_MESSASGES          VCONFKEY_SETAPPL_PREFIX"/ticker_noti/display_content/messages"

/**
 * @brief Setting ticker noti : status of displaying email content
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_TICKER_NOTI_DISPLAY_CONTENT_EMAIL              VCONFKEY_SETAPPL_PREFIX"/ticker_noti/display_content/email"

/**
 * @brief Setting ticker noti : status of displaying im content
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_TICKER_NOTI_DISPLAY_CONTENT_IM                 VCONFKEY_SETAPPL_PREFIX"/ticker_noti/display_content/im"

/**
 * @brief Setting ticker noti : status of displaying twitter content
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_TICKER_NOTI_DISPLAY_CONTENT_TWITTER            VCONFKEY_SETAPPL_PREFIX"/ticker_noti/display_content/twitter"

/**
 * @brief Setting ticker noti : status of displaying facebook content
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_TICKER_NOTI_DISPLAY_CONTENT_FACEBOOK           VCONFKEY_SETAPPL_PREFIX"/ticker_noti/display_content/facebook"

/**
 * @brief Setting ticker noti : status of showing badge at messages
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_TICKER_NOTI_BADGE_MESSAGES           VCONFKEY_SETAPPL_PREFIX"/ticker_noti/badge/messages"

/**
 * @brief Setting ticker noti : status of showing badge at email
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_TICKER_NOTI_BADGE_EMAIL           VCONFKEY_SETAPPL_PREFIX"/ticker_noti/badge/email"

/**
 * @brief Setting ticker noti : status of showing badge at im
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_TICKER_NOTI_BADGE_IM           VCONFKEY_SETAPPL_PREFIX"/ticker_noti/badge/im"

/**
 * @brief Setting ticker noti : status of showing badge at facebook
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_TICKER_NOTI_BADGE_FACEBOOK           VCONFKEY_SETAPPL_PREFIX"/ticker_noti/badge/facebook"

/**
 * @brief Setting ticker noti : status of showing badge at twitter
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_TICKER_NOTI_BADGE_TWITTER           VCONFKEY_SETAPPL_PREFIX"/ticker_noti/badge/twitter"

/**
 * @brief setting value of sim change alert
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_FIND_MY_MOBILE_SIM_CHANGE_ALERT_BOOL   VCONFKEY_SETAPPL_PREFIX"/fmm/sim_change_alert"

/**
 * @brief recipient phone number
 */
#define VCONFKEY_SETAPPL_FIND_MY_MOBILE_RECIPIENTS_STR          VCONFKEY_SETAPPL_PREFIX"/fmm/recipients"

/**
 * @brief sender phone number
 */
#define VCONFKEY_SETAPPL_FIND_MY_MOBILE_SENDER_STR              VCONFKEY_SETAPPL_PREFIX"/fmm/sender"

/**
 * @brief message content when user change the sim
 */
#define VCONFKEY_SETAPPL_FIND_MY_MOBILE_MESSAGE_STR             VCONFKEY_SETAPPL_PREFIX"/fmm/alert_message"

/**
 * @brief status of remote control
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_FIND_MY_MOBILE_REMOTE_CONTROL_BOOL     VCONFKEY_SETAPPL_PREFIX"/fmm/remote_control"

/**
 * @brief status location consent
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_FIND_MY_MOBILE_LOCATION_CONSENT_BOOL   VCONFKEY_SETAPPL_PREFIX"/fmm/location_consent"

/**
 * @brief current language set
 *
 * Value : language set string
 */
#define VCONFKEY_LANGSET                                        "db/menu_widget/language"

/**
 * @brief current region format
 *
 * Value : region format string
 */
#define VCONFKEY_REGIONFORMAT                                   "db/menu_widget/regionformat"

/**
 * @brief current selected package name of menuscreen
 *
 * Value : package name string
 */
#define VCONFKEY_SETAPPL_SELECTED_PACKAGE_NAME	                "db/setting/menuscreen/package_name"

/**
 * @brief status of transaction tracking
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_TRANSACTION_TRACKING_BOOL        VCONFKEY_SETAPPL_PREFIX"/transaction_tracking"

/**
 * @brief status of expiry reminder
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_EXPIRY_REMINDER_BOOL             VCONFKEY_SETAPPL_PREFIX"/expiry_reminder"

/**
 * @brief index of roaming network type
 *
 * 0 : Auto download \n
 * 1 : Manual \n
 * 2 : Always reject \n
 */
#define VCONFKEY_SETAPPL_ROAMING_NETWORK_INT                    VCONFKEY_SETAPPL_PREFIX"/roaming_network"
/* phone - license setting */
enum {
	SETTING_ROAM_NET_AUTO_DOWNLOAD = 0,
	SETTING_ROAM_NET_MANUAL,
	SETTING_ROAM_NET_ALWAYS_REJECT,
	SETTING_ROAM_NET_MAX
};

/**
 * @brief default memory of wap downloads
 *
 * 0 : Phone \n
 * 1 : Memory card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_WAP_INT                    VCONFKEY_SETAPPL_PREFIX"/default_memory/wap"

/**
 * @brief default memory of bluetooth
 *
 * 0 : Phone \n
 * 1 : Memory card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_BLUETOOTH_INT              VCONFKEY_SETAPPL_PREFIX"/default_memory/bluetooth"

/**
 * @brief default memory of camera
 *
 * 0 : Phone \n
 * 1 : Memory card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_CAMERA_INT                 VCONFKEY_SETAPPL_PREFIX"/default_memory/camera"

/**
 * @brief default memory of voice recorder
 *
 * 0 : Phone \n
 * 1 : Memory card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_VOICE_RECORDER_INT         VCONFKEY_SETAPPL_PREFIX"/default_memory/voice_recorder"

/**
 * @brief default memory of FM radio
 *
 * 0 : Phone \n
 * 1 : Memory card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_FM_RADIO_INT               VCONFKEY_SETAPPL_PREFIX"/default_memory/fm_radio"

/**
 * @brief default memory of allshare
 *
 * 0 : Phone \n
 * 1 : Memory card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_ALL_SHARE_INT              VCONFKEY_SETAPPL_PREFIX"/default_memory/all_share"

/**
 * @brief default memory of DVB-H
 *
 * 0 : Phone \n
 * 1 : Memory card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_DVB_H_INT              VCONFKEY_SETAPPL_PREFIX"/default_memory/dvb_h"

/**
 * @brief default memory of adobe air
 *
 * 0 : Phone \n
 * 1 : Memory card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_ADOBE_AIR_INT              VCONFKEY_SETAPPL_PREFIX"/default_memory/adobe_air"
/* memory - default memory */
enum {
	SETTING_DEF_MEMORY_PHONE = 0,
	SETTING_DEF_MEMORY_MMC,
	SETTING_DEF_MEMORY_MAX
};


/**
 * @brief status of battery percentage
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_BATTERY_PERCENTAGE_BOOL                VCONFKEY_SETAPPL_PREFIX"/battery_percentage"

/**
 * @brief status of accessibility
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_ACCESSIBILITY            VCONFKEY_SETAPPL_PREFIX"/accessibility/accessibility"

/**
 * @brief status of negative colors
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_HIGH_CONTRAST            VCONFKEY_SETAPPL_PREFIX"/accessibility/high_contrast"

/**
 * @brief status of zoom
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_SCREEN_ZOOM              VCONFKEY_SETAPPL_PREFIX"/accessibility/screen_zoom"

/**
 * @brief current timezone id
 */
#define VCONFKEY_SETAPPL_TIMEZONE_ID                            VCONFKEY_SETAPPL_PREFIX"/timezone_id"

/**
 * @brief offset of timezone
 */
#define VCONFKEY_SETAPPL_TIMEZONE_INT                           VCONFKEY_SETAPPL_PREFIX"/timezone"

/**
 * @brief status of auto-rotate screen
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ROTATE_LOCK_BOOL                       VCONFKEY_SETAPPL_PREFIX"/rotate_lock"

/**
 * @brief status of mono audio
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_MONO_AUDIO               VCONFKEY_SETAPPL_PREFIX"/accessibility/mono_audio"

/**
 * @brief type of displaying time
 *
 * 1 : 12 hour type \n
 * 2 : 24 hour type \n
 */
#define VCONFKEY_REGIONFORMAT_TIME1224	                        "db/menu_widget/regionformat_time1224"
enum {
	VCONFKEY_TIME_FORMAT_12 = 1,
	VCONFKEY_TIME_FORMAT_24
};

/**
 * @brief Image viewer slideshow interval time (secs)
 *
 * type : double
 */
#define VCONFKEY_SETAPPL_GALLERY_SLIDESHOW_INTERVAL             VCONFKEY_SETAPPL_PREFIX"/gallery/interval_time"

/**
 * @brief Image viewer slideshow effect type
 *
 * type : string
 * Slide, Fade, Blind, Iris, Dissolve
 */
#define VCONFKEY_SETAPPL_GALLERY_SLIDESHOW_EFFECT             VCONFKEY_SETAPPL_PREFIX"/gallery/ss_effect"

/**
 * @brief Image viewer slideshow repeat state
 *
 * type : bool
 * 0 : Slide show repeat
 * 1 : Slide show do not repeat
 */
#define VCONFKEY_SETAPPL_GALLERY_SLIDESHOW_REPEAT             VCONFKEY_SETAPPL_PREFIX"/gallery/repeat_state"

/**
 * @brief Image viewer slideshow shuffle state
 *
 * type : bool
 * 0 : Normal list
 * 1 : Shuffled list
 */
#define VCONFKEY_SETAPPL_GALLERY_SLIDESHOW_SHUFFLE             VCONFKEY_SETAPPL_PREFIX"/gallery/shuffle_state"

/**
 * @brief Voicerecorder recording time limitation
 *
 * type : int
 * 0 : Unlimited
 * 1 : Limit for MMS
 */
#define VCONFKEY_SETAPPL_VOICERECORDER_TIME_LIMIT             VCONFKEY_SETAPPL_PREFIX"/voicerecorder/time_limit"

/**
 * @brief Voicerecorder recording quality
 *
 * type : int
 * 0 : Low quality
 * 1 : High quality
 */
#define VCONFKEY_SETAPPL_VOICERECORDER_QUALITY             VCONFKEY_SETAPPL_PREFIX"/voicerecorder/quality"

/**
 * @brief Voicerecorder GPS tagging
 *
 * type : bool
 * 0 : off
 * 1 : on
 */
#define VCONFKEY_SETAPPL_VOICERECORDER_GPS             VCONFKEY_SETAPPL_PREFIX"/voicerecorder/gps"

/**
 * @brief left attempts count of sim lock
 *
 * type : int
 * 0 : min count
 * 5 : max count
 */
#define VCONFKEY_SETAPPL_SIM_LOCK_ATTEMPTS_LEFT_INT	VCONFKEY_SETAPPL_PREFIX"/sim_lock_attempts_left"

/**
 * @brief status that font changed
 *
 * type : int
 * 0 : not changed
 * 5 : changed
 */
#define VCONFKEY_SETAPPL_FONT_CHANGED 		"memoroy/setting/font_changed"

/**
 * @brief status of flight mode
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_FLIGHT_MODE_BOOL           VCONFKEY_SETAPPL_PREFIX"/flight_mode"

/**
 * @brief current device name
 */
#define VCONFKEY_SETAPPL_DEVICE_NAME_STR            VCONFKEY_SETAPPL_PREFIX"/device_name"


/**
 * @brief status of sound
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_SOUND_STATUS_BOOL          VCONFKEY_SETAPPL_PREFIX"/sound/sound_on"

/**
 * @brief status of vibration
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_VIBRATION_STATUS_BOOL      VCONFKEY_SETAPPL_PREFIX"/sound/vibration_on"

/**
 * @brief status of data roaming
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_DATA_ROAMING_BOOL    VCONFKEY_SETAPPL_PREFIX"/data_roaming"

/**
 * @brief status of motion activation
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_MOTION_ACTIVATION          VCONFKEY_SETAPPL_PREFIX"/motion_active"

/**
 * @brief status of use tilt
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_USE_TILT                   VCONFKEY_SETAPPL_PREFIX"/use_tilt"

/**
 * @brief status of use tilt scroll
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_USE_TILT_SCROLL                   VCONFKEY_SETAPPL_PREFIX"/use_tilt_scroll"

/**
 * @brief level of tilt
 *
 * 0 : MIN \n
 * 7 : MAX \n
 */
#define VCONFKEY_SETAPPL_TILT_SENSITIVITY           VCONFKEY_SETAPPL_PREFIX"/tilt_sensitivity"

/**
 * @brief level of tilt scroll
 *
 * 0 : MIN \n
 * 7 : MAX \n
 */
#define VCONFKEY_SETAPPL_TILT_SCROLL_SENSITIVITY           VCONFKEY_SETAPPL_PREFIX"/tilt_scroll_sensitivity"

/**
 * @brief status of use panning
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_USE_PANNING                VCONFKEY_SETAPPL_PREFIX"/use_panning"

/**
 * @brief status of use panning to browse
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_USE_PANNING_BROWSER                VCONFKEY_SETAPPL_PREFIX"/use_panning_browser"

/**
 * @brief level of panning
 *
 * 0 : MIN \n
 * 7 : MAX \n
 */
#define VCONFKEY_SETAPPL_PANNING_SENSITIVITY        VCONFKEY_SETAPPL_PREFIX"/panning_sensitivity"

/**
 * @brief level of panning browser
 *
 * 0 : MIN \n
 * 7 : MAX \n
 */
#define VCONFKEY_SETAPPL_PANNING_BROWSER_SENSITIVITY        VCONFKEY_SETAPPL_PREFIX"/panning_browser_sensitivity"

/**
 * @brief status of use double tap
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_USE_DOUBLE_TAP             VCONFKEY_SETAPPL_PREFIX"/use_double_tap"

/**
 * @brief status of use turn over
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_USE_TURN_OVER              VCONFKEY_SETAPPL_PREFIX"/use_turn_over"

/**
 * @brief status of use pick up
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_USE_PICK_UP                VCONFKEY_SETAPPL_PREFIX"/use_pick_up"

/**
 * @brief status of use pick up call
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_USE_PICK_UP_CALL                VCONFKEY_SETAPPL_PREFIX"/use_pick_up_call"

/**
 * @brief status of use shake
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_USE_SHAKE                  VCONFKEY_SETAPPL_PREFIX"/use_shake"

/**
 * @brief function of muting sounds by covering screen with your hand when play media
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PALM_TOUCH_MUTE            VCONFKEY_SETAPPL_PREFIX"/motion/palm_touch_mute"

/**
 * @brief function of capture screen by swiping it from right left or vice versa with the side of your hand
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PALM_SWIP_CAPTURE          VCONFKEY_SETAPPL_PREFIX"/motion/palm_swipe_capture"

/**
 * @brief current background image file path
 *
 * Value : BG image file path
 */
#define VCONFKEY_BGSET                              "db/menu_widget/bgset"

/**
 * @brief activate Driving mode
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_DRIVINGMODE_DRIVINGMODE		VCONFKEY_SETAPPL_PREFIX"/drivingmode/drivingmode"

/**
 * @brief activate Driving mode only for incoming call
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_DRIVINGMODE_INCOMINGCALL		VCONFKEY_SETAPPL_PREFIX"/drivingmode/incomingcall"

/**
 * @brief activate Driving mode only for message
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_DRIVINGMODE_MESSAGE			VCONFKEY_SETAPPL_PREFIX"/drivingmode/message"

/**
 * @brief activate Driving mode only for new email
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_DRIVINGMODE_NEWEMAILS			VCONFKEY_SETAPPL_PREFIX"/drivingmode/newemails"

/**
 * @brief activate Driving mode only for new voicemail
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_DRIVINGMODE_NEWVOICEMAILS		VCONFKEY_SETAPPL_PREFIX"/drivingmode/newvoicemails"

/**
 * @brief activate Driving mode only for alarm
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_DRIVINGMODE_ALARM				VCONFKEY_SETAPPL_PREFIX"/drivingmode/alarm"

/**
 * @brief activate Driving mode only for schedule
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_DRIVINGMODE_SCHEDULE			VCONFKEY_SETAPPL_PREFIX"/drivingmode/schedule"

/**
 * @brief activate Driving mode only for unlockscreen
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_DRIVINGMODE_UNLOCKSCREEN		VCONFKEY_SETAPPL_PREFIX"/drivingmode/unlockscreen"

/**
 * @brief developer options - how many background processes are allowed for an app
 *
 * 0 : Standard limit \n
 * 1 : No background process \n
 * 2 : 1 process at most \n
 * 3 : 2 process at most \n
 * 4 : 3 process at most \n
 * 5 : 4 process at most \n
 */
#define VCONFKEY_SETAPPL_DEVOPTION_BGPROCESS		VCONFKEY_SETAPPL_PREFIX"/devoption/bgprocess"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_SETTING_KEYS_H__ */

