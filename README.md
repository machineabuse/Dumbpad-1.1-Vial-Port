# Dumbpad-1.1-Vial-Port

This is a port for imchipwood's Dumbpad in it's v1.1 configuration with 16 switches and a single rotary encoder unit.

---

## Features

- 4 total layers which are completely remappable in Vial.
- Rotary encoder is implemented but the axis are not programmable in this version. The center press on the encoder is programmable however.
- Rotary encoder axis on Layer 0 is set to `Volume Up` and `Volume Down` and on every other layer `Right Arrow` and `Left Arrow`.
- Rotary encoder code has been flipped to get it to work properly on my unit with clockwise being Volume Down and Right Arrow respectively. Download the "FlippedEncoder" file if that doesn't work for you.
- The QMK Settings, Tap Dance and Combo options have been turned off to economise on EEPROM.
- Vial's Secure Unlock Combination has been implemented to unlock access to the Test Matrix.

---
