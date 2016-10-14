#include QMK_KEYBOARD_H

#define SFT_SPC SFT_T(KC_SPC)
#define CTL_ENT CTL_T(KC_ENT)
#define MO1_ESC LT(1, KC_ESC)
#define MO2_BSP LT(2, KC_BSPC)
#define PREVENT_STUCK_MODIFIERS
#define IGNORE_MOD_TAP_INTERRUPT

enum combos { ALT };

const uint16_t PROGMEM combo_alt[] = { MO1_ESC, SFT_SPC, COMBO_END };

combo_t key_combos[] = { [ALT] = COMBO(combo_alt, KC_LALT) };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_SCLN, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,
    KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,
    KC_QUOT, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,
                      KC_NO,   MO1_ESC, SFT_SPC, CTL_ENT, MO2_BSP, KC_NO
  ),
  [1] = LAYOUT(
    KC_TILD, KC_PERC, KC_LCBR, KC_RCBR, KC_CIRC, KC_EQL,  KC_7,    KC_8,    KC_9,    KC_EXLM,
    KC_DLR,  KC_AMPR, KC_LPRN, KC_RPRN, KC_AT,   KC_ASTR, KC_4,    KC_5,    KC_6,    KC_QUES,
    KC_BSLS, KC_PIPE, KC_LBRC, KC_RBRC, KC_HASH, KC_PLUS, KC_1,    KC_2,    KC_3,    KC_SLSH,
                      KC_NO,   KC_TRNS, KC_TRNS, KC_MINS, KC_0,    KC_NO
  ),
  [2] = LAYOUT(
    KC_DEL,  KC_F7,   KC_F8,   KC_F9,   KC_F12,  QK_BOOT, KC_HOME, KC_UP,   KC_END,  KC_MUTE,
    KC_TAB,  KC_F4,   KC_F5,   KC_F6,   KC_F11,  KC_PGUP, KC_LEFT, KC_DOWN, KC_RGHT, KC_VOLU,
    KC_INS,  KC_F1,   KC_F2,   KC_F3,   KC_F10,  KC_PGDN, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD,
                      KC_NO,   KC_GRV,  KC_UNDS, TO(3),   KC_TRNS, KC_NO
  ),
  [3] = LAYOUT(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_P,    KC_ENT,
                      KC_NO,   KC_LCTL, KC_SPC,  KC_LALT, TO(0),   KC_NO
  )
};
