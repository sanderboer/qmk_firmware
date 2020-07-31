// -*- compile-command: (concat "pushd " sndr-project-root " && lxqt-sudo make signum_absolem:default:dfu"); -*-
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

#define LAYOUT_absolem(                               \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39 \
) \
{ \
  {k00, k01, k02, k03, k04, KC_NO, KC_NO, k05, k06, k07, k08, k09},  \
  {k10, k11, k12, k13, k14, KC_NO, KC_NO, k15, k16, k17, k18, k19},  \
  {k20, k21, k22, k23, k24, KC_NO, KC_NO, k25, k26, k27, k28, k29},  \
  {KC_NO, KC_NO, KC_NO, k32, k33,  k34, k35, k36, k37, KC_NO, KC_NO, KC_NO } \
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
