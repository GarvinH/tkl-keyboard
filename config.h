#pragma once

#include "config_common.h"

#define VENDOR_ID    0x525C
#define PRODUCT_ID   0x9F9F
#define DEVICE_VER   0x0001

#define MANUFACTURER Axolstudio
#define PRODUCT      Noel

#define MATRIX_ROWS 6
#define MATRIX_COLS 17

#define MATRIX_ROW_PINS { B1, B3, B2, B0, C7, C6}
#define MATRIX_COL_PINS { B7, B6, B5, B4, D2, D1, D0, D3, D4, D5, D6, D7, F0, F1, F4, F5, F6}

#define DIODE_DIRECTION ROW2COL

#define DEBOUNCE 5