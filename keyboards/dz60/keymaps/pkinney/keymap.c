#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_directional(
        KC_GESC,       KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_NO, KC_BSPC,
        KC_TAB,        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        MO(1),         KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT,       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_DEL,
        KC_LCTL,       KC_LGUI, KC_LALT, KC_SPC,           KC_SPC,           KC_SPC,           MO(1),   MO(2),   KC_LEFT, KC_DOWN, KC_RGHT),

	[1] = LAYOUT_directional(
        KC_GRV,        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO, KC_DELETE,
        KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_UP,   KC_PGUP, KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_TRNS,       KC_NO,   KC_VOLD, KC_VOLU, KC_MUTE, KC_MSTP, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  KC_NO,   KC_NO,
        KC_LSFT,       KC_NO,   KC_NO,   KC_CALC, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_PGDN, KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,         KC_NO,   KC_NO,   KC_NO,            KC_NO,            KC_NO,            KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO),

	[2] = LAYOUT_directional(
        KC_NO, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, RGB_TOG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, BL_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_SPI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, RGB_RMOD, RGB_SPD, RGB_MOD)
};
