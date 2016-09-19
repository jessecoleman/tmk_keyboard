/*
 * HHKB Layout
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Colemak
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn0|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |Gui  |Alt|
     *       `-------------------------------------------'
     */

    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, FN7,DEL,  \
           TAB, Q,   W,   F,   P,   G,   J,   L,   U,   Y, SCLN, LBRC,RBRC,BSPC,      \
           FN2,A,   R,   S,   T,   D,   H,   N,   E,   I,   O, QUOT,ENT,              \
           LSFT,Z,   X,   C,   V,   B,   K,   M,  COMM,DOT,SLSH,FN4,FN0,             \
                LALT,LGUI,          SPC,                RGUI,RALT),

    /* Layer 1: Qwerty
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn0|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |Gui  |Alt|
     *       `-------------------------------------------'
     */
    KEYMAP(TRNS, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL,FN7,DEL,   \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,     \
           FN1, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,            \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,FN3,FN0,           \
                LALT,LGUI,          SPC,                RGUI,RALT),

    /* Layer 2: Cursor
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|End|PgD|Dow|      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,  \
           DEL,FN6,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP, END,  UP,HOME,TRNS,  TRNS,    \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGDN,LEFT,DOWN,RGHT,PENT,           \
           CAPS,TRNS,TRNS,FN5,TRNS,TRNS,TRNS,TRNS,MUTE,VOLD,VOLU,TRNS,TRNS,           \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 3: NUMPAD & MOUSEKEYS
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|End|PgD|Dow|      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(PWR,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSLS,PAST,PMNS, \
           ACL0,BTN3,MS_U,BTN2,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,7, 8, 9, PPLS,        \
           ACL1,MS_L,MS_D,MS_R,TRNS,TRNS,TRNS,TRNS, TRNS, 4, 5, 6, PENT,           \
           ACL2,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, 1, 2, 3,CALC,TRNS,             \
                TRNS,TRNS,          BTN1,               0,DOT),
};



/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
    [0] = ACTION_DEFAULT_LAYER_SET(0),
    [1] = ACTION_LAYER_TAP_TOGGLE(3),
    [2] = ACTION_MODS_TAP_KEY(2, 3),
    [3] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_BSPACE),
    [4] = ACTION_LAYER_TAP_KEY(2, KC_BSLASH),
    [5] = ACTION_LAYER_ON(0, on),
    [6] = ACTION_LAYER_ON(1, on),
    [7] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
    /*
    [1]  = ACTION_LAYER_MOMENTARY(2),
    [2]  = ACTION_LAYER_MOMENTARY(3),
    [3]  = ACTION_LAYER_MOMENTARY(4),
    [4]  = ACTION_LAYER_MOMENTARY(5),
    [5]  = ACTION_LAYER_MOMENTARY(6),
    [6]  = ACTION_LAYER_MOMENTARY(7),
    [7]  = ACTION_LAYER_TOGGLE(1),
    [8]  = ACTION_LAYER_TOGGLE(2),
    [9]  = ACTION_LAYER_TOGGLE(3),
    [10] = ACTION_LAYER_TAP_TOGGLE(1),
    [11] = ACTION_LAYER_TAP_TOGGLE(2),
    [12] = ACTION_LAYER_TAP_TOGGLE(3),
    [13] = ACTION_LAYER_TAP_KEY(1, KC_BSLASH),
    [14] = ACTION_LAYER_TAP_KEY(2, KC_TAB),
    [15] = ACTION_LAYER_TAP_KEY(3, KC_ENTER),
    [16] = ACTION_LAYER_TAP_KEY(4, KC_SPACE),
    [17] = ACTION_LAYER_TAP_KEY(5, KC_SCOLON),
    [18] = ACTION_LAYER_TAP_KEY(6, KC_QUOTE),
    [19] = ACTION_LAYER_TAP_KEY(7, KC_SLASH),
    [20] = ACTION_MODS_TAP_KEY(2, 3),
    [21] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_SPACE),
    [22] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_QUOTE),
    [23] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENTER),
    [24] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),
    [25] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_BSPACE),
    [26] = ACTION_MODS_ONESHOT(MOD_LCTL),
    [27] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_ESC),
    [28] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_BSPACE),
    [29] = ACTION_MODS_ONESHOT(MOD_LSFT),
    [30] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_GRAVE),
    [31] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_BSLASH),
    */
};
#else
const action_t fn_actions[] PROGMEM = {
    [0] = ACTION_LAYER_TAP_TOGGLE(3),
    [1] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_BSLASH),
    [2] = ACTION_MODS_TAP_KEY(MOD_LGUI, KC_BSPACE),
    [3] = ACTION_LAYER_TAP_KEY(2, KC_BSPACE),
    [4] = ACTION_LAYER_TAP_KEY(2, KC_BSLASH),
    [5] = ACTION_LAYER_SET_CLEAR(0),
    [6] = ACTION_LAYER_SET_CLEAR(1),
    [7] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
};
#endif
