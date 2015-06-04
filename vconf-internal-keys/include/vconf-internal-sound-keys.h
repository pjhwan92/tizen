/*
 * vconf-internal-sound-keys
 *
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Seungbae Shin <seungbae.shin@samsung.com>
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

#ifndef __VCONF_INTERNAL_SOUND_KEYS_H__
#define __VCONF_INTERNAL_SOUND_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-sound-keys.h
 * @defgroup    vconf_internal_sound_key Definitions of internal shared Keys for sound
 * @ingroup     vconf_internal_key
 * @author      seungbae.shin@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for sound \n
 */

/* ========================== Sound Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_sound_key
 * @{
 * @brief Sound Keys & Values\n
 *        Maintainer : seungbae.shin@samsung.com
 */

/**
 * @brief Sound status(int)
 *
 * Sound is not in use = 0 \n
 * Sound is in use = 1
 */
#define VCONFKEY_SOUND_STATUS "memory/Sound/SoundStatus"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_SOUND_KEYS_H__ */
