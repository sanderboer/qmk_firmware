#if !defined(ABSOLEM_LAYOUTS_H)
/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   $Creator: Sander Boer $
   $Notice: (C) Copyright 2016 MAUC. All Rights Reserved. $
   ======================================================================== */

#define ABSOLEM_LAYOUTS_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
  [_COLEMAK] = LAYOUT_absolem(
      KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_BSPACE,
      KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O,
      KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_K,     KC_H,   NUM,     MISC,    QWERTY,
      KC_NO, KC_NO, MT(MOD_LCTL, KC_TAB), MT(MOD_LGUI, KC_SPC), MT(MOD_LALT, KC_ESCAPE),  MT(MOD_LSFT, KC_ENTER),  LT(NAV, KC_SPC),  LT(SYM, KC_ESCAPE), KC_NO, KC_NO
                              ),

  [_QWERTY] = LAYOUT_absolem(
      KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
      KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ALGR,
      KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, NUM,  MISC, COLEMAK,
      KC_NO, KC_NO, MT(MOD_LCTL, KC_TAB), MT(MOD_LGUI, KC_SPC), MT(MOD_LALT, KC_ESCAPE),  MT(MOD_LSFT, KC_ENTER),  LT(NAV, KC_BSPACE),  LT(SYM, KC_ESCAPE), KC_NO, KC_NO                             ),

   [_SYM] = LAYOUT_absolem(
       KC_RABK, KC_RCBR, KC_RBRC, KC_RPRN, KC_BSLASH,  KC_TILD, KC_CIRC, KC_PMNS, KC_PLUS, KC_AT ,
       KC_LABK, KC_LCBR, KC_LBRC, KC_LPRN, KC_SLASH,   KC_PERC, KC_ASTR, KC_COLN, KC_SCLN, KC_NO,
       KC_HASH, KC_DLR,  KC_QUES, KC_EXLM, KC_PIPE,    KC_EQL,  KC_AMPR, KC_DOT,  KC_COMM, KC_QUOT,
       KC_NO,   KC_NO,   KC_UNDS, KC_QUOT, KC_DQT,     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
                           ),

  [_NAV] = LAYOUT_absolem(
      KC_PGUP,   KC_NO,   KC_UP,   KC_NO,    LCTL(KC_GRAVE), KC_PMNS, KC_P7, KC_P8, KC_P9, KC_EQL,
      KC_PGDOWN, KC_LEFT, KC_DOWN, KC_RIGHT, LGUI(KC_GRAVE), KC_PPLS, KC_P4, KC_P5, KC_P6, KC_PDOT,
      KC_APP,    KC_HOME, KC_SPC,  KC_END,   LCA(KC_GRAVE),  KC_P0,   KC_P1, KC_P2, KC_P3, KC_PCMM,
      KC_NO,     KC_NO,   KC_LCTL, KC_LGUI,  KC_LALT,        KC_LSFT, KC_NO,   KC_ESCAPE, KC_NO, KC_NO
                           ),

  [_NUM] = LAYOUT_absolem(
      KC_PMNS, KC_7, KC_8, KC_9, KC_EQL,  KC_F1,  KC_F2,  KC_F3, KC_F4,   KC_F5,
      KC_PPLS, KC_4, KC_5, KC_6,  KC_PDOT, KC_F6,  KC_F7,  KC_F8, KC_F9,   KC_F10,
      KC_0,   KC_1, KC_2, KC_3, KC_PCMM, KC_F11, KC_F12, KC_NO, KC_PSCR, KC_PAUS,
      KC_NO,  KC_NO,  KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS,    KC_TRNS, KC_TRNS, KC_NO, KC_NO
                          ),

  [_MISC] = LAYOUT_absolem(
     LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_5), LGUI(KC_6), LGUI(KC_7), LGUI(KC_8), LGUI(KC_9), LGUI(KC_0),
     KC_MUTE,    KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_VOLU,    RGB_HUI,    RGB_SAI,    RGB_VAI,    KC_NO,      KC_NO,
     RGB_TOG,    RGB_MOD,    RGB_VAI,    RGB_M_B,    KC_VOLD,    KC_NLCK,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
     KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO
                           )

};



#endif
