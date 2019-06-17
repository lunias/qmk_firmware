#include QMK_KEYBOARD_H
#include "lunias.h"

/*
 * HHKB Layout
 * Swapped bottom row
 * See users/lunias/wrappers.h
 */

#define LAYOUT_tokyo60_pretty_base_wrapper(...)       LAYOUT_60_hhkb(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_tokyo60_pretty_base_wrapper(
                                                 _______________QWERTY_R1_______________,
                                                 _______________QWERTY_R2_______________,
                                                 _______________QWERTY_R3_______________,
                                                 _______________QWERTY_R4_______________,
                                                 _______________QWERTY_R5_______________
                                                 ),

  [_QWERTY_FN] = LAYOUT_tokyo60_pretty_base_wrapper(
                                                    _______________QWERTY_FN_R1_______________,
                                                    _______________QWERTY_FN_R2_______________,
                                                    _______________QWERTY_FN_R3_______________,
                                                    _______________QWERTY_FN_R4_______________,
                                                    _______________QWERTY_FN_R5_______________
                                                    )
};
