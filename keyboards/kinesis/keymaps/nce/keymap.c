#include QMK_KEYBOARD_H

#define QWERTY 0 // Base qwerty
#define SYMBOLS 1 // Symbols and functions


/****************************************************************************************************
*
* Keymap: Default Layer in Qwerty
*
* ,-------------------------------------------------------------------------------------------------------------------.
* | Esc    |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  |  F10 |  F12 | PSCR | SLCK | PAUS |  FN0 |  BOOT  |
* |--------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
* | =+     |  1!  |  2@  |  3#  |  4$  |  5%  |                           |  6^  |  7&  |  8*  |  9(  |  0)  | -_     |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* | Tab    |   Q  |   W  |   E  |   R  |   T  |                           |   Y  |   U  |   I  |   O  |   P  | \|     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Ctrl   |   A  |   S  |   D  |   F  |   G  |                           |   H  |   J  |   K  |   L  |  ;:  | '"     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Shift  |   Z  |   X  |   C  |   V  |   B  |                           |   N  |   M  |  ,.  |  .>  |  /?  | Shift  |
* `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
*          | `~   | INS  | Left | Down |                                         | Up   | Rght |  [{  |  ]}  |
*          `---------------------------'                                         `---------------------------'
*                                        ,-------------.         ,-------------.
*                                        | CMD  | Alt  |         | PgUp  | Ctrl|
*                                 ,------|------|------|         |------+------+------.
*                                 |      |      | Home |         | PgDn |      |      |
*                                 | BkSp | Esc  |------|         |------|Return| Space|
*                                 |      |      | -_   |         | =+   |      |      |
*                                 `--------------------'         `--------------------'
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[QWERTY] = LAYOUT(
  KC_ESC    ,KC_F1     ,KC_F2     ,KC_F3     ,KC_F4     ,KC_F5     ,KC_F6  ,KC_F7  ,KC_F8,
  KC_EQL    ,KC_1      ,KC_2      ,KC_3      ,KC_4      ,KC_5      ,
  KC_TAB    ,KC_Q      ,KC_W      ,KC_E      ,KC_R      ,KC_T      ,
  KC_LCTL   ,KC_A      ,KC_S      ,KC_D      ,KC_F      ,KC_G      ,
  KC_LSFT   ,KC_Z      ,KC_X      ,KC_C      ,KC_V      ,KC_B      ,
             KC_GRV    ,KC_INS    ,KC_LEFT   ,KC_DOWN   ,
                        KC_LGUI   ,KC_LALT   ,
                        KC_HOME   ,
                        KC_BSPC   ,KC_ESC    ,KC_MINS   ,

  KC_F9     ,KC_F10    ,KC_F11    ,KC_F12    ,KC_PSCR   ,KC_SLCK   ,KC_PAUS, KC_FN0, RESET,
  KC_6      ,KC_7      ,KC_8      ,KC_9      ,KC_0      ,KC_MINS   ,
  KC_Y      ,KC_U      ,KC_I      ,KC_O      ,KC_P      ,KC_BSLS   ,
  KC_H      ,KC_J      ,KC_K      ,KC_L      ,LT(SYMBOLS, KC_SCLN) ,KC_QUOT,
  KC_N      ,KC_M      ,KC_COMM   ,KC_DOT    ,KC_SLSH   ,KC_RSFT   ,
  KC_UP     ,KC_RGHT   ,KC_LBRC   ,KC_RBRC   ,
                        KC_PGUP   ,KC_RALT   ,
                        KC_PGDOWN ,
                        KC_EQL    ,KC_ENTER  ,KC_SPC
    ),
[SYMBOLS] = LAYOUT(
  KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS  ,KC_TRNS  ,KC_TRNS,
  KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,
  KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,
  KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,
  KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,
             KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,
                        KC_TRNS   ,KC_MPLY   ,
                        KC_MNXT   ,
                        KC_TRNS   ,KC_TRNS   ,KC_MPRV,

  KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS, KC_TRNS, RESET,
  KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,
  KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,
  KC_LEFT   ,KC_DOWN   ,KC_UP     ,KC_RGHT   ,KC_TRNS   ,KC_TRNS   ,
  KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,
                        KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,KC_TRNS   ,
                        KC_MUTE   ,KC_TRNS   ,
                        KC_VOLU   ,
                        KC_VOLD   ,KC_TRNS   ,KC_TRNS
    )
};
