// Copyright 2025
// instagram.com/mkbrrd
// miketronic@github
// SPDX-License-Identifier: GPL-2.0+

#pragma once

#    define BOOTMAGIC_ROW 0
#    define BOOTMAGIC_COLUMN 2
#    define BOOTMAGIC_ROW_RIGHT 4
#    define BOOTMAGIC_COLUMN_RIGHT 2

#    define DEBOUNCE 3
#    define HOLD_ON_OTHER_KEY_PRESS
#    define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
#    define TAPPING_TERM 170
#    define MACRO_TIMER 3

// Enable rapid switch from tap to hold, setting to 0 disables double tap hold auto-repeat.
#    define QUICK_TAP_TERM 0

#    define SPLIT_USB_DETECT
#    define SPLIT_TRANSPORT_MIRROR
#    define SPLIT_LAYER_STATE_ENABLE
#    define SPLIT_LED_STATE_ENABLE
#    define SPLIT_MODS_ENABLE
#    define USE_SERIAL
#    define SERIAL_USART_FULL_DUPLEX
#    define SERIAL_USART_TX_PIN GP28
#    define SERIAL_USART_RX_PIN GP29
#    define SERIAL_USART_PIN_SWAP
#    define MASTER_LEFT

// RGBLIGHT settings
// https://docs.qmk.fm/#/feature_rgblight
#    define WS2812_DI_PIN GP0
#    define WS2812_PIO_USE_PIO1
#    define RGBLIGHT_SPLIT
#    define RGBLIGHT_LED_COUNT 8
#    define RGBLED_SPLIT { 4, 4 }
#    define RGBLIGHT_DEFAULT_ON false

#    undef RGBLIGHT_DEFAULT_HUE
#    define RGBLIGHT_DEFAULT_HUE 10

#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 5

#    undef RGBLIGHT_LIMIT_VAL
#    define RGBLIGHT_LIMIT_VAL 255
#    define RGBLIGHT_DEFAULT_VAL 80
#    define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT

#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_TWINKLE
#    undef RGBLIGHT_EFFECT_RAINBOW_MOOD
#    undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    undef RGBLIGHT_EFFECT_SNAKE
#    undef RGBLIGHT_EFFECT_CHRISTMAS
#    undef RGBLIGHT_EFFECT_ALTERNATING


// SPI
#    define SPI_DRIVER SPID1
#    define SPLIT_POINTING_ENABLE
#    define POINTING_DEVICE_COMBINED
#    define POINTING_DEVICE_CS_PIN GP9
#    define SPI_SCK_PIN GP10
#    define SPI_MOSI_PIN GP11
#    define SPI_MISO_PIN GP12


// PMW3360 settings
#    undef PMW3360_CPI
#    undef PMW3360_CS_DIVISOR
//#    define ROTATIONAL_TRANSFORM_ANGLE 127
#    define POINTING_DEVICE_ROTATION_180_RIGHT
#    define POINTING_DEVICE_INVERT_X_RIGHT
#    define POINTING_DEVICE_GESTURES_CURSOR_GLIDE_ENABLE_Y


// Mouse key speed and acceleration.
#    undef MOUSEKEY_DELAY
#    define MOUSEKEY_DELAY          0
#    undef MOUSEKEY_INTERVAL
#    define MOUSEKEY_INTERVAL       16
#    undef MOUSEKEY_WHEEL_DELAY
#    define MOUSEKEY_WHEEL_DELAY    0
#    undef MOUSEKEY_MAX_SPEED
#    define MOUSEKEY_MAX_SPEED      6
#    undef MOUSEKEY_TIME_TO_MAX
#    define MOUSEKEY_TIME_TO_MAX    64
