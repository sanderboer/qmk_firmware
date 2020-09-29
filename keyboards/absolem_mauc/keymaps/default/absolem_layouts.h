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

#define GU_F10  LGUI_T(KC_F10)
#define AL_F9  LALT_T(KC_F9)
#define SH_F8  LSFT_T(KC_F8)
#define CT_F7  LCTL_T(KC_F7)

#define CT_X  LCTL_T(KC_X)
#define SH_C  LSFT_T(KC_C)
#define AL_D  LALT_T(KC_D)
#define GU_V  LGUI_T(KC_V)
            
#define GU_K  LGUI_T(KC_K)
#define AL_H  LALT_T(KC_H)
#define SH_DOT  LSFT_T(KC_DOT)
#define CT_COMM  LCTL_T(KC_COMM)

#define CT_HOME  LCTL_T(KC_HOME)
#define SH_SPC  LSFT_T(KC_SPC)
#define AL_END LALT_T(KC_END)
#define GU_XTRA  LGUI_T(LGUI(KC_GRAVE))

#define GU_P0 LGUI_T(KC_P0)
#define AL_P1  LALT_T(KC_P1)
#define SH_P2  LSFT_T(KC_P2)
#define CT_P3  LCTL_T(KC_P3)

#define CT_3     LCTL_T(KC_3)
#define SH_2     LSFT_T(KC_2)
#define AL_1     LALT_T(KC_1)
#define GU_0  LGUI_T(KC_0)

#define GU_PSCR  LGUI_T(KC_PSCR)
#define AL_F9  LALT_T(KC_F9)
#define SH_F8  LSFT_T(KC_F8)
#define CT_F7  LCTL_T(KC_F7)


// layer toggle.
#define SPC_NUM LT(NUM, KC_SPC)
#define TAB_MISC LT(MISC, KC_TAB)
#define BSPC_MISC LT(MISC, KC_BSPACE)
#define ENT_SYM LT(SYM,KC_ENTER)
#define BSPC_NAV LT(NAV, KC_BSPACE)
#define SPC_NAV LT(NAV, KC_SPACE)
#define ESC_SYM LT(SYM, KC_ESCAPE)
#define DEL_SYM LT(SYM, KC_DELT)
#define BSPC_SYM LT(SYM, KC_BSPC)

enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL,
    MY_RESET,
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

    case MY_RESET:
        if (record->event.pressed) {
           reset_keyboard(); // selects all and copies
        }
        break;
    }
    return true;
};

// left hand combinations.
const uint16_t PROGMEM q_w_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM w_f_combo[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM a_r_combo[] = {KC_A, KC_R, COMBO_END};
const uint16_t PROGMEM r_s_combo[] = {KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM s_t_combo[] = {KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM f_p_combo[] = {KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM p_b_combo[] = {KC_P, KC_B, COMBO_END};
const uint16_t PROGMEM w_p_combo[] = {KC_W, KC_P, COMBO_END};
const uint16_t PROGMEM z_x_combo[] = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM x_d_combo[] = {KC_X, KC_D, COMBO_END};
const uint16_t PROGMEM x_c_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM c_d_combo[] = {KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM c_v_combo[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM z_b_combo[] = {KC_Z, KC_B, COMBO_END};

// right hand combinations.
const uint16_t PROGMEM y_sc_combo[] = {KC_Y, KC_SCLN, COMBO_END};
const uint16_t PROGMEM l_u_combo[] = {KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM j_l_combo[] = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM k_h_combo[] = {KC_K, KC_H, COMBO_END};
const uint16_t PROGMEM j_slash_combo[] = {KC_J, KC_SLASH, COMBO_END};


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
  COMBO(x_d_combo, KC_HOME),
  COMBO(z_x_combo, KC_INSERT),
  COMBO(p_b_combo, KC_TAB),
  COMBO(c_v_combo, KC_END),
  COMBO(j_slash_combo, RESET ),
  /*
  COMBO(f_p_combo, KC_UP),
  COMBO(x_c_combo, KC_LEFT),
  COMBO(c_d_combo, KC_DOWN),
  COMBO(d_v_combo, KC_RIGHT),
  */
  COMBO(y_sc_combo, KC_ENTER),
  COMBO(j_l_combo, KC_DELT)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
 [_COLEMAK] = LAYOUT_absolem(
      KC_Q,  KC_W,  KC_F,     KC_P,    KC_B,   KC_J,   KC_L,      KC_U,    KC_Y,    KC_SCLN,
      KC_A,  KC_R,  KC_S,     KC_T,    KC_G,   KC_M,   KC_N,      KC_E,    KC_I,    KC_O,
      KC_Z,  CT_X,  SH_C,     AL_D,    GU_V,   GU_K,   AL_H,      SH_DOT,  CT_COMM, KC_SLASH,
      KC_NO, KC_NO, BSPC_MISC, SPC_NUM, KC_NO,  KC_NO,  SPC_NAV,  BSPC_SYM, KC_NO,   KC_NO
                              ),


 // TEMP mv KC_COMM to RESET, combos dont do macros nor RESET
 [_SYM] = LAYOUT_absolem(
       KC_RABK, KC_RCBR, KC_RBRC, KC_RPRN, KC_BSLASH,  KC_TILD, KC_CIRC, KC_PMNS, KC_PLUS, KC_AT ,
       KC_LABK, KC_LCBR, KC_LBRC, KC_LPRN, KC_SLASH,   KC_PERC, KC_ASTR, KC_COLN, KC_SCLN, KC_DQT,
       KC_HASH, KC_DLR,  KC_QUES, KC_EXLM, KC_PIPE,    KC_EQL,  KC_AMPR, KC_DOT,  KC_COMM, KC_QUOT,
       KC_NO,   KC_NO,   KC_UNDS, KC_QUOT, KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
                           ),

  [_NAV] = LAYOUT_absolem(
      KC_PGUP,   KC_NO,   KC_UP,   KC_NO,    LCTL(KC_GRAVE),   KC_PMNS, KC_P7, KC_P8,  KC_P9, KC_EQL,
      KC_PGDOWN, KC_LEFT, KC_DOWN, KC_RIGHT, LGUI(KC_GRAVE),   GU_PLS,  AL_P4, SH_P5,  CT_P6, KC_PDOT,
      KC_APP,    KC_HOME, KC_SPC,  KC_END,   LCA(KC_GRAVE),    KC_P0,   KC_P1, KC_P2,  KC_P3, KC_PCMM,
      KC_NO,     KC_NO,   KC_LCTL, KC_LGUI,  KC_NO,            KC_NO,   KC_NO, KC_NO,  KC_NO, KC_NO
                           ),

  [_NUM] = LAYOUT_absolem(
      KC_F1,  KC_F2,  KC_F3, KC_F4,   KC_F5,          KC_PMNS, KC_7,   KC_8, KC_9,  KC_EQL,
      KC_F6,  CT_F7,  SH_F8, AL_F9,   GU_F10,         KC_PPLS, CT_4,   SH_5, AL_6,  GU_PDOT,
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
