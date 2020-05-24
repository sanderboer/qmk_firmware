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
#define LAYOUT_ortho_4x10( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39 \
) \
{ \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09 }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19 }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29 }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39 }  \
}

#define LAYOUT_absolem LAYOUT_ortho_4x10
#define _RAISE 1
#define _LOWER 1
#define _ADJUST 16

#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define ADJUST MO(_ADJUST)

// Defines names for use in layer keycodes and the keymap
enum layer_names {
  _COLEMAK, _QWERTY, _SYM, _NAV, _NUM, _MISC
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
  [_COLEMAK] = LAYOUT_absolem(
    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_NO,
    KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O,   
    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_K,    KC_H,    KC_NO, KC_NO,  KC_NO,
    KC_NO, KC_NO, KC_TAB, KC_SPC,   KC_ENTER,  KC_LSHIFT,  KC_BSPACE,   KC_ESCAPE, KC_NO, KC_NO
),
   [_QWERTY] = LAYOUT_absolem(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_NO,   
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_NO, KC_NO,  KC_NO,
    KC_NO, KC_NO, KC_TAB, KC_SPC,   KC_ENTER,  KC_LSHIFT,  KC_BSPACE,   KC_ESCAPE, KC_NO, KC_NO
),

   [_SYM] = LAYOUT_absolem(
    KC_RABK, KC_RCBR, KC_RBRC, KC_RPRN,  KC_TILD, KC_CIRC, KC_NO,   KC_NO, KC_NO,    KC_AT ,
    KC_LABK, KC_LCBR, KC_LBRC, KC_LPRN,  KC_PERC, KC_ASTR, KC_NO,   KC_NO, KC_COLN,  KC_SCLN,   
    KC_HASH, KC_DLR,  KC_QUES, KC_EXCLM, KC_PIPE, KC_AMPR, KC_EQL,  KC_NO, KC_PLUS, KC_QUOT,
    KC_NO,   KC_NO,   KC_UNDS, KC_QUOT,  KC_DQT,  KC_DOT,  KC_COMM, KC_PMNS, KC_NO, KC_NO
),
   [_NAV] = LAYOUT_absolem(
    KC_mute,  KC_prev,  KC_play,  KC_next,  KC_volU, KC_scrlU,  KC_NO, KC_SPC, KC_NO, KC_insert,
    KC_gui,   KC_alt,   KC_shift, KC_ctrl,  KC_vol,  KC_scrlD,  KC_J, KC_UP, KC_L, KC_TAB,   
    KC_ctrlZ, KC_ctrlx, KC_ctrld, KC_ctrlv, KC_B,    KC_app,    KC_LEFT, KC_DOWN, KC_RIGHT,  KC_ENTER,
    KC_NO,    KC_NO, KC_NO, KC_nav, KC_NO,  KC_del,  KC_BSPACE, KC_ESCAPE, KC_NO, KC_NO
),
   [_NUM] = LAYOUT_absolem(
       KC_F1,  KC_F2,  KC_F3,  KC_F4,   KC_F5,      KC_PMNS, KC_P7, KC_P8, KC_P9, KC_BSPACE,
       KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,     KC_P0,   KC_P4, KC_P5, KC_6,  KC_PDOT,
       KC_F11, KC_F12, KC_F13, KC_pscr, KC_pause,   KC_PPLS, KC_P1, KC_P2, KC_P3, KC_PCMM, 
       KC_NO,  KC_NO,  KC_TAB, KC_SPC,  KC_ENTER,   KC_NO,   KC_BSPACE, KC_NO, KC_NO, KC_NO
 )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
