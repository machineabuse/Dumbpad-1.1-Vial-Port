# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

# Build Options
#   change yes to no to disable
#
VIA_ENABLE = yes						# Enable VIA compatibility
VIAL_ENABLE = yes						# Enable Vial compatibility
QMK_SETTINGS = no						# Enable Vial QMK Settings Menu
TAP_DANCE_ENABLE = no       # Enable Vial Tap Dance Menu
COMBO_ENABLE = no           # Enable Vial Combo Menu
LTO_ENABLE = yes						# Enable Link Time Optimization
BOOTMAGIC_ENABLE = lite     # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = yes        # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = no            # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
BLUETOOTH_ENABLE = no       # Enable Bluetooth
AUDIO_ENABLE = no           # Audio output

ENCODER_ENABLE = yes
VIAL_ENCODERS_ENABLE = yes  # Enable Vial Rotary Encoders
KEY_LOCK_ENABLE = yes
