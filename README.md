# Dumbpad 1.1 Vial Port (Non-remappable encoder)

This is a port for imchipwood's Dumbpad in it's v1.1 configuration with 16 switches and a single rotary encoder unit or 17 switches. Flash at your own risk!

*DO NOT FLASH THIS ON ANY OTHER DUMBPAD VERSION OR CONFIGURATION*

Because it probably won't work. ┑(￣Д ￣)┍

## Features

- 4 total layers which are completely remappable in Vial.
- Rotary encoder is implemented but the axis are not programmable in this version. The center press on the encoder is programmable however.
- Rotary encoder axis on Layer 0 is set to `Volume Up` and `Volume Down` and on every other layer `Right Arrow` and `Left Arrow`.
- I've provided two versions of the firmware, one with the author's default encoder configuration and another for flipped to get the proper clockwise/counterclockwise behaviour (mine was flipped).
- The QMK Settings, Tap Dance and Combo options have been turned off to economise on EEPROM.
- Vial's Secure Unlock Combination has been implemented to unlock access to the Test Matrix.

## How to use this file

1. Use QMK Toolbox -> Select the `.hex` and nothing else.
2. Reset into Bootloader -> Clear EEPROM
3. Reset into Bootloader again -> Flash the file
4. Grab Vial from https://get.vial.today
5. Enjoy!
