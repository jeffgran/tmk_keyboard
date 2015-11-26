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
    /*                                 | TAB  | SYM  |           | SYM  |  ENT |                                 */
    /*                                 |______|_LYR__|_         _|_LYR__|______|                                 */
    /*                                   |      |      |       |      |      |                                   */
    /*                                   |  ESC | NUM  |       | AROW | ALT  |                                   */
    /*                                   |______|_LYR__|       |__LYR_|______|                                   */
    /*                                                                                                           */
    /*                                                                                                           */
    /*                                                                                                           */
    KEYMAP(
           FN11,   Q,   W,   E,   R,   T,  /* */     Y,   U,   I,   O,   P,FN10, \
           LCTL,   A,   S,   D,   F,   G,  /* */     H,   J,   K,   L,SCLN,RGUI, \
           LALT,   Z,   X,   C,   V,   B,  /* */     N,   M,COMM, DOT,SLSH,RALT, \
           /*                */BSPC,LGUI,  /* */  RCTL, SPC,                     \
           /*                */ TAB, FN1,  /* */   FN1, ENT,                     \
           /*                */ ESC, FN2,  /* */   FN2,RGUI),


    /* *********************** */
    /* Layer 1: JG Soft Layout */
    /* *********************** */
    /*  _________________________________________                     _________________________________________  */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* | SHFT |  Z   |  Y   |  C   |  P   |  K   |                   |  J   |  F   |  U   |  L   |  Q   | SHFT | */
    /* |______|______|______|______|______|______|                   |______|______|______|______|______|______| */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* | CTRL |  O   |  I   |  T   |  S   |  G   |                   |  M   |  N   |  E   |  R   |  A   |  CMD | */
    /* |______|______|______|______|______|______|                   |______|______|______|______|______|______| */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* |  ALT |  ;   |  ,   |  B   |  D   |  V   |                   |  X   |  H   |  W   |  .   |  /   |  ALT | */
    /* |______|______|______|______|______|______|_                 _|______|______|______|______|______|______| */
    /*                               |      |      |               |      |      |                               */
    /*                               | BSPC | CMD  |               | CTRL | SPC  |                               */
    /*                               |      |      |               |      |      |                               */
    /*                               |______|______|_             _|______|______|                               */
    /*                                 |      |      |           |      |      |                                 */
    /*                                 | TAB  | SYM  |           | SYM  |  ENT |                                 */
    /*                                 |______|_LYR__|_         _|_LYR__|______|                                 */
    /*                                   |      |      |       |      |      |                                   */
    /*                                   |  ESC | NUM  |       | AROW | ALT  |                                   */
    /*                                   |______|_LYR__|       |__LYR_|______|                                   */
    /*                                                                                                           */
    /*                                                                                                           */
    /*                                                                                                           */
    /* KEYMAP( */
    /*        FN11,   Z,   Y,   C,   P,   K,  /\* *\/     J,   F,   U,   L,   Q,FN10, \ */
    /*        LCTL,   O,   I,   T,   S,   G,  /\* *\/     M,   N,   E,   R,   A,RGUI, \ */
    /*        LALT,SCLN,COMM,   B,   D,   V,  /\* *\/     X,   H,   W, DOT,SLSH,RALT, \ */
    /*        /\*                *\/BSPC,LGUI,  /\* *\/  RCTL, SPC,                     \ */
    /*        /\*                *\/ TAB, FN1,  /\* *\/   FN1, ENT,                     \ */
    /*        /\*                *\/ ESC, FN2,  /\* *\/   FN4,RGUI), */
    /* workman */
    KEYMAP(
           FN11,   Q,   D,   R,   W,   B,  /* */     J,   F,   U,   P,SCLN,FN10, \
           LCTL,   A,   S,   H,   T,   G,  /* */     Y,   N,   E,   O,   I,RGUI, \
           LALT,   Z,   X,   M,   C,   V,  /* */     K,   L,COMM, DOT,SLSH,RALT, \
           /*                */BSPC,LGUI,  /* */  RCTL, SPC,                     \
           /*                */ TAB, FN1,  /* */   FN1, ENT,                     \
           /*                */ ESC, FN2,  /* */   FN4,RGUI),



    /* DISABLED, DOESN'T WORK  */
    /* DISABLED, DOESN'T WORK  */
    /* ************* */
    /* Layer 2: mods */
    /* ************* */
    /* DISABLED, DOESN'T WORK  */
    /* DISABLED, DOESN'T WORK  */
    /* the idea was to have the mods keys be transparent on the two default layers above, and have this layer always be active, just for DRYness.
       doesn't work because the SET_CLEAR keys (used for 2xFN1=FN3) clear this layer too. :(  */
    KEYMAP(
           FN11,TRNS,TRNS,TRNS,TRNS,TRNS,  /* */  TRNS,TRNS,TRNS,TRNS,TRNS,FN10, \
           LCTL,TRNS,TRNS,TRNS,TRNS,TRNS,  /* */  TRNS,TRNS,TRNS,TRNS,TRNS,RGUI, \
           LALT,TRNS,TRNS,TRNS,TRNS,TRNS,  /* */  TRNS,TRNS,TRNS,TRNS,TRNS,RALT, \
           /*                */BSPC,LGUI,  /* */  RCTL, SPC,                     \
           /*                */ FN2, FN1,  /* */   FN1, FN4,                     \
           /*                */ ESC, TAB,  /* */   ENT,RGUI),


    /* **************** */
    /* Layer 3: symbols */
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
    /*                               |  DEL |      |               |      |   _  |                               */
    /*                               |      |      |               |      |      |                               */
    /*                               |______|______|_             _|______|______|                               */
    /*                                 |      |      |           |      |      |                                 */
    /*                                 |      | FN   |           | FN   |      |                                 */
    /*                                 |______|_LYR__|_         _|_LYR__|______|                                 */
    /*                                   |      |      |       |      |      |                                   */
    /*                                   |      |      |       |      |      |                                   */
    /*                                   |______|______|       |______|______|                                   */
    /*                                                                                                           */
    /*                                                                                                           */
    /*                                                                                                           */
    KEYMAP(
           TRNS,FN14,FN25,FN26,PPLS, FN8,  /* */  FN12,FN23,PAST,FN25,FN29,TRNS, \
           TRNS, GRV,FN16,FN13, EQL,FN30,  /* */  QUOT,FN20,FN21,FN22,BSLS,TRNS, \
           TRNS,  NO,LBRC,RBRC,MINS,FN31,  /* */  SLSH,FN17,FN18,FN19, FN6,TRNS, \
           /*                */ DEL,TRNS,  /* */  TRNS,FN28,                     \
           /*                */TRNS, FN3,  /* */   FN3,TRNS,                     \
           /*                */TRNS,  NO,  /* */    NO,TRNS),



    /* ************************* */
    /* Layer 4: numbers/movement */
    /* ************************* */
    /*  _________________________________________                     _________________________________________  */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* | SHFT |      | HOME |  UP  |  END | PGUP |                   |      |  7   |  8   |  9   |      | SHFT | */
    /* |______|______|______|______|______|______|                   |______|______|______|______|______|______| */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* | CTRL |      |  <-  |      |  ->  | ESC  |                   |      |  4   |  5   |  6   |      |  CMD | */
    /* |______|______|______|______|______|______|                   |______|______|______|______|______|______| */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* |  ALT |      |      | DOWN |      | PGDN |                   |      |  1   |  2   |  3   |      |  ALT | */
    /* |______|______|______|______|______|______|_                 _|______|______|______|______|______|______| */
    /*                               |      |      |               |      |      |                               */
    /*                               |      |      |               |      |   0  |                               */
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
           TRNS,  NO,HOME,  UP, END,PGUP,  /* */    NO,   7,   8,   9,  NO,TRNS, \
           TRNS,  NO,LEFT, INS,RGHT, ESC,  /* */    NO,   4,   5,   6,  NO,TRNS, \
           TRNS,  NO,  NO,DOWN,  NO,PGDN,  /* */    NO,   1,   2,   3,  NO,TRNS, \
           /*                */TRNS,TRNS,  /* */  TRNS,   0,                     \
           /*                */TRNS,  NO,  /* */    NO,  NO,                     \
           /*                */TRNS,TRNS,  /* */  TRNS,TRNS),



    /* ************** */
    /* Layer 5: FKeys */
    /* ************** */
    /*  _________________________________________                     _________________________________________  */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* | SHFT |      |      |      | VOLUP|      |                   |      |  F7  |  F8  |  F9  |  F10 | SHFT | */
    /* |______|______|______|______|______|______|                   |______|______|______|______|______|______| */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* | CTRL |      |      |      | MUTE |      |                   |      |  F4  |  F5  |  F6  |  F11 |  CMD | */
    /* |______|______|______|______|______|______|                   |______|______|______|______|______|______| */
    /* |      |      |      |      |      |      |                   |      |      |      |      |      |      | */
    /* |  ALT |      |      |      | VOLDN|      |                   |      |  F1  |  F2  |  F3  |  F12 |  ALT | */
    /* |______|______|______|______|______|______|_                 _|______|______|______|______|______|______| */
    /*                               |      |      |               |      |      |                               */
    /*                               |      |      |               |      |      |                               */
    /*                               |      |      |               |      |      |                               */
    /*                               |______|______|_             _|______|______|                               */
    /*                                 |      |      |           |      |      |                                 */
    /*                                 |      |      |           |      | JGSL |                                 */
    /*                                 |______|______|_         _|______|______|                                 */
    /*                                   |      |      |       |      |      |                                   */
    /*                                   |      |      |       |      |      |                                   */
    /*                                   |______|______|       |______|______|                                   */
    /*                                                                                                           */
    /*                                                                                                           */
    /*                                                                                                           */
    KEYMAP(
           TRNS,  NO,  NO,  NO,VOLU,  NO,  /* */  TRNS,  F7,  F8,  F9, F10,TRNS, \
           TRNS,  NO,  NO,  NO,MUTE,  NO,  /* */  TRNS,  F4,  F5,  F6, F11,TRNS, \
           TRNS,  NO,  NO,  NO,VOLD,  NO,  /* */  TRNS,  F1,  F2,  F3, F12,TRNS, \
           /*                */TRNS,TRNS,  /* */  TRNS,  NO,                     \
           /*                */  NO,TRNS,  /* */  TRNS, FN5,                     \
           /*                */TRNS,TRNS,  /* */   FN5,TRNS),


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
    //[0] = ACTION_LAYER_TOGGLE(2), // turn mods on :/

    [1] = ACTION_LAYER_SET_CLEAR(3),  // symbol layer
    [2] = ACTION_LAYER_SET_CLEAR(4),  // number layer
    [3] = ACTION_LAYER_SET_CLEAR(5),  // Fkeys layer
    [4] = ACTION_LAYER_MOMENTARY(6),  // arrow layer

    [5] = ACTION_DEFAULT_LAYER_TOGGLE(1),                  // FN5 = toggle alternate alpha layout

    [8] = ACTION_MODS_KEY(MOD_LSFT, KC_DOT),               // FN8 = >
    [9]  = ACTION_MODS_KEY(MOD_RCTL, KC_SPC),              // FN9 = CTRL+SPACE

    [10] = ACTION_MODS_TAP_TOGGLE(MOD_RSFT),               // FN10 = shift, or tap for toggle shift
    [11] = ACTION_MODS_ONESHOT(MOD_LSFT),                  // FN11 = shift, tap for oneshot


    // Shifted keys
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_SCLN),             // FN12 = :
    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),             // FN13 = }
    [14] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),              // FN14 = ~

    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),             // FN16 = {


    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_1),                // FN17 = !
    [18] = ACTION_MODS_KEY(MOD_LSFT, KC_2),                // FN18 = @
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_3),                // FN19 = #
    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_4),                // FN20 = $
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_5),                // FN21 = %
    [22] = ACTION_MODS_KEY(MOD_LSFT, KC_6),                // FN22 = ^
    [23] = ACTION_MODS_KEY(MOD_LSFT, KC_7),                // FN23 = &

    [25] = ACTION_MODS_KEY(MOD_LSFT, KC_9),                // FN25 = (
    [26] = ACTION_MODS_KEY(MOD_LSFT, KC_0),                // FN26 = )

    //[27] = ACTION_MODS_KEY(MOD_LSFT, KC_TAB),              // FN27 = Shifted Tab
    [28] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),             // FN28 = _
    [29] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),             // FN29 = |
    [30] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),             // FN30 = "

    [31] = ACTION_MODS_KEY(MOD_LSFT, KC_COMM),             // FN31 = <
    [6] = ACTION_MODS_KEY(MOD_LSFT, KC_SLSH)               // FN6 = ?

};
