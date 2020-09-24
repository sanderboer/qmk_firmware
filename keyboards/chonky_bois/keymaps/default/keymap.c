// -*- compile-command: (concat "pushd " sndr-project-root " && lxqt-sudo make chonky_bois:default:avrdude-split-right"); -*-
/* Copyright 2020 Sander Boer
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

/* #define LAYOUT_absolem(                               \
     k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
     k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
     k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, \
     k30, k31, k32, k33, k34, k35, k36, k37, k38, k39 \
 ) \
 { \
   {k00,   k01,   k02,   k03, k04,   k05, k06, k07,   k08,   k09   },  \
   {k10,   k11,   k12,   k13, k14,   k15, k16, k17,   k18,   k19   },  \
   {k20,   k21,   k22,   k23, k24,   k25, k26, k27,   k28,   k29   },  \
   {KC_NO, KC_NO, KC_NO, k33, k34,   k35, k36, KC_NO, KC_NO, KC_NO } \
   }
*/

#define LAYOUT_absolem(                                       \
  L00, L01, L02, L03, L04,           R00, R01, R02, R03, R04, \
  L10, L11, L12, L13, L14,           R10, R11, R12, R13, R14, \
  L20, L21, L22, L23, L24,           R20, R21, R22, R23, R24, \
  lx0, lx1, lx2, L30, L31,           R30, R31, rx0, rx1, rx2  \
  ) \
  { \
    { L00, L01, L02, L03, L04 },       \
    { L10, L11, L12, L13, L14 },       \
    { L20, L21, L22, L23, L24 },       \
    { KC_NO, KC_NO, KC_NO, L30, L31 }, \
    { R04, R03, R02, R01, R00 },       \
    { R14, R13, R12, R11, R10 },       \
    { R24, R23, R22, R21, R20 },       \
    { KC_NO, KC_NO, KC_NO, R31, R30 }  \
  }


#include "absolem_layouts.h"

/*

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
