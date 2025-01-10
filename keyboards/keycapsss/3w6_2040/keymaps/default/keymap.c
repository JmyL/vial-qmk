// Copyright 2021 weteor | 2022 Conor Burns (@Conor-Burns)
// Copyright 2023 Ben Roe (@keycapsss)
// Copyright 2023 Tom Barnes (@keyboard-magpie)
// SPDX-License-Identifier: GPL-2.0-or-later
// Add R_ALT as combo
// Add R_GUI to space.

#include QMK_KEYBOARD_H
enum layers {
    _ALPHA_QWERTY = 0,
    _NUM,
    _SYM,
    _SHIFT,
    _MOV,
    _CFG,
};
//
// Left-hand home row mods
#define HOME_A LCTL_T(KC_A)
#define HOME_S LSFT_T(KC_S)
#define HOME_D RALT_T(KC_D)
#define HOME_F LALT_T(KC_F)
#define HOME_G KC_G
#define HOME_V KC_V
#define HOME_C KC_C
#define HOME_Z LT(_MOV, KC_Z)

#define HOME_SPACE LGUI_T(KC_SPACE)

// Right-hand home row mods
#define HOME_SCLN LCTL_T(KC_SCLN)
#define HOME_L LSFT_T(KC_L)
#define HOME_K RCTL_T(KC_K)
#define HOME_J LALT_T(KC_J)
#define HOME_H KC_H
#define HOME_M KC_M

enum custom_keycodes {
    SPACE_UNDERSCORE = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // clang-format off
    [_ALPHA_QWERTY] = LAYOUT_split_3x5_3(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    /**/  KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,
        HOME_A,  HOME_S,  HOME_D,  HOME_F,  HOME_G,  /**/  HOME_H,  HOME_J,  HOME_K,   HOME_L,  HOME_SCLN,
        HOME_Z,  KC_X,    HOME_C,  HOME_V,  KC_B,    /**/  KC_N,    HOME_M,  KC_COMM,  KC_DOT,  KC_SLSH,

        XXXXXXX,  MO(_NUM),  MO(_SHIFT),  /**/  MO(_SYM),  HOME_SPACE,  XXXXXXX
    ),
    [_NUM] = LAYOUT_split_3x5_3(
        KC_1,     KC_2,       KC_3,     KC_4,     KC_5,        /**/  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,
        KC_TAB,   S(KC_TAB),  KC_DEL,   KC_BSPC,  S(KC_F10),   /**/  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_ENTER,
        C(KC_Z),  C(KC_X),    C(KC_C),  C(KC_V),  C(KC_V),  /**/  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   XXXXXXX,

        _______,  _______,  _______,  /**/   S(KC_SPACE),  KC_ESC,  XXXXXXX
    ),
    [_SYM] = LAYOUT_split_3x5_3(
        KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,/**/  KC_CIRC,  KC_AMPR, KC_ASTR,  KC_LPRN,  KC_RPRN,
        KC_GRV,   KC_DQUO,  KC_MINS,  KC_UNDS,  KC_LBRC,/**/  KC_RBRC,  KC_BSPC, KC_PLUS,  KC_QUOT,  KC_COLN,
        KC_BSLS,  KC_PIPE,  KC_TILD,  KC_0,     KC_LCBR,/**/  KC_RCBR,  KC_EQL,  KC_LT,    KC_GT,    KC_QUES,

        _______,  _______,  _______,/**/  _______,  _______,  XXXXXXX
    ),
    [_SHIFT] = LAYOUT_split_3x5_3(
        S(KC_Q),   S(KC_W),   S(KC_E),   S(KC_R),   S(KC_T),   /**/  S(KC_Y),   S(KC_U),   S(KC_I),    S(KC_O),   S(KC_P),
        S(KC_A),   S(KC_S),   S(KC_D),   S(KC_F),   S(KC_G),   /**/  S(KC_H),   S(KC_J),   S(KC_K),    S(KC_L),   S(KC_SCLN),
        S(KC_Z),   S(KC_X),   S(KC_C),   S(KC_V),   S(KC_B),   /**/  S(KC_N),   S(KC_M),   S(KC_COMM), S(KC_DOT), S(KC_SLSH),

        XXXXXXX,  MO(_NUM),  MO(_SHIFT),  /**/  MO(_SYM),  KC_UNDS,  XXXXXXX
    ),
    [_MOV] = LAYOUT_split_3x5_3(
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,/**/  XXXXXXX,  KC_ACL0,  KC_ACL1,  KC_ACL2,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,/**/  KC_MS_L,  KC_MS_D,  KC_MS_U,  KC_MS_R,  KC_BTN1,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,/**/  KC_WH_L,  KC_WH_D,  KC_WH_U,  KC_WH_R,  KC_BTN2,

        _______,  _______,  _______,/**/  _______,  _______,  XXXXXXX
    ),
    [_CFG] = LAYOUT_split_3x5_3(
        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,/**/    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,
        KC_F11,   KC_F12,   XXXXXXX,  XXXXXXX,  XXXXXXX,/**/  XXXXXXX,  XXXXXXX,  KC_BRID,  KC_BRIU,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,/**/  XXXXXXX,  KC_MUTE,  KC_VOLD,  KC_VOLU,  XXXXXXX,

        _______,  _______,  _______,/**/  _______,  _______,  XXXXXXX
    ),
    // clang-format on
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _SHIFT, _SYM, _CFG);
}

// const uint16_t PROGMEM test_combo1[]           = {KC_J, KC_K, COMBO_END};
// // const uint16_t PROGMEM test_combo2[]           = {MO(_SYM), HOME_SPACE, COMBO_END};
// combo_t key_combos[COMBO_COUNT] = {
//     COMBO(test_combo1, KC_MINS),
// };
//
// combo_t key_combos[0] = {};
