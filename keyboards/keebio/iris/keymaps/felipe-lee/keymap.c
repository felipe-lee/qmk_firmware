#include QMK_KEYBOARD_H

// Sample: https://github.com/qmk/qmk_firmware/pull/17216/files

// Full list of keycodes: https://docs.qmk.fm/#/keycodes

enum my_layers {
    _DVORAK,
    _GAMING,
    _GAMING_MOUSE,
    _FUNC,
    _SYMBOLS,
    _NUM,
    _CONFIG,
};

enum tap_dance_keys {
    TD_RAL_FN,
};

enum custom_keycodes {
    DVORAK = SAFE_RANGE,
    GAMING,
    GAMING_MOUSE,
    FUNC,
    SYMBOLS,
    NUM,
    CONFIG,
};

// Tap dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_RAL_FN] = ACTION_TAP_DANCE_LAYER_TOGGLE(KC_RALT, _FUNC)
};

// Custom names for complex (or long-named) keycodes
#define TT_FUNC TT(_FUNC)
#define TT_GMGM TT(_GAMING_MOUSE)
#define TT_SYMB TT(_SYMBOLS)
#define TG_NUM  TG(_NUM)
#define TO_CONF TO(_CONFIG)

#define TD_RAFN TD(TD_RAL_FN)

#define LSF_ENT LSFT_T(KC_ENT)
#define LSF_LCT LSFT_T(KC_LCTL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_DVORAK] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,                               KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                               KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_RCTL,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LGUI, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_LALT,          TD_RAFN, KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RGUI,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    TT_FUNC, TT_SYMB, LSF_ENT,                   KC_SPC,  TT_SYMB, KC_RSFT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_GAMING] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     LSF_LCT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_CAPS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LALT,          TT_FUNC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RGUI,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    TT_FUNC, KC_SPC,  LSF_ENT,                   KC_SPC,  TT_SYMB, TT_GMGM
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_GAMING_MOUSE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, KC_RGUI, DVORAK,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            KC_WH_U, KC_WH_L, KC_MS_U, KC_WH_R, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_FUNC] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     GAMING,  TO_CONF, KC_MPRV, KC_MPLY, KC_MNXT, _______,                            _______, TO_CONF, _______, KC_INS,  KC_PSCR, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     TG_NUM,  _______, KC_HOME, KC_UP,   KC_END,  KC_PGUP,                            _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_SPC,  KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGDN,                           _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______,          _______, _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_SYMBOLS] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_DQT,  KC_AT,   KC_DLR,  KC_LPRN, KC_LBRC,                            KC_RBRC, KC_RPRN, KC_EXLM, KC_QUES, KC_CIRC, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_GRV,  KC_ASTR, KC_HASH, KC_UNDS, KC_LCBR,                            KC_RCBR, KC_MINS, KC_PLUS, KC_EQL,  KC_PERC, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_COLN, KC_TILD, KC_AMPR, KC_LT,   _______, _______,          _______, _______, KC_GT,   KC_SLSH, KC_BSLS, KC_PIPE, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_NUM] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, KC_NUM,  _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_COMM, KC_DOT,  KC_LPRN, KC_RPRN,                            _______, KC_P7,   KC_P8,   KC_P9,   _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_PPLS, KC_PMNS, KC_PAST, KC_PSLS, KC_PEQL,                            _______, KC_P4,   KC_P5,   KC_P6,   _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_COLN, KC_CIRC, KC_DLR,  KC_PERC, _______, _______,          _______, KC_P0,   KC_P1,   KC_P2,   KC_P3,   _______, TO_CONF,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_CONFIG] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     QK_BOOT, RGB_TOG, _______, _______, _______, DVORAK,                             DVORAK,  _______, _______, _______, DB_TOGG, QK_BOOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_MOD, _______,                            _______,  _______, _______, _______, _______, QK_RBT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_RMOD, _______,                           _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, _______, _______,         _______, CAPSWRD, _______, _______, _______, _______, EE_CLR,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

//  [_TEMPLATE] = LAYOUT(
//  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
//     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
//  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
//     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
//  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
//     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
//  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
//     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
//  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
//                                    _______, _______, _______,                   _______, _______, _______
//                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
//  ),
};

// https://docs.qmk.fm/#/custom_quantum_functions?id=example-process_record_user-implementation
// https://docs.qmk.fm/#/ref_functions?id=update_tri_layerx-y-z

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case DVORAK:
        if (record->event.pressed) {
            set_single_persistent_default_layer(_DVORAK);
            layer_clear();
        }
        return false;
        break;
    case GAMING:
        if (record->event.pressed) {
            set_single_persistent_default_layer(_GAMING);
            layer_clear();
        }
        return false;
        break;
  }
  return true;
}