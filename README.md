# Dumbpad 1.1 Vial Port (Non-remappable encoder)

![Vial Screenshot-80](https://user-images.githubusercontent.com/8606354/126425452-03ff1eed-75b0-48ec-9c34-a8349c60ffed.jpg)

This is my [Vial](https://get.vial.today) port for [imchipwood's Dumbpad](https://github.com/imchipwood/dumbpad) in it's v1.1 configuration with 16 switches + rotary encoder unit or 17 switches. Also included is the VIA firmware if you are so inclined. Flash at your own risk!

*DO NOT FLASH THIS ON ANY OTHER DUMBPAD VERSION OR CONFIGURATION*

Because it probably won't work. ┑(￣Д ￣)┍

## Features

- 4 total layers which are completely remappable in Vial/VIA.
- Rotary encoder is implemented but the axis are not programmable in this version. The center press on the encoder is programmable however.
- Rotary encoder axis on Layer 0 is set to `Volume Up` and `Volume Down` and on every other layer `Right Arrow` and `Left Arrow`.
- I've provided two versions of the firmware, one with the author's default encoder configuration and another for flipped to get the proper clockwise/counterclockwise behaviour (mine was flipped).
- The QMK Settings, Tap Dance and Combo options have been turned off to economise on EEPROM.
- Vial's Secure Unlock Combination has been implemented to unlock access to the Test Matrix. (If you use the VIA firmware you don't need to worry about this.)

## How to use this file

1. Use QMK Toolbox -> Select the `.hex` and nothing else.
2. Reset into Bootloader -> Clear EEPROM
3. Reset into Bootloader again -> Flash the file
4. Grab [Vial](https://get.vial.today)
5. Enjoy!

## Note on using the VIAL firmware in VIA (and vice versa)

![VIA Screenshot-80](https://user-images.githubusercontent.com/8606354/126425445-1dac55cd-7166-4c1b-8c38-539170475fb7.jpg)

If you would like to use [VIA](https://caniusevia.com) to program your Dumbpad, you can also go ahead and grab the `.json` file and sideload that in VIA by going to `File -> Import Keymap.`

- Using the Vial firmware in VIA does work with this firmware however unless you deactivate the Secure Unlock Combination in Vial first the Test Matrix will not function. Everything else should work however.

- Conversely, if you use the VIA firmware in Vial, you will have to sideload the `.json` before Vial will be able to see the pad.

Let me know if you find any bugs, enjoy!
