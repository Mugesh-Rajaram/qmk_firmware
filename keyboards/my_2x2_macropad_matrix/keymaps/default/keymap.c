// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┐
     * │Tog│
     * ├───┼───┐
     * │ 1 │ 2 │
     * └───┴───┘
     */
    [0] = LAYOUT(
        TO(1),
        KC_5,   KC_6
    ),
    [1] = LAYOUT(
        TO(2),
        KC_3,   KC_4
    ),
    [2] = LAYOUT(
        TO(3),
        KC_1,   KC_2
    )
};
