/*
 * vconf-internal-keys
 *
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Jonghyuk Lee <jhyuk47.lee@samsung.com>
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

#ifndef __VCONF_INTERNAL_FACE_SVC_KEYS_H__
#define __VCONF_INTERNAL_FACE_SVC_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-face-svc-keys.h
 * @defgroup    vconf_internal_face_svc_key Definitions of internal shared Keys for face service
 * @ingroup     vconf_internal_key
 * @author      jhyuk47.lee@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for face service \n
 */

/* ========================== Face Service Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_face_svc_key
 * @{
 * @brief Contacts Service Keys & Values\n
 *        Maintainer : jhyuk47.lee@samsung.com
 */

/**
 * @brief Face recognition state
 *
 * type : bool
 * 0: no recognitioning\n
 * 1: recognitioning \n
 */
#define VCONFKEY_FACE_SVC_FACE_RECOGNITIONING               "db/face-svc/face_recognitioning"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_FACE_SVC_KEYS_H__ */

