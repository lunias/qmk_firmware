#pragma once
#include "lunias.h"

#if (!defined(LAYOUT) && defined(KEYMAP))
#   define LAYOUT KEYMAP
#endif

#define KEYMAP_wrapper(...)                  LAYOUT(__VA_ARGS__)
#define LAYOUT_wrapper(...)                  LAYOUT(__VA_ARGS__)

    /* 0: QWERTY Default layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ Esc │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  -  │  =  │  \  │  `  │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│ Tab │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │BkSpc│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│Ctrl │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  ;  │  '  │█████│Enter│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│Shift│█████│  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /  │█████│Shift│ Fn  │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│█████│ Gui │ Alt │█████│█████│Space│█████│█████│█████│█████│█████│ Alt │ Gui │█████│█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
     */

#define _______________QWERTY_R1_______________        KC_ESC,                KC_1,    KC_2,            KC_3, KC_4, KC_5,   KC_6, KC_7, KC_8, KC_9,    KC_0,    KC_MINS,         KC_EQL,  KC_BSLS, KC_GRV
#define _______________QWERTY_R2_______________        KC_TAB,                KC_Q,    KC_W,            KC_E, KC_R, KC_T,   KC_Y, KC_U, KC_I, KC_O,    KC_P,    KC_LBRC,         KC_RBRC, KC_BSPC
#define _______________QWERTY_R3_______________        KC_LCTRL,              KC_A,    KC_S,            KC_D, KC_F, KC_G,   KC_H, KC_J, KC_K, KC_L,    KC_SCLN, KC_QUOT,                  KC_ENT
#define _______________QWERTY_R4_______________        KC_LSPO,                        KC_Z,            KC_X, KC_C, KC_V,   KC_B, KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH,                  KC_RSPC, MO(_QWERTY_FN)
#define _______________QWERTY_R5_______________                               KC_LGUI, LALT_T(KC_LBRC),             KC_SPC,                                     RALT_T(KC_RBRC), KC_RGUI

    /* 1: QWERTY HHKB Fn layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ Pwr │ F1  │ F2  │ F3  │ F4  │ F5  │ F6  │ F7  │ F8  │ F9  │ F10 │ F11 │ F12 │ Ins │ Del │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│Caps │ RGB │RGBhi│RGBhd│RGBsi│RGBsd│RGBvi│RGBvd│ Psc │ Slk │ Pus │ Up  │     │     │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │ VoD │ VoU │ Mut │Mply │     │NP_* │NP_/ │Home │PgUp │Left │Right│█████│NPEnt│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │█████│RGBfw│FLIP │TABL │Reset│EERST│NP_+ │NP_- │ End │PgDwn│Down │█████│     │     │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│█████│     │     │█████│█████│█████│     │█████│█████│█████│█████│     │     │█████│█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
     */

#define _______________QWERTY_FN_R1_______________        KC_PWR,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL
#define _______________QWERTY_FN_R2_______________        KC_CAPS, RGB_TOG, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,   KC_TRNS, KC_TRNS
#define _______________QWERTY_FN_R3_______________        KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_MPLY, KC_TRNS, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT,          KC_PENT
#define _______________QWERTY_FN_R4_______________        KC_TRNS,          RGB_MOD, UC_FLIP, UC_TABL, RESET,   EEP_RST, KC_PPLS, KC_PMNS, KC_END,  KC_PGDN, KC_DOWN,          KC_TRNS, KC_TRNS
#define _______________QWERTY_FN_R5_______________                 KC_TRNS, KC_TRNS,                            KC_TRNS,                                     KC_TRNS,  KC_TRNS
