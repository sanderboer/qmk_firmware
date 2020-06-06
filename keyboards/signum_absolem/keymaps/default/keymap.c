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
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k10, k11, \
    k12, k13, k14, k15, k16, k17, k18, k19, k20, k21, k22, k23, \
    k24, k25, k26, k27, k28, k29, k30, k31, k32, k33, k34, k35, \
    k36, k37, k38, k39, k40, k41, k42, k43, k44, k45, k46, k47  \
) \
{ \
    {k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k10, k11}, \
    {k12, k13, k14, k15, k16, k17, k18, k19, k20, k21, k22, k23}, \
    {k24, k25, k26, k27, k28, k29, k30, k31, k32, k33, k34, k35}, \
    {k36, k37, k38, k39, k40, k41, k42, k43, k44, k45, k46, k47}  \
}

// Defines names for use in layer keycodes and the keymap
enum layer_names {
  _COLEMAK, _QWERTY, _SYM, _NAV, _NUM, _MISC
};
#define COLEMAK DF(_COLEMAK)
#define QWERTY DF(_QWERTY)
#define SYM MO(_SYM)
#define NAV MO(_NAV)
#define NUM MO(_NUM)
#define MISC MO(_MISC)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
  [_COLEMAK] = LAYOUT_absolem(
      KC_Q,    KC_W,    KC_F,    KC_P,    KC_B, KC_NO, KC_NO,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_ESCAPE,
      KC_A,    KC_R,    KC_S,    KC_T,    KC_G, KC_NO, KC_NO,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O,
      KC_Z,    KC_X,    KC_C,    KC_D,    KC_V, KC_NO, KC_NO,    KC_K,    KC_H,    SYM,     MISC,    QWERTY,
      KC_NO, KC_NO, KC_NO, MT(MOD_LCTL, KC_TAB), LT(NAV, KC_SPC),  KC_LSHIFT,  MT(MOD_MEH, KC_ENTER),  LT(NUM, KC_BSPACE),  MT(MOD_LGUI, KC_ESCAPE), KC_NO, KC_NO, KC_NO
),
   [_QWERTY] = LAYOUT_absolem(
        KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO, KC_NO, KC_Y, KC_U, KC_I, KC_O, KC_P,
        KC_A, KC_S, KC_D, KC_F, KC_G, KC_NO, KC_NO, KC_H, KC_J, KC_K, KC_L, KC_NO,
        KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO, KC_NO, KC_N, KC_M, SYM,  MISC, COLEMAK,
       KC_NO, KC_NO, KC_NO, MT(MOD_LCTL, KC_TAB), LT(NAV, KC_SPC),  KC_LSHIFT,  MT(MOD_MEH, KC_ENTER),  LT(NUM, KC_BSPACE),  MT(MOD_LGUI, KC_ESCAPE), KC_NO, KC_NO, KC_NO
),

   [_SYM] = LAYOUT_absolem(
       KC_RABK, KC_RCBR, KC_RBRC, KC_RPRN, KC_BSLASH, KC_NO,  KC_NO,  KC_TILD, KC_CIRC, KC_NO,   KC_NO,   KC_AT ,
       KC_LABK, KC_LCBR, KC_LBRC, KC_LPRN, KC_SLASH,  KC_NO,  KC_NO,  KC_PERC, KC_ASTR, KC_COLN, KC_SCLN, KC_NO,
       KC_HASH, KC_DLR,  KC_QUES, KC_EXLM, KC_PIPE,   KC_NO,  KC_NO,  KC_NO,   KC_AMPR, KC_EQL,  KC_PLUS, KC_QUOT,
       KC_NO,   KC_NO,   KC_NO,   KC_UNDS, KC_QUOT,   KC_DQT, KC_DOT, KC_COMM, KC_PMNS, KC_NO,   KC_NO,   KC_NO
)  ,
   [_NAV] = LAYOUT_absolem(
       KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, KC_NO, KC_PGUP,   KC_NO,   KC_UP,   KC_NO,    LCTL(KC_GRAVE),
       KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_NO, KC_PGDOWN, KC_LEFT, KC_DOWN, KC_RIGHT, LGUI(KC_GRAVE),
       OSM(MOD_LGUI|MOD_LSFT), OSM(MOD_LSFT|MOD_LALT), OSM(MOD_LALT|MOD_LCTL), KC_LCTL, KC_LALT, KC_NO, KC_NO, KC_APP, KC_HOME,  KC_SPC, KC_END, LCA(KC_GRAVE),
       KC_NO, KC_NO, KC_NO, OSM(MOD_LCTL), NAV, OSM(MOD_LALT),      KC_DEL,    KC_BSPACE, KC_ESCAPE, KC_NO, KC_NO, KC_NO
),
  [_NUM] = LAYOUT_absolem(
      KC_F1,  KC_F2,  KC_F3,  KC_F4,   KC_F5,   KC_NO,    KC_NO, KC_PMNS,   KC_P7, KC_P8, KC_P9, KC_BSPACE,
      KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_NO,    KC_NO, KC_PPLS,   KC_P4, KC_P5, KC_6,  KC_PDOT,
      KC_F11, KC_F12, KC_F13, KC_PSCR, KC_PAUS, KC_NO,    KC_NO, KC_P0,     KC_P1, KC_P2, KC_P3, KC_PCMM,
      KC_NO,  KC_NO,  KC_NO,  KC_TAB,  KC_SPC,  KC_ENTER, KC_NO, KC_BSPACE, KC_NO, KC_NO, KC_NO, KC_NO
                          ),
  [_MISC] = LAYOUT_absolem(
      LGUI(KC_1),LGUI(KC_2),LGUI(KC_3),LGUI(KC_4),LGUI(KC_5), KC_NO, KC_NO, LGUI(KC_6),LGUI(KC_7),LGUI(KC_8),LGUI(KC_9), LGUI(KC_0),
      KC_MUTE, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLU, KC_NO, KC_NO, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO, KC_NO,
      RGB_TOG, RGB_MOD, RGB_VAI, RGB_M_B, KC_VOLD, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
                           )
};




















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
