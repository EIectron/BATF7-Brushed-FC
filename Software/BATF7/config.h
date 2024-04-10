/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32F7X2

#define BOARD_NAME        BATF7
#define MANUFACTURER_ID   KLMC

#define USE_GYRO
#define GYRO_1_SPI_INSTANCE SPI1
#define USE_GYRO_SPI_MPU6500
#define USE_ACC
#define USE_ACC_SPI_MPU6500

#define USE_BARO
#define BARO_I2C_INSTANCE (I2CDEV_1)
#define USE_BARO_MS5611

#define USE_FLASH
#define FLASH_SPI_INSTANCE SPI3
#define USE_FLASH_W25Q128FV

#define USE_ADC
#define USE_I2C

#define BEEPER_PIN           PA8
#define MOTOR1_PIN           PC9
#define MOTOR2_PIN           PC8
#define MOTOR3_PIN           PC7
#define MOTOR4_PIN           PC6
#define UART1_TX_PIN         PB6
#define UART2_TX_PIN         PA2
#define UART1_RX_PIN         PB7
#define UART2_RX_PIN         PA3
#define I2C1_SCL_PIN         PB10
#define I2C1_SDA_PIN         PB11
#define LED0_PIN             PB2
#define LED1_PIN             PB1
#define SPI1_SCK_PIN         PA5
#define SPI3_SCK_PIN         PC10
#define SPI1_SDI_PIN         PA6
#define SPI3_SDI_PIN         PC11
#define SPI1_SDO_PIN         PA7
#define SPI3_SDO_PIN         PC12
#define ADC_VBAT_PIN         PC0
#define FLASH_CS_PIN         PA15
#define GYRO_1_EXTI_PIN      PC4
#define GYRO_1_CS_PIN        PA4
#define USB_DETECT_PIN       PA9

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, MOTOR1_PIN , 1,  1) \
    TIMER_PIN_MAP( 1, MOTOR2_PIN , 1,  0) \
    TIMER_PIN_MAP( 2, MOTOR3_PIN , 1,  0) \
    TIMER_PIN_MAP( 3, MOTOR4_PIN , 1,  1) \
    TIMER_PIN_MAP( 4, BEEPER_PIN , 1,  0) \
    TIMER_PIN_MAP(12, PB9 , 1, -1)



#define DEFAULT_BLACKBOX_DEVICE     BLACKBOX_DEVICE_FLASH

#define ADC_INSTANCE ADC1
#define ADC1_DMA_OPT        0

#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define BEEPER_PWM_HZ   4000

#define GYRO_1_ALIGN CW0_DEG
#define GYRO_1_ALIGN_YAW 0

#define BRUSHED_MOTORS
