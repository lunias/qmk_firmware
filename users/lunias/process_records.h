#pragma once
#include "lunias.h"

#if defined(KEYMAP_SAFE_RANGE)
#   define PLACEHOLDER_SAFE_RANGE KEYMAP_SAFE_RANGE
#else
#   define PLACEHOLDER_SAFE_RANGE SAFE_RANGE
#endif

enum userspace_custom_keycodes {
    VRSN = PLACEHOLDER_SAFE_RANGE,              // Prints QMK Firmware and board info
    KC_QWERTY,         // Sets default layer to QWERTY
    KC_MAKE,           // Run keyboard's customized make command
    KC_RGB_T,          // Toggles RGB Layer Indication mode
    KC_CCCV,           // Hold to copy, tap to paste
    UC_FLIP,           // (ಠ痊ಠ)┻━┻
    UC_TABL,           // ┬─┬ノ( º _ ºノ)
    UC_SHRG,           // ¯\_(ツ)_/¯
    UC_DISA,           // ಠ_ಠ
    NEW_SAFE_RANGE     //use "NEWPLACEHOLDER for keymap specific codes
};

bool process_record_secrets(uint16_t keycode, keyrecord_t *record);
bool process_record_keymap(uint16_t keycode, keyrecord_t *record);

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define ADJUST MO(_ADJUST)
#define TG_MODS TG(_MODS)
#define TG_GAME TG(_GAMEPAD)
#define OS_LWR OSL(_LOWER)
#define OS_RSE OSL(_RAISE)

#define QWERTY KC_QWERTY

#define KC_RESET RESET
#define KC_RST KC_RESET

#define BK_LWER LT(_LOWER, KC_BSPC)
#define SP_LWER LT(_LOWER, KC_SPC)
#define DL_RAIS LT(_RAISE, KC_DEL)
#define ET_RAIS LT(_RAISE, KC_ENTER)

/* OSM keycodes, to keep things clean and easy to change */
#define KC_MLSF OSM(MOD_LSFT)
#define KC_MRSF OSM(MOD_RSFT)

#define OS_LGUI OSM(MOD_LGUI)
#define OS_RGUI OSM(MOD_RGUI)
#define OS_LSFT OSM(MOD_LSFT)
#define OS_RSFT OSM(MOD_RSFT)
#define OS_LCTL OSM(MOD_LCTL)
#define OS_RCTL OSM(MOD_RCTL)
#define OS_LALT OSM(MOD_LALT)
#define OS_RALT OSM(MOD_RALT)
#define OS_MEH  OSM(MOD_MEH)
#define OS_HYPR OSM(MOD_HYPR)

#define ALT_APP ALT_T(KC_APP)

#define MG_NKRO MAGIC_TOGGLE_NKRO

#define UC_IRNY UC(0x2E2E)
#define UC_CLUE UC(0x203D)
