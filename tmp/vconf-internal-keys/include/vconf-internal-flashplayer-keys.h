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

#ifndef __VCONF_INTERNAL_FLASHPLAYER_KEYS_H__
#define __VCONF_INTERNAL_FLASHPLAYER_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-flashplayer-keys.h
 * @defgroup    vconf_internal_flashplayer_key Definitions of internal shared Keys for flashplayer
 * @ingroup     vconf_internal_key
 * @author      jst.kim@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for flashplayer \n
 */

/* ========================== Flashplayer Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_flashplayer_key
 * @{
 * @brief Flashplayer Keys & Values\n
 *        Maintainer : jst.kim@samsung.com
 */

/**
 * @brief Flashplayer full screen mode status
 * 0 : Normal mode
 * 1 : Full screen mode
 */
 #define VCONFKEY_FLASHPLAYER_FULLSCREEN "memory/flashplayer/fullscreen"
enum {
 /** Normal mode */
 VCONFKEY_FLASHPLAYER_FULLSCREEN_OFF = 0x00,
 /** Full screen mode */
 VCONFKEY_FLASHPLAYER_FULLSCREEN_ON
};


/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_FLASHPLAYER_KEYS_H__ */

