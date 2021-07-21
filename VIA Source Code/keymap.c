/* Copyright 2020 imchipwood
 *
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
                    KC_BSPC,     KC_P7,       KC_P8,       KC_P9,
                    KC_TAB,      KC_P4,       KC_P5,       KC_P6,
                    KC_NLCK,     KC_P1,       KC_P2,       KC_P3,
        KC_MUTE,    KC_CALC,     RSFT_T(KC_KP_DOT),      KC_P0,        LT(1,KC_ENT)
      ),
    [1] = LAYOUT(
                    KC_PGUP,     KC_HOME,     KC_UP,       KC_END,
                    KC_PGDN,     KC_LEFT,     KC_DOWN,     KC_RGHT,
                    KC_PMNS,     KC_PPLS,     KC_PSLS,     KC_PAST,
        KC_MSTP,    TO(2),       TO(3),       KC_MPLY,     KC_TRNS
      ),
    [2] = LAYOUT(
                    KC_F21,      KC_F22,      KC_F23,      KC_F24,
                    KC_F17,      KC_F18,      KC_F19,      KC_F20,
                    KC_F13,      KC_F14,      KC_F15,      KC_F16,
        TO(0),      KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS
      ),
    [3] = LAYOUT(
                    KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,
                    KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,
                    KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,
        TO(0),      KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS
      ),
    };

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // If console is enabled, it will print the matrix position and status of each key pressed
/*
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
#endif
*/
    return true;
}

void keyboard_post_init_user(void) {
    // Customise these values to desired behaviour
    //debug_enable = true;
    //debug_matrix = true;
    //debug_keyboard = true;
    //debug_mouse = true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    /*  Custom encoder control - handles CW/CCW turning of encoder
     *  Default behavior:
     *    main layer:
     *       CW: Volume Up
     *      CCW: Volume Down
     *    other layers:
     *       CW: = (Right Arrow to scrub media backwards)
     *      CCW: - (Left Arrow to scrub media forwards)
     *    Both Axis on my unit appear to have been flipped from the original defaults.
     */
    if (index == 0) {
        switch (get_highest_layer(layer_state)) {
            case 0:
                // main layer - Volume Up and Down
                if (clockwise) {
                    tap_code(KC_VOLD);
                } else {
                    tap_code(KC_VOLU);
                }
                break;

            default:
                // other layers - left and right arrows for scrubbing media
                if (clockwise) {
                    tap_code(KC_LEFT);
                } else {
                    tap_code(KC_RGHT);
                }
                break;
        }
    }
    return true;
}
