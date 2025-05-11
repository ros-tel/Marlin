/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

 /**
  * 2017 Victor Perez Marlin for stm32f1 test
  * 2018 Modified by Pablo Crespo for Morpheus Board (https://github.com/pscrespo/Morpheus-STM32)
  */

/**
 * MORPHEUS Board pin assignments
 */

#if NOT_TARGET(__STM32F1__, STM32F1xx)
  #error "Oops! Select an STM32F1 board in 'Tools > Board.'"
#endif

#define BOARD_INFO_NAME "Bluepill based board"

//
// Limit Switches
//
#define X_STOP_PIN     PA0
#define Y_STOP_PIN     PA1

//
// Steppers
//
// X & Y enable are the same
#define X_STEP_PIN     PB7
#define X_DIR_PIN      PB6
#define X_ENABLE_PIN   PB9

#define Y_STEP_PIN     PA9
#define Y_DIR_PIN      PA8
#define Y_ENABLE_PIN   PA15

//#define TMC_USE_SW_SPI
#define TMC_SPI_MOSI   PB5
#define TMC_SPI_MISO   PB4
#define TMC_SPI_SCK    PB3

#define X_CS_PIN       PB8
#define Y_CS_PIN       PA10

// Laser PWM
#define SPINDLE_LASER_PWM_PIN PB15


//Encoder
#define BTN_EN1        PC15
#define BTN_EN2        PC14
#define BTN_ENC        PC13

// SDCard
#define MISO_PIN       PA6
#define MOSI_PIN       PA7
#define SCK_PIN        PA5
#define SDSS           PA4
#define SD_DETECT_PIN  -1
#define KILL_PIN       -1

// BEEPER
#define BEEPER_PIN     PB1

//MKS_MINI_12864
#define DOGLCD_CS     PA3
#define DOGLCD_A0     PB10

#define NEOPIXEL_PIN  PB11

 // GLCD features
 //
 //#define LCD_CONTRAST   190

 // Uncomment screen orientation
 //
 //#define LCD_SCREEN_ROT_90
 //#define LCD_SCREEN_ROT_180
 //#define LCD_SCREEN_ROT_270


#define DISABLE_JTAG
