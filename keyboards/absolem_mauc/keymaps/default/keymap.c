// -*- compile-command: (concat "pushd " sndr-project-root " && lxqt-sudo make absolem_mauc:default:dfu"); -*-
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

#ifdef CONSOLE_ENABLE
#include <print.h>
#endif

#define LAYOUT_absolem(                               \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39 \
) \
{ \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09 }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19 }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29 }, \
    { KC_NO, KC_NO, k34, k33, k32, k37, k36, k35, KC_NO, KC_NO }  \
}

// Light LEDs 9 & 10 in cyan when keyboard layer 1 is active
#define HSV_COLEMAK 128, 255, 170
#define HSV_SYM 70, 255, 170
#define HSV_NAV 170, 170, 170
#define HSV_NUM 0, 170, 170
#define HSV_MISC 200, 170, 170

const rgblight_segment_t PROGMEM colemak_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_COLEMAK}
);
const rgblight_segment_t PROGMEM sym_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_SYM}
);
const rgblight_segment_t PROGMEM nav_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_NAV}
);
const rgblight_segment_t PROGMEM num_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_NUM}
);
const rgblight_segment_t PROGMEM misc_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_MISC}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM absolem_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    colemak_layer,
    sym_layer,
    nav_layer,
    num_layer,
    misc_layer
);

#include "absolem_layouts.h"

void keyboard_post_init_user(void) {
    // Enable the LED layers
  //rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING); // sets mode to Fast breathing without saving
  rgblight_layers = absolem_rgb_layers;
    // rgblight_enable_noeeprom(); // enables Rgb, without saving settings
    // rgblight_sethsv_noeeprom(180, 255, 100); // sets the color to teal/cyan without saving
  layer_state_set_user(layer_state);
}

/*
void matrix_init_user(void) {
}
*/

void matrix_scan_user(void) {
  // rgblight_set_layer_state(0, layer_state_cmp(default_layer_state, _COLEMAK));
  // rgblight_set_layer_state(1, layer_state_cmp(default_layer_state, _QWERTY));
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
  // Both layers will light up if both kb layers are active
  rgblight_set_layer_state(0, layer_state_cmp(state, _COLEMAK));
   return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  // Both layers will light up if both kb layers are active
  rgblight_set_layer_state(2, layer_state_cmp(state, _SYM));
  rgblight_set_layer_state(3, layer_state_cmp(state, _NAV));
  rgblight_set_layer_state(4, layer_state_cmp(state, _NUM));
  rgblight_set_layer_state(5, layer_state_cmp(state, _MISC));
#ifdef CONSOLE_ENABLE
  uprintf("default_layer_state: %u    layer state %u  state: %u \n",default_layer_state, layer_state, state);
#endif
  return state;
}

bool led_update_user(led_t led_state) {
  // rgblight_set_layer_state(0, led_state.caps_lock);
  return true;
}
