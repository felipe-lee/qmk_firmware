/*
Copyright 2022 Felipe Lee <35938642+felipe-lee@users.noreply.github.com>

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

// See https://docs.qmk.fm/#/config_options for all options

// This file will be processed after keyboards/keebio/iris/rev6/config.h

#pragma once

// #define USE_I2C
//#define EE_HANDS

#define TAPPING_TOGGLE 3 // number of times needed to tap for TT() to toggle the layer

// https://docs.qmk.fm/#/feature_caps_word
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects

#undef ENABLE_RGB_MATRIX_BAND_SAT
#undef ENABLE_RGB_MATRIX_BAND_VAL
#undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL