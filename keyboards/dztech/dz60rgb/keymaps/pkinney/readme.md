To get started, instal qmk from Homebrew and go through its setup.

To flash, hold down upper-left-most key while plugging in for a coule of seconds.  Go to system informatin to determine the proper MCU.

One of the boards (gray) is the v1 of the dz60rgb (STM32 Bootloader):

```
qmk compile -kb dztech/dz60rgb -km pkinney:dfu-util
```

The other is a v2 and has the ATmega32U4 bootloader

```
qmk compile -kb dztech/dz60rgb/v2 -km pkinney:dfu
```


---

Old way: 

```
CFLAGS="-Wno-error=deprecated" make dztech/dz60rgb:pkinney:dfu-util
```

