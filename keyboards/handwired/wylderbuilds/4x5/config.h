// Dactyl Manuform Hotswap
#pragma once

// Basic Config
#define SPLIT_HAND_PIN      GP26  // high = left, low = right

// Using Serial instead of I2C
//#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP16
#define SERIAL_USART_RX_PIN GP17
#define SERIAL_PIO_USE_PIO0
//#define SERIAL_USART_TIMEOUT 100  // USART driver timeout. default 100
//#define SERIAL_USART_SPEED 921600
//#define SERIAL_USART_PIN_SWAP

// RP2040 Settings
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED_MASK 0U
// More RP2040 Settings
#define RP2040_FLASH_AT25SF128A
#define RP2040_FLASH_GD25Q64CS
#define RP2040_FLASH_W25X10CL
#define RP2040_FLASH_IS25LP080
#define RP2040_FLASH_GENERIC_03H

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 5
// Matrix COL and ROW
#define MATRIX_COL_PINS { GP3, GP4, GP5, GP6, GP7 }
#define MATRIX_ROW_PINS { GP10, GP11, GP12, GP13, GP14 }
#define DIODE_DIRECTION COL2ROW
