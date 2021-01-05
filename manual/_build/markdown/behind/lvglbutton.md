# placing a button on the screen

```
This sample is not really important, but it will teach you that you need to set LVGL_CONFIG values, in order    to be able to use LVGL functions.
```

## Building and Running

In this repo under samples you will find an adapted gui/clock program.
A button from the LVGL library is placed on the screen.

Later on when the touch-screen driver is ready, we’ll be able to manipulate it.

```
Make sure that prj.conf file in clock directory contains the following:
```

**NOTE**: CONFIG_LVGL_OBJ_CONTAINER=y
CONFIG_LVGL_OBJ_BUTTON=y

```
```

*problem* the canvas heigh\*width eats up RAM and exceeds once > 40