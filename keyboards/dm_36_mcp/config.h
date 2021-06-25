/*
Copyright 2021 Ibnu D. Aji (iaji@siskam.link)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID 0x1209
#define PRODUCT_ID 0x6969
#define DEVICE_VER 0x0001
#define MANUFACTURER Rick
#define PRODUCT Something

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 10

#define TAPPING_TERM    200
#define IGNORE_MOD_TAP_INTERRUPT

#define DEBOUNCE    5

#define USB_MAX_POWER_CONSUMPTION 500

/* NKRO */
#ifndef FORCE_NKRO
    #define FORCE_NKRO  // Depends on NKRO_ENABLE.
#endif

