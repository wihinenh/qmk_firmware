    /* Copyright 2020 Shulin Huang <mumu@x-bows.com>
     * This program is free software: you can redistribute it and/or modify
     * it under the terms of the GNU General Public License as published by
     * the Free Software Foundation, either version 2 of the License, or
     * (at your option) any later version.
     *
     * This program is distributed in the hope that it will be useful,
     * but WITHOUT ANY WARRANTY; without even the implied warranty of
     * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
     * GNU General Public License for more details.
     *
     * You should have received a copy of the GNU General Public License
     * along with this program.  If not, see <http://www.gnu.org/licenses/>.
     */
#include QMK_KEYBOARD_H

    enum custom_keycodes {
        AE = SAFE_RANGE,
        OE,
    };

    const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
      /* Keymap VANILLA: (Base Layer) Default Layer
       *
       * |---------------------------------------------------------------------------------------------------------------------------------|
       * | Esc |  F1  |  F2  |  F3  |  F4  |      F5  |  F6  |  F7  |  F8  |      F9  |  F10 |  F11 |  F12 |   Delete   |    Prtsc    |
       * |---------------------------------------------------------------------------------------------------------------------------------|
       * |  ~  |     1   |   2   |   3   |   4   |    5      |       6    |    7    |    8   |   9  |   0  |   -  |  =  |  Backspace  |
       * |---------------------------------------------------------------------------------------------------------------------------------|
       * | Tab |   Q    |    W   |   E  |   R  |   T  |            |    Y   |    U   |    I  |   O  |   P  |   [  |  ]  |   \  | PgUp |
       * |---------------------------------------------------------------------------------------------------------------------------------|
       * | Ctl |   A   |   S   |   D  |   F  |   G  |      Bksp      |    H  |    J   |   K  |   L  |   ;  |  '"  |    Enter   | PgDn |
       * |---------------------------------------------------------------------------------------------------------------------------------|
       * |Shift|   Z  |   X  |   C  |   V  |   B  |       Enter       |    N  |    M   |  ,  |   .  |  /?  | Shift|      |  Up |
       * |---------------------------------------------------------------------------------------------------------------------------------|
       * |Ctrl | GUI |     Alter   |    Space   |   Ctrl   |   Shift   |     Space     |    Alter   |  FN  | Ctrl | Lft  |  Dn |  Rig |
       * |---------------------------------------------------------------------------------------------------------------------------------|
       */

        /* Base layer & scandic layer */
      [0] = LAYOUT(
        KC_ESC,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,    KC_DEL,  KC_PSCR,

        KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,             KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,   KC_EQL,  KC_BSPC,

        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,   KC_RBRC, KC_BSLS, KC_PGUP,
        KC_ESC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_BSPC, KC_H,    KC_J,    KC_K,    KC_L,    OE,      AE,        KC_ENT,  KC_PGDN,
        KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_ENT,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,   KC_UP,

        KC_LCTL,   KC_LGUI, KC_LALT,          LT(1,KC_SPC), LT(2,KC_ESC), KC_RSFT,      KC_SPC,           KC_RALT, MO(1),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

    /* Symbol layer */
      [1] = LAYOUT(
        QK_BOOT,   RGB_TOG, RGB_MOD, RGB_HUI, KC_TRNS, RGB_SPD, RGB_SPI, RGB_VAD, RGB_VAI, KC_CALC, KC_MYCM, KC_MSEL, KC_MAIL,   NK_TOGG, EE_CLR,

        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_LPRN, KC_RPRN, KC_TRNS, KC_TRNS,   KC_TRNS, KC_NUM,

        KC_TRNS,   KC_HASH, KC_AMPR, KC_PERC, KC_ASTR, KC_AT,            KC_TRNS, KC_LBRC, KC_LCBR, KC_RCBR, KC_RBRC, KC_TRNS,   KC_TRNS, KC_TRNS, KC_HOME,
        KC_TRNS,   KC_CIRC, KC_MINS, KC_EQL,  KC_DLR,  KC_PIPE, KC_TRNS, KC_GRV,  KC_COLN, KC_QUOT, KC_DQUO, KC_SCLN, KC_TRNS,   KC_TRNS, KC_END,
        KC_TRNS,   KC_TRNS, KC_UNDS, KC_PLUS, KC_TILD, KC_TRNS, KC_TRNS, KC_BSLS, KC_EXLM, KC_LT,   KC_GT,   KC_QUES, KC_MUTE,   KC_VOLU,

        KC_TRNS,   KC_TRNS, KC_TRNS,          KC_TRNS,     KC_TRNS, KC_TRNS,      KC_TRNS,          KC_TRNS, KC_TRNS, KC_MPLY,   KC_MPRV, KC_VOLD, KC_MNXT),

    /* Navigation layer */
      [2] = LAYOUT(
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS,

        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS,

        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,

        KC_TRNS,   KC_TRNS, KC_TRNS,          KC_TRNS,     KC_TRNS, KC_TRNS,      KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
        case AE:
            if (get_mods() & MOD_MASK_CTRL) {
                // Do nothing with control, prevent sending ctrl-a
                return false;
            }
            if (get_mods() & MOD_MASK_SHIFT) {
                unregister_code(KC_LSFT);
                register_code(KC_LALT);
                register_code(KC_U);
                unregister_code(KC_U);
                unregister_code(KC_LALT);
                register_code(KC_LSFT);
                register_code(KC_A);
                unregister_code(KC_A);
            } else {
                SEND_STRING(SS_LALT(SS_TAP(X_U)) SS_TAP(X_A));
            }
            return false;
        case OE:
            if (get_mods() & MOD_MASK_CTRL) {
                // Do nothing with control, prevent sending ctrl-o
                return false;
            }
            if (get_mods() & MOD_MASK_SHIFT) {
                unregister_code(KC_LSFT);
                register_code(KC_LALT);
                register_code(KC_U);
                unregister_code(KC_U);
                unregister_code(KC_LALT);
                register_code(KC_LSFT);
                register_code(KC_O);
                unregister_code(KC_O);
            } else {
                SEND_STRING(SS_LALT(SS_TAP(X_U))SS_TAP(X_O));
            }
            return false;
        }
    }
    return true;
};

