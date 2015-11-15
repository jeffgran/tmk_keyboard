#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {



    /* *************** */
    /* Layer 0: qwerty */
    /* *************** */
    /*  _________________________________________                     _________________________________________  */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* | SHFT |  Q   |  W   |  E   |  R   |  T   |                   |  Y   |  U   |  I   |  O   |  P   | SHFT | */
    /* |______|______|______|______|______|______|                   |______|______|______|______|______|______| */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* | CTRL |  A   |  S   |  D   |  F   |  G   |                   |  H   |  J   |  K   |  L   |  ;   |  CMD | */
    /* |______|______|______|______|______|______|                   |______|______|______|______|______|______| */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* |  ALT |  Z   |  X   |  C   |  V   |  B   |                   |  N   |  M   |  ,   |  .   |  /   |  ALT | */
    /* |______|______|______|______|______|______|_                 _|______|______|______|______|______|______| */
    /*                               |      |      |               |      |      |                               */
    /*                               | BSPC | CMD  |               | CTRL | SPC  |                               */
    /*                               |      |      |               |      |      |                               */
    /*                               |______|______|_             _|______|______|                               */
    /*                                 |      |      |           |      |      |                                 */
    /*                                 | SYM  | NUM  |           | AROW | SYM  |                                 */
    /*                                 |_LYR__|_LYR__|_         _|_LYR__|_LYR__|                                 */
    /*                                   |      |      |       |      |      |                                   */
    /*                                   |  ALT | TAB  |       |  ENT | ALT  |                                   */
    /*                                   |______|______|       |______|______|                                   */
    /*                                                                                                           */
    /*                                                                                                           */
    /*                                                                                                           */
    KEYMAP(
           FN11,   Q,   W,   E,   R,   T,  /* */     Y,   U,   I,   O,   P,FN10, \
           LCTL,   A,   S,   D,   F,   G,  /* */     H,   J,   K,   L,SCLN,RGUI, \
           LALT,   Z,   X,   C,   V,   B,  /* */     N,   M,COMM, DOT,SLSH,RALT, \
           /*                */BSPC,LGUI,  /* */  RCTL, SPC,                     \
           /*                */ FN1, FN2,  /* */   FN4, FN1,                     \
           /*                */LALT, TAB,  /* */   ENT,RALT),



    /* **************** */
    /* Layer 1: symbols */
    /* **************** */
    /*  _________________________________________                     _________________________________________  */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* | SHFT |  ~   |  (   |  )   |  +   |  >   |                   |  :   |  &   |  *   |      |  |   | SHFT | */
    /* |______|______|______|______|______|______|                   |______|______|______|______|______|______| */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* | CTRL |  `   |  {   |  }   |  =   |  '   |                   |  "   |  $   |  %   |  ^   |  \   |  CMD | */
    /* |______|______|______|______|______|______|                   |______|______|______|______|______|______| */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* |  ALT |      |  [   |  ]   |  -   |  <   |                   |  /   |  !   |  @   |  #   |  ?   |  ALT | */
    /* |______|______|______|______|______|______|_                 _|______|______|______|______|______|______| */
    /*                               |      |      |               |      |      |                               */
    /*                               |  DEL | CMD  |               | CTRL |   _  |                               */
    /*                               |      |      |               |      |      |                               */
    /*                               |______|______|_             _|______|______|                               */
    /*                                 |      |      |           |      |      |                                 */
    /*                                 |  FN  |      |           |      |  FN  |                                 */
    /*                                 |__LYR_|______|_         _|______|__LYR_|                                 */
    /*                                   |      |      |       |      |      |                                   */
    /*                                   |  ALT | TAB  |       |  ENT | ALT  |                                   */
    /*                                   |______|______|       |______|______|                                   */
    /*                                                                                                           */
    /*                                                                                                           */
    /*                                                                                                           */
    KEYMAP(
           TRNS,FN14,FN25,FN26,FN15, FN0,  /* */  FN12,FN23,FN24,FN25,FN29,TRNS, \
           TRNS, GRV,FN16,FN13, EQL,QUOT,  /* */  FN30,FN20,FN21,FN22,BSLS,TRNS, \
           TRNS,  NO,LBRC,RBRC,MINS,FN31,  /* */  SLSH,FN17,FN18,FN19, FN6,TRNS, \
           /*                */ DEL,TRNS,  /* */  TRNS,FN28,                     \
           /*                */ FN3,  NO,  /* */  NO  , FN3,                     \
           /*                */TRNS,TRNS,  /* */  TRNS,TRNS),



    /* **************** */
    /* Layer 2: numbers */
    /* **************** */
    /*  _________________________________________                     _________________________________________  */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* | SHFT |      |      |      |      |      |                   |      |  7   |  8   |  9   |      | SHFT | */
    /* |______|______|______|______|______|______|                   |______|______|______|______|______|______| */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* | CTRL |      |      |      |      |      |                   |      |  4   |  5   |  6   |      |  CMD | */
    /* |______|______|______|______|______|______|                   |______|______|______|______|______|______| */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* |  ALT |      |      |      |      |      |                   |      |  1   |  2   |  3   |      |  ALT | */
    /* |______|______|______|______|______|______|_                 _|______|______|______|______|______|______| */
    /*                               |      |      |               |      |      |                               */
    /*                               |      | CMD  |               | CTRL |   0  |                               */
    /*                               |      |      |               |      |      |                               */
    /*                               |______|______|_             _|______|______|                               */
    /*                                 |      |      |           |      |      |                                 */
    /*                                 |      |      |           |      |      |                                 */
    /*                                 |______|______|_         _|______|______|                                 */
    /*                                   |      |      |       |      |      |                                   */
    /*                                   |  ALT |      |       |  ENT |      |                                   */
    /*                                   |______|______|       |______|______|                                   */
    /*                                                                                                           */
    /*                                                                                                           */
    /*                                                                                                           */
    KEYMAP(
           TRNS,  NO,  NO,  NO,  NO,  NO,  /* */    NO,   7,   8,   9,  NO,TRNS, \
           TRNS,  NO,  NO,  NO,  NO,  NO,  /* */    NO,   4,   5,   6,  NO,TRNS, \
           TRNS,  NO,  NO,  NO,  NO,  NO,  /* */    NO,   1,   2,   3,  NO,TRNS, \
           /*                */TRNS,TRNS,  /* */  TRNS,   0,                     \
           /*                */TRNS,TRNS,  /* */  TRNS, FN3,                     \
           /*                */TRNS,TRNS,  /* */  TRNS,TRNS),



    /* ************** */
    /* Layer 3: FKeys */
    /* ************** */
    /*  _________________________________________                     _________________________________________  */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* | SHFT |      |      |      | VOLUP|      |                   |      |  F7  |  F8  |  F9  |  F11 | SHFT | */
    /* |______|______|______|______|______|______|                   |______|______|______|______|______|______| */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* | CTRL |      |      |      | MUTE |      |                   |      |  F4  |  F5  |  F6  |  F12 |  CMD | */
    /* |______|______|______|______|______|______|                   |______|______|______|______|______|______| */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* |  ALT |      |      |      | VOLDN|      |                   |      |  F1  |  F2  |  F3  |      |  ALT | */
    /* |______|______|______|______|______|______|_                 _|______|______|______|______|______|______| */
    /*                               |      |      |               |      |      |                               */
    /*                               |      |      |               |      | F10  |                               */
    /*                               |      |      |               |      |      |                               */
    /*                               |______|______|_             _|______|______|                               */
    /*                                 |      |      |           |      |      |                                 */
    /*                                 |      |      |           |      |      |                                 */
    /*                                 |______|______|_         _|______|______|                                 */
    /*                                   |      |      |       |      |      |                                   */
    /*                                   |      |      |       |      |      |                                   */
    /*                                   |______|______|       |______|______|                                   */
    /*                                                                                                           */
    /*                                                                                                           */
    /*                                                                                                           */
    KEYMAP(
           TRNS,  NO,  NO,  NO,VOLU,  NO,  /* */  TRNS,  F7,  F8,  F9, F11,TRNS, \
           TRNS,  NO,  NO,  NO,MUTE,  NO,  /* */  TRNS,  F4,  F5,  F6, F12,TRNS, \
           TRNS,  NO,  NO,  NO,VOLD,  NO,  /* */  TRNS,  F1,  F2,  F3,TRNS,TRNS, \
           /*                */TRNS,TRNS,  /* */  TRNS,TRNS,                     \
           /*                */TRNS,TRNS,  /* */  TRNS,TRNS,                     \
           /*                */TRNS,TRNS,  /* */  TRNS,TRNS),



    /* ************************ */
    /* Layer 4: Arrows/movement */
    /* ************************ */
    /*  _________________________________________                     _________________________________________  */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* | SHFT |      | HOMW |  UP  | PGUP |      |                   |      |      |      |      |      | SHFT | */
    /* |______|______|______|______|______|______|                   |______|______|______|______|______|______| */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* | CTRL |      |  <-  |      |  ->  |      |                   |      |      |      |      |      |  CMD | */
    /* |______|______|______|______|______|______|                   |______|______|______|______|______|______| */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* |  ALT |      | END  | DOWN | PGDN |      |                   |      |      |      |      |      |  ALT | */
    /* |______|______|______|______|______|______|_                 _|______|______|______|______|______|______| */
    /*                               |      |      |               |      |      |                               */
    /*                               |      |      |               |      |      |                               */
    /*                               |      |      |               |      |      |                               */
    /*                               |______|______|_             _|______|______|                               */
    /*                                 |      |      |           |      |      |                                 */
    /*                                 |      |      |           |      |      |                                 */
    /*                                 |______|______|_         _|______|______|                                 */
    /*                                   |      |      |       |      |      |                                   */
    /*                                   |      |      |       |      |      |                                   */
    /*                                   |______|______|       |______|______|                                   */
    /*                                                                                                           */
    /*                                                                                                           */
    /*                                                                                                           */
    KEYMAP(
           TRNS,  NO,HOME,  UP,PGUP,  NO,  /* */    NO,  NO,  NO,  NO,  NO,TRNS, \
           TRNS,  NO,LEFT,  NO,RGHT,  NO,  /* */    NO,  NO,  NO,  NO,  NO,TRNS, \
           TRNS,  NO, END,DOWN,PGDN,  NO,  /* */    NO,  NO,  NO,  NO,  NO,TRNS, \
           /*                */TRNS,TRNS,  /* */  TRNS,  NO,                     \
           /*                */TRNS, FN9,  /* */  TRNS,TRNS,                     \
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
    [3] = ACTION_LAYER_SET_CLEAR(3),  // Fkeys layer
    [4] = ACTION_LAYER_MOMENTARY(4),  // arrow layer
    [5] = ACTION_LAYER_MOMENTARY(5),  // alternate alpha layout


    [9]  = ACTION_MODS_KEY(MOD_RCTL, KC_SPC),              // FN9 = CTRL+SPACE
    [10] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_CAPS),         // FN10 = shift, or tap for toggle capslock
    [11] = ACTION_MODS_TAP_KEY(MOD_LSFT, ACTION_MODS_ONESHOT(MOD_LSFT)),  // FN11 = shift, or tap for oneshot shift



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
    [29] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),             // FN29 = |
    [30] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),              // FN30 = "

    [31] = ACTION_MODS_KEY(MOD_LSFT, KC_COMM),             // FN31 = <
    [0] = ACTION_MODS_KEY(MOD_LSFT, KC_DOT),              // FN32 = >
    [6] = ACTION_MODS_KEY(MOD_LSFT, KC_SLSH)             // FN33 = ?

};
