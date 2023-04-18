// Copyright 2021 weteor | 2022 Conor Burns (@Conor-Burns)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
enum layers {
    _ALPHA_QWERTY = 0,
    _NUM,
    _SYM,
    _MOV,
    _CFG,
};
//
// Left-hand home row mods
#define HOME_A LCTL_T(KC_A)
#define HOME_S LSFT_T(KC_S)
#define HOME_D LALT_T(KC_D)
#define HOME_F KC_F
#define HOME_G LT(_MOV, KC_G)
#define HOME_V LGUI_T(KC_V)

// Right-hand home row mods
#define HOME_SC RCTL_T(KC_SCLN)
#define HOME_L RSFT_T(KC_L)
#define HOME_K LALT_T(KC_K)
#define HOME_J KC_J
#define HOME_H KC_H
#define HOME_M RGUI_T(KC_M)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // clang-format off

// {"version": 1, "uid": 2926779291838632284, "layout": [
//
// [["KC_Q", "KC_W", "KC_E", "KC_R", "KC_T"], ["TD(0)", "TD(1)", "TD(2)", "TD(3)", "KC_G"], ["KC_Z", "KC_X", "KC_C", "KC_V", "KC_B"], [-1, -1, "MO(4)", "MO(1)", "KC_LSHIFT"], ["KC_P", "KC_O", "KC_I", "KC_U", "KC_Y"], ["TD(4)", "TD(5)", "TD(6)", "TD(7)", "KC_H"], ["KC_SLASH", "KC_DOT", "KC_COMMA", "KC_M", "KC_N"], [-1, -1, "KC_NO", "TD(8)", "MO(2)"]],
//

//
// [["LSFT(KC_1)", "LSFT(KC_2)", "LSFT(KC_3)", "LSFT(KC_4)", "LSFT(KC_5)"], ["LSFT(KC_SCOLON)", "LSFT(KC_QUOTE)", "KC_MINUS", "LSFT(KC_MINUS)", "KC_LBRACKET"], ["KC_GRAVE", "LSFT(KC_GRAVE)", "KC_BSLASH", "LSFT(KC_BSLASH)", "LSFT(KC_LBRACKET)"], [-1, -1, "KC_TRNS", "KC_TRNS", "KC_TRNS"], ["LSFT(KC_0)", "LSFT(KC_9)", "LSFT(KC_8)", "LSFT(KC_7)", "LSFT(KC_6)"], ["KC_SCOLON", "KC_QUOTE", "KC_EQUAL", "LSFT(KC_EQUAL)", "KC_RBRACKET"], ["LSFT(KC_SLASH)", "LSFT(KC_DOT)", "LSFT(KC_COMMA)", "KC_NO", "LSFT(KC_RBRACKET)"], [-1, -1, "KC_NO", "KC_TRNS", "KC_TRNS"]],
//
// [["KC_F1", "KC_F2", "KC_MUTE", "KC_F4", "KC_F5"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], [-1, -1, "KC_TRNS", "KC_TRNS", "KC_TRNS"], ["KC_F10", "KC_F9", "KC_F8", "KC_F7", "KC_F6"], ["KC_F12", "KC_BRIU", "KC_BRID", "KC_NO", "KC_F11"], ["KC_NO", "KC_VOLU", "KC_VOLD", "KC_MUTE", "KC_NO"], [-1, -1, "KC_NO", "KC_TRNS", "KC_TRNS"]],
//
// [["KC_NO", "KC_F9", "KC_F10", "KC_F11", "KC_F12"], ["KC_NO", "KC_F5", "KC_F6", "KC_F7", "KC_F8"], ["KC_NO", "KC_F1", "KC_F2", "KC_F3", "KC_F4"], [-1, -1, "KC_NO", "KC_NO", "KC_NO"], ["KC_KP_SLASH", "KC_KP_9", "KC_KP_8", "KC_KP_7", "KC_KP_PLUS"], ["KC_BTN1", "KC_MS_R", "KC_MS_U", "KC_MS_D", "KC_MS_L"], ["KC_BTN2", "KC_WH_R", "KC_WH_U", "KC_WH_D", "KC_WH_L"], [-1, -1, "KC_NO", "KC_KP_ENTER", "KC_KP_EQUAL"]],
//
// [["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], [-1, -1, "KC_NO", "KC_NO", "KC_NO"], ["DF(1)", "DF(0)", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], [-1, -1, "KC_NO", "KC_NO", "KC_NO"]], [["KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS"], ["KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS"], ["KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS"], [-1, -1, "KC_TRNS", "KC_TRNS", "KC_TRNS"], ["KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS"], ["KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS"], ["KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS"], [-1, -1, "KC_TRNS", "KC_TRNS", "KC_TRNS"]], [["KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS"], ["KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS"], ["KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS"], [-1, -1, "KC_TRNS", "KC_TRNS", "KC_TRNS"], ["KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS"], ["KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS"], ["KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS"], [-1, -1, "KC_TRNS", "KC_TRNS", "KC_TRNS"]], [["KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS"], ["KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS"], ["KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS"], [-1, -1, "KC_TRNS", "KC_TRNS", "KC_TRNS"], ["KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS"], ["KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS"], ["KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS", "KC_TRNS"], [-1, -1, "KC_TRNS", "KC_TRNS", "KC_TRNS"]]], "encoder_layout": [[], [], [], [], [], [], [], [], []], "layout_options": -1, "macro": [[], [], [], [], [], [], [], [], [], [], [], [], [], [], [], []], "vial_protocol": 5, "via_protocol": 9, "tap_dance": [["KC_A", "KC_LCTRL", "KC_NO", "KC_NO", 270], ["KC_S", "KC_LSHIFT", "KC_NO", "KC_NO", 270], ["KC_D", "KC_LALT", "KC_NO", "KC_NO", 270], ["KC_F", "KC_LGUI", "KC_NO", "KC_NO", 270], ["KC_ENTER", "KC_LCTRL", "KC_NO", "KC_NO", 270], ["KC_L", "KC_RSHIFT", "KC_NO", "KC_NO", 270], ["KC_K", "KC_LALT", "KC_NO", "KC_NO", 270], ["KC_J", "KC_RGUI", "KC_NO", "KC_NO", 270], ["KC_SPACE", "KC_RALT", "KC_NO", "KC_NO", 270], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", 200]], "combo": [["MO(1)", "KC_LSHIFT", "KC_NO", "KC_NO", "MO(2)"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"], ["KC_NO", "KC_NO", "KC_NO", "KC_NO", "KC_NO"]], "key_override": [{"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}, {"trigger": "KC_NO", "replacement": "KC_NO", "layers": 65535, "trigger_mods": 0, "negative_mod_mask": 0, "suppressed_mods": 0, "options": 7}], "settings": {"1": 0, "2": 50, "3": 0, "4": 175, "5": 5, "6": 5000, "7": 200, "8": 0, "9": 10, "10": 20, "11": 8, "12": 10, "13": 30, "14": 10, "15": 80, "16": 8, "17": 40, "18": 0, "19": 80, "20": 5, "21": 0}}

    [_ALPHA_QWERTY] = LAYOUT_split_3x5_3(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    /**/  KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,
        HOME_A,  HOME_S,  HOME_D,  HOME_F,  HOME_G,  /**/  HOME_H,  HOME_J,  HOME_K,   HOME_L,  HOME_SC,
        KC_Z,    KC_X,    KC_C,    HOME_V,  KC_B,    /**/  KC_N,    HOME_M,    KC_COMM,  KC_DOT,  KC_SLSH,

        MO(_MOV),  MO(_NUM),  KC_LSFT,  /**/  MO(_SYM),  KC_SPACE,  XXXXXXX
    ),
    [_NUM] = LAYOUT_split_3x5_3(
        KC_1,     KC_2,       KC_3,     KC_4,     KC_5,        /**/  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,
        KC_TAB,   S(KC_TAB),  KC_DEL,   KC_BSPC,  XXXXXXX,     /**/  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_ENTER,
        C(KC_Z),  C(KC_X),    C(KC_C),  C(KC_V),  S(C(KC_V)),  /**/  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   XXXXXXX,

        _______,  _______,  _______,  /**/  _______,  KC_ESC,  XXXXXXX
    ),
    [_SYM] = LAYOUT_split_3x5_3(
        KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,/**/  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,
        KC_GRV,   KC_DQUO,  KC_MINS,  KC_UNDS,  KC_LBRC,/**/  KC_RBRC,  KC_BSPC,   KC_PLUS,  KC_QUOT,  KC_COLN,
        KC_BSLS,  KC_PIPE,  KC_TILD,  KC_0,     KC_LCBR,/**/  KC_RCBR,  KC_EQL,  KC_LT,    KC_GT,    KC_QUES,

        _______,  _______,  _______,/**/  _______,  _______,  XXXXXXX
    ),
    [_MOV] = LAYOUT_split_3x5_3(
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,/**/  XXXXXXX,  KC_ACL0,  KC_ACL1,  KC_ACL2,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,/**/  KC_MS_L,  KC_MS_D,  KC_MS_U,  KC_MS_R,  KC_BTN1,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,/**/  KC_WH_L,  KC_WH_D,  KC_WH_U,  KC_WH_R,  KC_BTN2,

        _______,  _______,  _______,/**/  _______,  _______,  XXXXXXX
    ),
    [_CFG] = LAYOUT_split_3x5_3(
        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,/**/    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,/**/  XXXXXXX,  XXXXXXX,  KC_BRID,  KC_BRIU,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,/**/  XXXXXXX,  KC_MUTE,  KC_VOLD,  KC_VOLU,  XXXXXXX,

        _______,  _______,  _______,/**/  _______,  _______,  XXXXXXX
    ),
    // clang-format on
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _NUM, _SYM, _CFG);
}

// const uint16_t PROGMEM test_combo1[] = {KC_A, KC_B, COMBO_END};
// const uint16_t PROGMEM test_combo2[] = {KC_C, KC_D, COMBO_END};
// combo_t key_combos[COMBO_COUNT] = {
//     COMBO(test_combo1, KC_ESC),
//     COMBO(test_combo2, LCTL(KC_Z)), // keycodes with modifiers are possible too!
// };
