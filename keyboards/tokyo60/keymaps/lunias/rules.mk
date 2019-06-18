AUDIO_ENABLE								= no     # Audio output on port C6
BACKLIGHT_ENABLE						= no     # Enable keyboard backlight functionality
BLUETOOTH_ENABLE						= no     # Enable Bluetooth with the Adafruit EZ-Key HID
BOOTMAGIC_ENABLE						= no     # Virtual DIP switch configuration(+1000)
COMMAND_ENABLE							= no     # Commands for debug and configuration
CONSOLE_ENABLE							= no     # Console for debug(+400)
EXTRAKEY_ENABLE							= yes    # Audio control and System control(+450)
INDICATOR_LIGHTS						= no
MACROS_ENABLED							= no
MOUSEKEY_ENABLE							= no     # Mouse keys(+4700)
NKRO_ENABLE									= yes    # USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
RGBLIGHT_ENABLE							= yes    # Enable RGB light
RGBLIGHT_STARTUP_ANIMATION	= yes
RGBLIGHT_TWINKLE						= yes
																		 # Do not enable SLEEP_LED_ENABLE it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE						= no     # Breathing sleep LED during USB suspend
SPACE_CADET_ENABLE					= yes
SWAP_HANDS_ENABLE						= no
TAP_DANCE_ENABLE						= no
UNICODE_ENABLE							= yes     # Unicode


Bootloader									= atmel-dfu
