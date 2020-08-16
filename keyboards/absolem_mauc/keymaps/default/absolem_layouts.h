#if !defined(ABSOLEM_LAYOUTS_H)
/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   $Creator: Sander Boer $
   $Notice: (C) Copyright 2016 MAUC. All Rights Reserved. $
   ======================================================================== */

#define ABSOLEM_LAYOUTS_H
// Defines names for use in layer keycodes and the keymap

enum layer_names {
  _COLEMAK, _SYM, _NAV, _NUM, _MISC
};
// #define COLEMAK_ORG DF(_COLEMAK_ORG)
#define COLEMAK DF(_COLEMAK)
// #define QWERTY DF(_QWERTY)
#define SYM MO(_SYM)
#define NAV MO(_NAV)
#define NUM MO(_NUM)
#define MISC MO(_MISC)

// home row mods.
#define CT_R LCTL_T(KC_R)
#define SH_S LSFT_T(KC_S)
#define AL_T LALT_T(KC_T)
#define GU_G LGUI_T(KC_G)

#define GU_M LGUI_T(KC_M)
#define AL_N LALT_T(KC_N)
#define SH_E LSFT_T(KC_E)
#define CT_I LCTL_T(KC_I)

#define CT_LEFT  LCTL_T(KC_LEFT)
#define SH_DOWN  LSFT_T(KC_DOWN)
#define AL_RIGHT LALT_T(KC_RIGHT)
#define GU_XTRA  LGUI_T(LGUI(KC_GRAVE))

#define GU_PLS LGUI_T(KC_PPLS)
#define AL_P4  LALT_T(KC_P4)
#define SH_P5  LSFT_T(KC_P5)
#define CT_P6  LCTL_T(KC_P6)

#define CT_4     LCTL_T(KC_4)
#define SH_5     LSFT_T(KC_5)
#define AL_6     LALT_T(KC_6)
#define GU_PDOT  LGUI_T(KC_PDOT)

#define GU_F6  LGUI_T(KC_F6)
#define AL_F7  LALT_T(KC_F7)
#define SH_F8  LSFT_T(KC_F8)
#define CT_F9  LCTL_T(KC_F9)


// layer toggle.
#define TAB_MISC LT(MISC, KC_TAB)
#define SPC_NUM LT(NUM, KC_SPC)
#define BSPC_NAV LT(NAV, KC_BSPACE)
#define ENT_SYM LT(SYM,KC_ENTER)
#define ESC_SYM LT(SYM, KC_ESCAPE)


// left hand combinations.
const uint16_t PROGMEM q_w_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM w_f_combo[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM f_p_combo[] = {KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM p_b_combo[] = {KC_P, KC_B, COMBO_END};
const uint16_t PROGMEM w_p_combo[] = {KC_W, KC_P, COMBO_END};
const uint16_t PROGMEM z_x_combo[] = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM x_c_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM c_d_combo[] = {KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM d_v_combo[] = {KC_D, KC_V, COMBO_END};

// right hand combinations.
const uint16_t PROGMEM u_y_combo[] = {KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM l_u_combo[] = {KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM j_l_combo[] = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM k_h_combo[] = {KC_K, KC_H, COMBO_END};

// both hand combinations.
const uint16_t PROGMEM d_h_combo[] = {KC_D, KC_H, COMBO_END};
// common shortcuts for windows and linux that i use.
#define NXTTAB LCTL(KC_PGDN)
#define PRVTAB LCTL(KC_PGUP)
#define UPTAB  LCTL(LSFT(KC_PGUP))
#define DNTAB  LCTL(LSFT(KC_PGDN))
#define NXTWIN LALT(KC_TAB)
#define PRVWIN LALT(LSFT(KC_TAB))
#define CALDL  LCTL(LALT(KC_DELT))
#define TSKMGR LCTL(LSFT(KC_ESC))
#define EXPLR  LGUI(KC_E)
#define LCKGUI LGUI(KC_L)
#define CONPST LSFT(KC_INS)
#define CLSGUI LALT(KC_F4)

combo_t key_combos[COMBO_COUNT] = {
    // left hand combinations.
  COMBO(q_w_combo, KC_ESCAPE),
  COMBO(p_b_combo, KC_INSERT ),
  COMBO(d_v_combo, KC_HOME),
    // right hand combinations.
  COMBO(u_y_combo, KC_ENTER),
  COMBO(j_l_combo, KC_DELT),
  COMBO(k_h_combo, KC_END),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
 [_COLEMAK] = LAYOUT_absolem(
      KC_Q,  KC_W,  KC_F,     KC_P,    KC_B,   KC_J,   KC_L,      KC_U,    KC_Y,    KC_ENTER,
      KC_A,  CT_R,  SH_S,     AL_T,    GU_G,   GU_M,   AL_N,      SH_E,    CT_I,    KC_O,
      KC_Z,  KC_X,  KC_C,     KC_D,    KC_V,   KC_K,   KC_H,      KC_DOT,  KC_COMM, KC_SLASH,
      KC_NO, KC_NO, TAB_MISC, SPC_NUM, KC_NO,  KC_NO,  BSPC_NAV,  ESC_SYM, KC_NO,   KC_NO
                              ),

 [_SYM] = LAYOUT_absolem(
       KC_RABK, KC_RCBR, KC_RBRC, KC_RPRN, KC_BSLASH,  KC_TILD, KC_CIRC, KC_PMNS, KC_PLUS, KC_AT ,
       KC_LABK, KC_LCBR, KC_LBRC, KC_LPRN, KC_SLASH,   KC_PERC, KC_ASTR, KC_COLN, KC_SCLN, KC_DQT,
       KC_HASH, KC_DLR,  KC_QUES, KC_EXLM, KC_PIPE,    KC_EQL,  KC_AMPR, KC_DOT,  KC_COMM, KC_QUOT,
       KC_NO,   KC_NO,   KC_UNDS, KC_QUOT, KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
                           ),

  [_NAV] = LAYOUT_absolem(
      KC_PGUP,   KC_NO,   KC_UP,   KC_NO,    LCTL(KC_GRAVE),   KC_PMNS, KC_P7, KC_P8,  KC_P9, KC_EQL,
      KC_PGDOWN, KC_LEFT, KC_DOWN, KC_RIGHT, LGUI(KC_GRAVE),          GU_PLS,  AL_P4, SH_P5,  CT_P6, KC_PDOT,
      KC_APP,    KC_HOME, KC_SPC,  KC_END,   LCA(KC_GRAVE),    KC_P0,   KC_P1, KC_P2,  KC_P3, KC_PCMM,
      KC_NO,     KC_NO,   KC_LCTL, KC_LGUI,  KC_NO,            KC_NO,   KC_NO, KC_NO,  KC_NO, KC_NO
                           ),

  [_NUM] = LAYOUT_absolem(
      KC_F1,  KC_F2,  KC_F3, KC_F4,   KC_F5,          KC_PMNS, KC_7,   KC_8, KC_9,  KC_EQL,
      GU_F6,  AL_F7,  SH_F8, CT_F9,   KC_F10,         KC_PPLS, CT_4,   SH_5, AL_6,  GU_PDOT,
      KC_F11, KC_F12, KC_NO, KC_NO,   KC_PSCR,        KC_0,    KC_1,   KC_2, KC_3,  KC_PCMM,
      KC_NO,   KC_NO,  KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS,    KC_TRNS, KC_TRNS, KC_NO, KC_NO
                          ),

  [_MISC] = LAYOUT_absolem(
      LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_5),    LGUI(KC_0), RGB_TOG, RGB_MOD,  RGB_VAI,    RGB_M_B,
      LGUI(KC_6), LGUI(KC_7), LGUI(KC_8), LGUI(KC_9), KC_VOLU,       KC_NLCK,     KC_LALT, KC_LSFT,  KC_LCTL,    KC_NO,
      KC_MUTE,    KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_VOLD,       RGB_HUI,     RGB_SAI, RGB_VAI,  KC_NO,      KC_NO,
      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,         KC_NO,       KC_NO,    KC_NO,    KC_NO,      KC_NO
                           )

};

#endif
