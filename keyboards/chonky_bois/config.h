// -*- compile-command: (concat "pushd " sndr-project-root " && lxqt-sudo make chonky_bois:default:avrdude-split-right"); -*-
/*
Copyright 2020 Sander Boer

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"
#define USE_I2C

/* Select hand configuration */
// #define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define SPLIT_HAND_PIN B7
//This will read the specified pin. If it's high, then the controller assumes it is the left hand, and if it's low, it's assumed to be the right side.
// #define SPLIT_HAND_MATRIX_GRID D0, F1


/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0000
#define DEVICE_VER 0x0001
#define MANUFACTURER Sander Boer
#define PRODUCT Chonky_Bois
#define DESCRIPTION A custom chonky keyboard

/* mouse settings */
#define MK_KINETIC_SPEED

/* key matrix size */
//according to crkbd rows are doubled ?
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

/* key matrix pins */
#define MATRIX_ROW_PINS { D2, D1, F5, B5 }
#define MATRIX_COL_PINS { B4, D7, D0, E6, D4 }
// #define MATRIX_ROW_PINS_RIGHT { D2, D1, F5, B5 }
// #define MATRIX_COL_PINS_RIGHT { B4, D7, D0, E6, D4 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
// #define DEBOUNCE 5
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
