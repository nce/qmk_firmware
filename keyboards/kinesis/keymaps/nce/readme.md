# My keymap for kinesis-advantage
Pretty default kinesis Layout with some of my ergodox mixins.
Symbol Layers has some media keys inside.

The KB500 is stapelberg modded.

German Umlauts are achieved with the EurKey MacOS Keymap by pressing alt+a.

## Building
```
qmk compile -kb kinesis/kint41 -km nce
```

## Flashing
Currently (teensy4.1) it's not possible to flash the keyboard with the qmk commandline tools.
Only with the gui teensy loader. Maybe the homebrew one is too old...

The `progmem` button sets the teensy to bootloader mode.
