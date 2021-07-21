/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0xB2, 0xD7, 0xBF, 0x79, 0x30, 0x92, 0x05, 0x07}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 3, 4 }

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xA153 // machineabuse
#define PRODUCT_ID      0xF3BE // autogenerated
#define DEVICE_VER      0x0010
#define MANUFACTURER    imchipwood
#define PRODUCT         DumbPad V1.1
#define DESCRIPTION     DumbPad V1.1

/* Column/Row IO definitions */
#define MATRIX_ROWS 4
#define MATRIX_COLS 5
#define MATRIX_ROW_PINS { F4, F5, F6, F7 }
#define MATRIX_COL_PINS { C6, D7, E6, B4, B5 }
#define UNUSED_PINS

/* Single rotary encoder */
#define ENCODERS_PAD_A { B2 }
#define ENCODERS_PAD_B { D4 }
// #define ENCODER_DIRECTION_FLIP

/* Onboard LEDs  */
#define LED_00 B6
#define LED_01 B1
#define LED_02 B3

/* Bootmagic - hold down rotary encoder pushbutton while plugging in to enter bootloader */
#define BOOTMAGIC_LITE_ROW 3
#define BOOTMAGIC_LITE_COLUMN 0