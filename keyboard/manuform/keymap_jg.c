#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: qwerty */
    KEYMAP(
           LALT,   Q,   W,   E,   R,   T,  /* */     Y,   U,   I,   O,   P,RALT, \
           LCTL,   A,   S,   D,   F,   G,  /* */     H,   J,   K,   L,SCLN,RGUI, \
           LSFT,   Z,   X,   C,   V,   B,  /* */     N,   M,COMM, DOT,SLSH,RSFT, \
           /*                */BSPC,LGUI,  /* */  RCTL, SPC,                     \
           /*                */ FN1, TAB,  /* */   ENT, FN1,                     \
           /*                */LALT, FN2,  /* */    NO,RALT,
    /* Layer 1: symbols */
    KEYMAP(
           TRNS,FN14,FN25,FN26,FN15,  NO,  /* */    NO,FN23,FN24,FN25,FN29,TRNS, \
           TRNS, GRV,FN16,FN13, EQL,  NO,  /* */    NO,FN20,FN21,FN22,BSLS,TRNS, \
           TRNS,  NO,LBRC,RBRC,MINS,  NO,  /* */    NO,FN17,FN18,FN19,TRNS,TRNS, \
           /*                */ DEL,TRNS,  /* */  TRNS,FN28,                     \
           /*                */TRNS,TRNS,  /* */  TRNS,TRNS,                     \
           /*                */TRNS,TRNS,  /* */  TRNS,TRNS),
    /* Layer 2: numbers */
    KEYMAP(
           TRNS,  NO,  NO,  NO,  NO,  NO,  /* */    NO,   7,   8,   9,  NO,TRNS, \
           TRNS,  NO,  NO,  NO,  NO,  NO,  /* */    NO,   4,   5,   6,  NO,TRNS, \
           TRNS,  NO,  NO,  NO,  NO,  NO,  /* */    NO,   1,   2,   3,  NO,TRNS, \
           /*                */TRNS,TRNS,  /* */  TRNS,   0,                     \
           /*                */TRNS,TRNS,  /* */  TRNS, FN3,                     \
           /*                */TRNS,TRNS,  /* */  TRNS,TRNS),
    /* Layer 3: FKeys */
    KEYMAP(
           TRNS,  NO,  NO,  NO,  NO,  NO,  /* */  TRNS,  F7,  F8,  F9, F11, F12, \
           TRNS,  NO,  NO,  NO,  NO,  NO,  /* */  TRNS,  F4,  F5,  F6,TRNS,TRNS, \
           TRNS,  NO,  NO,  NO,  NO,  NO,  /* */  TRNS,  F1,  F2,  F3,TRNS,TRNS, \
           /*                */TRNS,TRNS,  /* */  TRNS,TRNS,                     \
           /*                */TRNS,TRNS,  /* */  TRNS,TRNS,                     \
           /*                */TRNS,TRNS,  /* */  TRNS,TRNS),
    /* Layer 4: Arrows/movement */
    KEYMAP(
           TRNS,  NO,  NO,  NO,  NO,  NO,  /* */    NO,HOME,  UP, END,PGUP,TRNS, \
           TRNS,  NO,  NO,  NO,  NO,  NO,  /* */    NO,LEFT,DOWN,RGHT,  NO,TRNS, \
           TRNS,  NO,  NO,  NO,  NO,  NO,  /* */    NO,PGDN,  NO,  NO,  NO,TRNS, \
           /*                */TRNS,TRNS,  /* */  TRNS,TRNS,                     \
           /*                */TRNS,TRNS,  /* */  TRNS,TRNS,                     \
           /*                */TRNS,TRNS,  /* */  TRNS,TRNS)
    /* Layer x: blank */
    /* KEYMAP( */
    /*        TRNS,  Q,   W,   E,   R,   T,  /\* *\/     Y,   U,   I,   O,TRNS,TRNS, \ */
    /*        TRNS,  A,   S,   D, EQL,   G,  /\* *\/     H,   J,   K,   L,TRNS,TRNS, \ */
    /*        TRNS,  Z,   X,   C,   V,   B,  /\* *\/     N,   M,COMM, DOT,TRNS,TRNS, \ */
    /*        /\*               *\/TRNS,TRNS,  /\* *\/  TRNS,TRNS,                     \ */
    /*        /\*               *\/TRNS,TRNS,  /\* *\/  TRNS,TRNS,                     \ */
    /*        /\*               *\/TRNS,TRNS,  /\* *\/  TRNS,TRNS) */

};
const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_SET_CLEAR(1),  // symbol layer
    [2] = ACTION_LAYER_SET_CLEAR(2),  // number layer
    [3] = ACTION_LAYER_MOMENTARY(3),  // Fkeys layer
    [4] = ACTION_LAYER_MOMENTARY(4),  // arrow layer

        // Shifted keys
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_SCLN),             // FN12 = :
    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),             // FN13 = }
    [14] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),              // FN14 = ~
    [15] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),              // FN15 = +
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),             // FN16 = {


    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_1),                // FN17 = !
    [18] = ACTION_MODS_KEY(MOD_LSFT, KC_2),                // FN18 = @
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_3),                // FN19 = #
    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_4),                // FN20 = $
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_5),                // FN21 = %
    [22] = ACTION_MODS_KEY(MOD_LSFT, KC_6),                // FN22 = ^
    [23] = ACTION_MODS_KEY(MOD_LSFT, KC_7),                // FN23 = &
    [24] = ACTION_MODS_KEY(MOD_LSFT, KC_8),                // FN24 = *
    [25] = ACTION_MODS_KEY(MOD_LSFT, KC_9),                // FN25 = (
    [26] = ACTION_MODS_KEY(MOD_LSFT, KC_0),                // FN26 = )

    [27] = ACTION_MODS_KEY(MOD_LSFT, KC_TAB),              // FN27 = Shifted Tab
    [28] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),             // FN28 = _
    [29] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS)              // FN29 = |

};
