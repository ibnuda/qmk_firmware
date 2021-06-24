/* Copyright 2020 Ibnu D. Aji
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

// enum for combos.
enum combos {
    // left hand combinations.
    Q_P,
    P_Y,
    Y_C,
    P_C,
    C_B,
    Y_B,
    COMMA_DOT,
    DOT_J,
    DOT_G,
    J_G,
    G_QUOT,

    Q_Y,
    Q_C,

    // right hand combinations.
    L_Z,
    Z_U,
    U_M,
    Z_M,
    U_V,
    M_V,
    MINS_X,
    K_W,
    MINS_K,
    MINS_W,
    W_SCLN,

    // both hands combinations.
    J_K,
};

enum {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST,
};

enum custom_keycodes {
  BASE = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

// thumb keys.
#define AL_ENT   ALT_T(KC_ENT)
#define SF_BSPC  SFT_T(KC_BSPC)
//#define TSF_ESC   TD(SFT_ESC)

// home row mods.
#define CT_O LCTL_T(KC_O)
#define CT_N RCTL_T(KC_N)
#define SH_A LSFT_T(KC_A)
#define SH_R RSFT_T(KC_R)
#define AL_I LALT_T(KC_I)
#define AL_H RALT_T(KC_H)
#define GU_D RGUI_T(KC_D)
#define GU_F LGUI_T(KC_F)

// layer toggle.
#define LW_E     LT(_LOWER, KC_E)
#define RS_SPC   LT(_RAISE, KC_SPC)

// idk, man. not used, i guess.
#define ADDDD    MO(_ADJUST)
#define LOWER    MO(_LOWER)
#define RAISE    MO(_RAISE)

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

// left hand combinations.
const uint16_t PROGMEM q_p_combo[]        = {KC_Q, KC_P, COMBO_END};
const uint16_t PROGMEM p_y_combo[]        = {KC_P, KC_Y, COMBO_END};
const uint16_t PROGMEM y_c_combo[]        = {KC_Y, KC_C, COMBO_END};
const uint16_t PROGMEM c_b_combo[]        = {KC_C, KC_B, COMBO_END};
const uint16_t PROGMEM y_b_combo[]        = {KC_Y, KC_B, COMBO_END};
const uint16_t PROGMEM p_c_combo[]        = {KC_P, KC_C, COMBO_END};
const uint16_t PROGMEM comma_dot_combo[]  = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM dot_j_combo[]      = {KC_DOT, KC_J, COMBO_END};
const uint16_t PROGMEM j_g_combo[]        = {KC_J, KC_G, COMBO_END};
const uint16_t PROGMEM dot_g_combo[]      = {KC_DOT, KC_G, COMBO_END};
const uint16_t PROGMEM g_quot_combo[]     = {KC_G, KC_QUOT, COMBO_END};

const uint16_t PROGMEM q_y_combo[]        = {KC_Q, KC_Y, COMBO_END};
const uint16_t PROGMEM q_c_combo[]        = {KC_Q, KC_C, COMBO_END};

// right hand combinations.
const uint16_t PROGMEM l_z_combo[]         = {KC_L, KC_Z, COMBO_END};
const uint16_t PROGMEM z_u_combo[]         = {KC_Z, KC_U, COMBO_END};
const uint16_t PROGMEM u_m_combo[]         = {KC_U, KC_M, COMBO_END};
const uint16_t PROGMEM z_m_combo[]         = {KC_Z, KC_M, COMBO_END};
const uint16_t PROGMEM r_g_combo[]         = {KC_R, KC_G, COMBO_END};
const uint16_t PROGMEM u_v_combo[]         = {KC_U, KC_V, COMBO_END};
const uint16_t PROGMEM m_v_combo[]         = {KC_M, KC_V, COMBO_END};
const uint16_t PROGMEM mins_x_combo[]      = {KC_MINS, KC_X, COMBO_END};
const uint16_t PROGMEM mins_k_combo[]      = {KC_MINS, KC_K, COMBO_END};
const uint16_t PROGMEM k_w_combo[]         = {KC_K, KC_W, COMBO_END};
const uint16_t PROGMEM mins_w_combo[]      = {KC_MINS, KC_W, COMBO_END};
const uint16_t PROGMEM w_scln_combo[]      = {KC_W, KC_SCLN, COMBO_END};

// both hand combinations.
const uint16_t PROGMEM j_k_combo[]         = {KC_J, KC_K, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    // left hand combinations.
    [Q_P]           = COMBO(q_p_combo,          KC_TAB),
    [P_Y]           = COMBO(p_y_combo,          KC_QUES),
    [Y_C]           = COMBO(y_c_combo,          KC_UNDS),
    [C_B]           = COMBO(c_b_combo,          KC_PIPE),
    [Y_B]           = COMBO(y_b_combo,          KC_ENT),
    [P_C]           = COMBO(p_c_combo,          PRVTAB),
    [COMMA_DOT]     = COMBO(comma_dot_combo,    KC_ENT),
    [DOT_J]         = COMBO(dot_j_combo,        LCTL(KC_W)),
    [J_G]           = COMBO(j_g_combo,          KC_DELT),
    [DOT_G]         = COMBO(dot_g_combo,        KC_TAB),
    [G_QUOT]        = COMBO(g_quot_combo,       KC_TILD),

    [Q_Y]           = COMBO(q_y_combo,          KC_ENTER),
    [Q_C]           = COMBO(q_c_combo,          RESET),

    // right hand combinations.
    [L_Z]           = COMBO(l_z_combo,          KC_BSPC),
    [Z_U]           = COMBO(z_u_combo,          KC_SLSH),
    [U_M]           = COMBO(u_m_combo,          KC_MINS),
    [Z_M]           = COMBO(z_m_combo,          NXTTAB),
    [U_V]           = COMBO(u_v_combo,          KC_ENT),
    [M_V]           = COMBO(m_v_combo,          KC_BSLS),
    [MINS_X]        = COMBO(mins_x_combo,       KC_ESC),
    [MINS_K]        = COMBO(mins_k_combo,       KC_APP),
    [K_W]           = COMBO(k_w_combo,          KC_DELT),
    [MINS_W]        = COMBO(mins_w_combo,       LSFT(KC_TAB)),
    [W_SCLN]        = COMBO(w_scln_combo,       KC_GRV),

    // both hand combinations.
    [J_K]           = COMBO(j_k_combo,          KC_ENT),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT(
    KC_Q,   KC_P,   KC_Y,   KC_C,   KC_B,       KC_V,   KC_M,   KC_U,   KC_Z,   KC_L,
    SH_A,   CT_N,   AL_I,   KC_S,   GU_F,       GU_D,   KC_T,   AL_H,   CT_O,   SH_R,
    KC_COMM,KC_DOT, KC_J,   KC_G,   KC_QUOT,    KC_SCLN,KC_W,   KC_K,   KC_MINS,KC_X,
                    KC_ESC, LW_E,   SF_BSPC,    AL_ENT, RS_SPC, RAISE
),

[_RAISE] = LAYOUT(
    KC_EXLM,KC_AT,  KC_UP,  KC_LCBR,KC_RCBR,    KC_BSLS,KC_7,   KC_8,   KC_9,   KC_ASTR ,
    KC_HASH,KC_LEFT,KC_DOWN,KC_RGHT,KC_DLR,     KC_EQL, KC_4,   KC_5,   KC_6,   KC_0 ,
    KC_LBRC,KC_RBRC,KC_LPRN,KC_RPRN,KC_AMPR,    KC_GRV, KC_1,   KC_2,   KC_3,   KC_PLUS ,
                    ADDDD,  ADDDD  ,_______,    _______,_______,RAISE
),
[_LOWER] = LAYOUT(
    RESET,  _______,_______,KC_F1,  KC_F2,      KC_F3,  KC_F4,  _______,_______,_______ ,
    _______,KC_PSCR,KC_PGUP,KC_F5,  KC_F6,      KC_F7,  KC_F8,  KC_HOME,_______,_______  ,
    _______,KC_SLCK,KC_PGDN,KC_F9,  KC_F10,     KC_F11, KC_F12, KC_END, _______,_______ ,
                    LOWER,  _______,_______,    _______,ADDDD,ADDDD
),
[_ADJUST] = LAYOUT(
    _______,EXPLR,  KC_UP,  PRVTAB, PRVWIN,     NXTWIN, NXTTAB, _______,_______,LCKGUI,
    TSKMGR, KC_LEFT,KC_DOWN,KC_RGHT,UPTAB,      DNTAB,  KC_ENT, KC_LGUI,_______,CALDL,
    _______,CLSGUI, _______,CONPST, RESET,      _______,_______,_______,_______,_______,
                    _______,_______,_______,    _______,_______,_______
),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
#endif
    return true;
}
