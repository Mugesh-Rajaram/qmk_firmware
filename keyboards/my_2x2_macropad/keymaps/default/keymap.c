// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┐
     * │ 3 │ 4 │
     * ├───┼───┤
     * │ 1 │ 2 │
     * └───┴───┘
     */
    [0] = LAYOUT(
        TO(1),   KC_9,
        KC_8,   KC_7
    ),
    [1] = LAYOUT(
        TO(2),   KC_6,
        KC_5,   KC_4
    ),
    [2] = LAYOUT(
        TO(3),   KC_3,
        KC_1,   KC_2
    )
};
