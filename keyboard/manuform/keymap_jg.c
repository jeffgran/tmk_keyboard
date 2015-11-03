#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: qwerty */
    KEYMAP(
      GRV,   Q,   W,   E,   R,   T,LGUI,BSPC, \
      LCTL,  A,   S,   D,   F,   G, TAB,LALT, \
      LSFT,  Z,   X,   C,   V,   B, SPC, SPC, \
                                            SPC,RCTL,   Y,   U,   I,   O,   P,BSLS, \
                                            SPC, SPC,   H,   J,   K,   L,SCLN,QUOT, \
                                            SPC, SPC,   N,   M,COMM, DOT,SLSH,RSFT)
};
const uint16_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_LAYER_MOMENTARY(6),  // to Fn overlay
    [1] = ACTION_LAYER_TOGGLE(4),     // toggle arrow overlay
    [2] = ACTION_LAYER_TOGGLE(5),     // toggle Esc overlay
    [3] = ACTION_MODS_KEY(MOD_RCTL|MOD_RSFT, KC_ESC), // Task(RControl,RShift+Esc)
    [4] = ACTION_LAYER_MOMENTARY(7),  // to Layout selector
    [5] = ACTION_DEFAULT_LAYER_SET(0),  // set qwerty layout
    [6] = ACTION_DEFAULT_LAYER_SET(1),  // set colemak layout
    [7] = ACTION_DEFAULT_LAYER_SET(2),  // set dvorak layout
    [8] = ACTION_DEFAULT_LAYER_SET(3),  // set workman layout
};
