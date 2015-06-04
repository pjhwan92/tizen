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

#ifndef __VCONF_INTERNAL_LOCATION_KEYS_H__
#define __VCONF_INTERNAL_LOCATION_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-location-keys.h
 * @defgroup    vconf_internal_location_key Definitions of internal shared Keys for location
 * @ingroup     vconf_internal_key
 * @author      daejins.kim@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for location \n
 */

/* ========================== Location Setting Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_location_key
 * @{
 * @brief Location Setting Keys & Values\n
 *        Maintainer : daejins.kim@samsung.com
 */

/**
 * @brief location service on/off status(int)
 *
 * Disabled = 0 \n
 * Enabled = 1
 */
#define VCONFKEY_LOCATION_ENABLED "db/location/setting/GpsEnabled"

/**
 * @brief advanced GPS on/off status(int)
 *
 * Disabled = 0 \n
 * Enabled = 1
 */
#define VCONFKEY_LOCATION_AGPS_ENABLED "db/location/setting/AgpsEnabled"

/**
 * @brief network position on/off status(int)
 *
 * Disabled = 0 \n
 * Enabled = 1
 */
#define VCONFKEY_LOCATION_NETWORK_ENABLED "db/location/setting/NetworkEnabled"

/**
 * @brief sensor position on/off status(int)
 *
 * Disabled = 0 \n
 * Enabled = 1
 */
#define VCONFKEY_LOCATION_SENSOR_ENABLED "db/location/setting/SensorEnabled"

/**
 * @}
 */

/* ========================== GPS setting Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_location_key
 * @{
 * @brief Replay mode Keys & Values\n
 *        Maintainer : daejins.kim@samsung.com
 */

/**
 * @brief GPS operation mode(int)
 *
 * STANDALONE = 0 \n
 * MS_BASED = 1 \n
 * MS_ASSISTED = 2
 */
#define VCONFKEY_LOCATION_GPS_OPERATION "db/location/gps/Operation"
enum {
	VCONFKEY_GPS_OPERATION_STANDALONE = 0,
	VCONFKEY_GPS_OPERATION_MS_BASED,
	VCONFKEY_GPS_OPERATION_MS_ASSISTED,
	VCONFKEY_GPS_OPERATION_MAX
};

/**
 * @brief GPS starting mode(int)
 *
 * HOT_START = 0 \n
 * COLD_START = 1
 */
#define VCONFKEY_LOCATION_GPS_STARTING "db/location/gps/Starting"
enum {
	VCONFKEY_GPS_STARTING_HOT = 0,
	VCONFKEY_GPS_STARTING_COLD,
	VCONFKEY_GPS_STARTING_MAX
};

/**
 * @brief GPS session mode(int)
 *
 * SINGLE_FIX = 0 \n
 * TRACKING = 1
 */
#define VCONFKEY_LOCATION_GPS_SESSION "db/location/gps/Session"
enum {
	VCONFKEY_GPS_SESSION_SINGLE_FIX = 0,
	VCONFKEY_GPS_SESSION_TRACKING,
	VCONFKEY_GPS_SESSION_MAX
};

/**
 * @brief SUPL server address(string)
 */
#define VCONFKEY_LOCATION_SUPL_SERVER "db/location/supl/Server"

/**
 * @brief SUPL port number(int)
 */
#define VCONFKEY_LOCATION_SUPL_PORT "db/location/supl/Port"

/**
 * @brief SUPL SSL mode on/off status(int)
 *
 * Disabled = 0 \n
 * Enabled = 1
 */
#define VCONFKEY_LOCATION_SUPL_SSL "db/location/supl/SslEnabled"
/**
 * @}
 */

/* ========================== NMEA Logging mode Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_location_key
 * @{
 * @brief Replay mode Keys & Values\n
 *        Maintainer : daejins.kim@samsung.com
 */

/**
 * @brief nmea logging mode on/off status(int)
 *
 * Disabled = 0 \n
 * Enabled = 1
 */
#define VCONFKEY_LOCATION_NMEA_LOGGING "db/location/nmea/LoggingEnabled"

/**
 * @}
 */

/* ========================== Replay mode Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_location_key
 * @{
 * @brief Replay mode Keys & Values\n
 *        Maintainer : daejins.kim@samsung.com
 */

/**
 * @brief replay mode on/off status(int)
 *
 * Disabled = 0 \n
 * Enabled = 1
 */
#define VCONFKEY_LOCATION_REPLAY_ENABLED "db/location/replay/ReplayEnabled"

/**
 * @brief replay mode(int)
 *
 * REPLAY_OFF = 0 \n
 * REPLAY_NMEA = 1 \n
 * REPLAY_MANAUL = 2
 */
#define VCONFKEY_LOCATION_REPLAY_MODE "db/location/replay/ReplayMode"
enum {
	VCONFKEY_GPS_REPLAY_OFF = 0,
	VCONFKEY_GPS_REPLAY_NMEA,
	VCONFKEY_GPS_REPLAY_MANAUL,
	VCONFKEY_GPS_REPLAY_MODE_MAX
};

/**
 * @brief replay nmea mode : file name(string)
 */
#define VCONFKEY_LOCATION_NMEA_FILE_NAME "db/location/replay/FileName"

/**
 * @brief replay manual mode : latitude(double)
 */
#define VCONFKEY_LOCATION_MANUAL_LATITUDE "db/location/replay/ManualLatitude"

/**
 * @brief replay manual mode : longitude(double)
 */
#define VCONFKEY_LOCATION_MANUAL_LONGITUDE "db/location/replay/ManualLongitude"

/**
 * @brief replay manual mode : altitude(double)
 */
#define VCONFKEY_LOCATION_MANUAL_ALTITUDE "db/location/replay/ManualAltitude"

/**
 * @}
 */

/* ========================== GPS / WPS Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_location_key
 * @{
 * @brief GPS/ WPS Keys & Values\n
 *        Maintainer : daejins.kim@samsung.com
 */

/**
 * @brief Position fix status(int)
 *
 * POSITION OFF = 0 \n
 * POSITION_SEARCHING = 1 \n
 * POSITION_CONNECTED = 2
 *
 */
#define VCONFKEY_LOCATION_POSITION_STATE "memory/location/position/state"
enum {
	VCONFKEY_LOCATION_POSITION_OFF = 0,
	VCONFKEY_LOCATION_POSITION_SEARCHING,
	VCONFKEY_LOCATION_POSITION_CONNECTED,
	VCONFKEY_LOCATION_POSITION_STATE_MAX
};

/**
 * @brief GPS status(int)
 *
 * GPS OFF = 0 \n
 * GPS_SEARCHING = 1 \n
 * GPS_CONNECTED = 2
 *
 */
#define VCONFKEY_LOCATION_GPS_STATE "memory/location/gps/state"
enum {
	VCONFKEY_LOCATION_GPS_OFF = 0,
	VCONFKEY_LOCATION_GPS_SEARCHING,
	VCONFKEY_LOCATION_GPS_CONNECTED,
	VCONFKEY_LOCATION_GPS_STATE_MAX
};

/**
 * @brief WPS status(int)
 *
 * WPS OFF = 0 \n
 * WPS_SEARCHING = 1 \n
 * WPS_CONNECTED = 2
 *
 */
#define VCONFKEY_LOCATION_WPS_STATE "memory/location/wps/state"
enum {
	VCONFKEY_LOCATION_WPS_OFF = 0,
	VCONFKEY_LOCATION_WPS_SEARCHING,
	VCONFKEY_LOCATION_WPS_CONNECTED,
	VCONFKEY_LOCATION_WPS_STATE_MAX
};

/**
 * @}
 */

/* ========================== GPS / WPS Last Position Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_location_key
 * @{
 * @brief GPS/ WPS Keys & Values\n
 *        Maintainer : daejins.kim@samsung.com
 */

/**
 * @brief last GPS timestamp(int)
 */
#define VCONFKEY_LOCATION_LAST_GPS_TIMESTAMP "db/location/last/gps/Timestamp"

/**
 * @brief last GPS latitude(double)
 */
#define VCONFKEY_LOCATION_LAST_GPS_LATITUDE "db/location/last/gps/Latitude"

/**
 * @brief last GPS longitude(double)
 */
#define VCONFKEY_LOCATION_LAST_GPS_LONGITUDE "db/location/last/gps/Longitude"

/**
 * @brief last GPS altitude(double)
 */
#define VCONFKEY_LOCATION_LAST_GPS_ALTITUDE "db/location/last/gps/Altitude"

/**
 * @brief last GPS speed(double)
 */
#define VCONFKEY_LOCATION_LAST_GPS_SPEED "db/location/last/gps/Speed"

/**
 * @brief last GPS direction(double)
 */
#define VCONFKEY_LOCATION_LAST_GPS_DIRECTION "db/location/last/gps/Direction"

/**
 * @brief last GPS horizontal accuracy(double)
 */
#define VCONFKEY_LOCATION_LAST_GPS_HOR_ACCURACY "db/location/last/gps/HorAccuracy"

/**
 * @brief last GPS vertical accuracy(double)
 */
#define VCONFKEY_LOCATION_LAST_GPS_VER_ACCURACY "db/location/last/gps/VerAccuracy"

/**
 * @brief last WPS timestamp(int)
 */
#define VCONFKEY_LOCATION_LAST_WPS_TIMESTAMP "db/location/last/wps/Timestamp"

/**
 * @brief last WPS latitude(double)
 */
#define VCONFKEY_LOCATION_LAST_WPS_LATITUDE "db/location/last/wps/Latitude"

/**
 * @brief last WPS longitude(double)
 */
#define VCONFKEY_LOCATION_LAST_WPS_LONGITUDE "db/location/last/wps/Longitude"

/**
 * @brief last WPS altitude(double)
 */
#define VCONFKEY_LOCATION_LAST_WPS_ALTITUDE "db/location/last/wps/Altitude"

/**
 * @brief last WPS speed(double)
 */
#define VCONFKEY_LOCATION_LAST_WPS_SPEED "db/location/last/wps/Speed"

/**
 * @brief last WPS direction(double)
 */
#define VCONFKEY_LOCATION_LAST_WPS_DIRECTION "db/location/last/wps/Direction"

/**
 * @brief last WPS horizontal accuracy(double)
 */
#define VCONFKEY_LOCATION_LAST_WPS_HOR_ACCURACY "db/location/last/wps/HorAccuracy"

/**
 * @brief last CPS timestamp(int)
 */
#define VCONFKEY_LOCATION_LAST_CPS_TIMESTAMP "db/location/last/cps/Timestamp"

/**
 * @brief last CPS latitude(double)
 */
#define VCONFKEY_LOCATION_LAST_CPS_LATITUDE "db/location/last/cps/Latitude"

/**
 * @brief last CPS longitude(double)
 */
#define VCONFKEY_LOCATION_LAST_CPS_LONGITUDE "db/location/last/cps/Longitude"

/**
 * @brief last CPS altitude(double)
 */
#define VCONFKEY_LOCATION_LAST_CPS_ALTITUDE "db/location/last/cps/Altitude"

/**
 * @brief last CPS horizontal accuracy(double)
 */
#define VCONFKEY_LOCATION_LAST_CPS_HOR_ACCURACY "db/location/last/cps/HorAccuracy"
/**
 * @}
 */

#endif				/* __VCONF_INTERNAL_LOCATION_KEYS_H__ */
