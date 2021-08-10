#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
                    KC_BSPC,     KC_P7,       KC_P8,       KC_P9,
                    KC_TAB,      KC_P4,       KC_P5,       KC_P6,
                    KC_MSTP,     KC_P1,       KC_P2,       KC_P3,
        KC_MUTE,    KC_MPLY,     RSFT_T(KC_KP_DOT),      KC_P0,        LT(1,KC_ENT)
      ),
    [1] = LAYOUT(
                    KC_PGUP,     KC_HOME,     KC_UP,       KC_END,
                    KC_PGDN,     KC_LEFT,     KC_DOWN,     KC_RGHT,
                    KC_PMNS,     KC_PPLS,     KC_PSLS,     KC_PAST,
        KC_NLCK,    TO(2),       TO(3),       KC_CALC,     KC_TRNS
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

/* void keyboard_post_init_user(void) {
    // Customise these values to desired behaviour
    //debug_enable = true;
    //debug_matrix = true;
    //debug_keyboard = true;
    //debug_mouse = true;
} */

// bool encoder_update_user(uint8_t index, bool clockwise) {
    /*  Custom encoder control - handles CW/CCW turning of encoder
     *  Default behavior:
     *    main layer:
     *       CW: Volume Up
     *      CCW: Volume Down
     *    other layers:
     *       CW: = (Right Arrow to scrub media backwards)
     *      CCW: - (Left Arrow to scrub media forwards)
     */
/*    if (index == 0) {
        switch (get_highest_layer(layer_state)) {
            case 0:
                // main layer - Volume Up and Down
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
                break;

            default:
                // other layers - left and right arrows for scrubbing media
                if (clockwise) {
                    tap_code(KC_RGHT);
                } else {
                    tap_code(KC_LEFT);
                }
                break;
        }
    }
    return true;
}
*/
