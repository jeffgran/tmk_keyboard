/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef KEYMAP_COMMON_H
#define KEYMAP_COMMON_H

#include <stdint.h>
#include <stdbool.h>
#include <avr/pgmspace.h>
#include "keycode.h"
#include "action.h"
#include "action_macro.h"
#include "report.h"
#include "host.h"
#include "print.h"
#include "debug.h"
#include "keymap.h"


extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const uint16_t fn_actions[];

#define KEYMAP(                                                     \
    K00, K01, K02, K03, K04, K05,     K3A, K3B, K3C, K3D, K3E, K3F, \
    K10, K11, K12, K13, K14, K15,     K4A, K4B, K4C, K4D, K4E, K4F, \
    K20, K21, K22, K23, K24, K25,     K5A, K5B, K5C, K5D, K5E, K5F, \
                        K06, K07,     K38, K39,  \
                        K16, K17,     K48, K49,  \
                        K26, K27,     K58, K59  \
) { \
    { KC_##K00, KC_##K10, KC_##K20, KC_P1, KC_P1, KC_P1 }, \
    { KC_##K01, KC_##K11, KC_##K21, KC_P1, KC_P1, KC_P1 }, \
    { KC_##K02, KC_##K12, KC_##K22, KC_P1, KC_P1, KC_P1 }, \
    { KC_##K03, KC_##K13, KC_##K23, KC_P1, KC_P1, KC_P1 }, \
    { KC_##K04, KC_##K14, KC_##K24, KC_P1, KC_P1, KC_P1 }, \
    { KC_##K05, KC_##K15, KC_##K25, KC_P1, KC_P1, KC_P1 }, \
    { KC_##K06, KC_##K16, KC_##K26, KC_P1, KC_P1, KC_P1 }, \
    { KC_##K07, KC_##K17, KC_##K27, KC_P1, KC_P1, KC_P1 }, \
    { KC_P1, KC_P1, KC_P1, KC_##K38, KC_##K48, KC_##K58 }, \
    { KC_P1, KC_P1, KC_P1, KC_##K39, KC_##K49, KC_##K59 }, \
    { KC_P1, KC_P1, KC_P1, KC_##K3A, KC_##K4A, KC_##K5A }, \
    { KC_P1, KC_P1, KC_P1, KC_##K3B, KC_##K4B, KC_##K5B }, \
    { KC_P1, KC_P1, KC_P1, KC_##K3C, KC_##K4C, KC_##K5C }, \
    { KC_P1, KC_P1, KC_P1, KC_##K3D, KC_##K4D, KC_##K5D }, \
    { KC_P1, KC_P1, KC_P1, KC_##K3E, KC_##K4E, KC_##K5E }, \
    { KC_P1, KC_P1, KC_P1, KC_##K3F, KC_##K4F, KC_##K5F } \
}

#endif
