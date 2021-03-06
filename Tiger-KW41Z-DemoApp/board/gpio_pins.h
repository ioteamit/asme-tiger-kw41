/*
 * Copyright (c) 2013-2015, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef __FSL_GPIO_PINS_H__
#define __FSL_GPIO_PINS_H__

#include "GPIO_Adapter.h"

/*! @file */
/*!*/
/*! This file contains gpio pin definitions used by gpio peripheral driver.*/
/*! The enums in _gpio_pins map to the real gpio pin numbers defined in*/
/*! gpioPinLookupTable. And this might be different in different board.*/

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @brief gpio pin names.*/
/*!*/ 
/*! This should be defined according to board setting.*/

/* SPI Master Data Available Pin */
#define gSpiMasterDap_Port_d  gpioPort_B_c
#define gSpiMasterDap_Pin_d   1
/* SPI Slave Data Available Pin */
#define gSpiSlaveDap_Port_d   gpioPort_B_c
#define gSpiSlaveDap_Pin_d    1
/* I2C Master Data Available Pin */
#define gI2cMasterDap_Port_d  gpioPort_B_c
#define gI2cMasterDap_Pin_d   1
/* I2C Slave Data Available Pin */
#define gI2cSlaveDap_Port_d   gpioPort_B_c
#define gI2cSlaveDap_Pin_d    1

/* switch pins to be initialized by the low power component if the keyboard isn't enabled*/
/* 1<<n for sitchPins[n] */   
#define gLowPower_switchPinsToInitBitmap_d  ( 1<<1 | 1<<0 )
   
extern gpioInputPinConfig_t switchPins[];
extern gpioOutputPinConfig_t ledPins[];

#if VT_KW41Z_MENP
#if RGB_CLICK_ENABLE
extern gpioOutputPinConfig_t RGBPins[];
#endif /* RGB_CLICK_ENABLE */
#if RELAY_CLICK_ENABLE   
extern gpioOutputPinConfig_t realyPins[];
#endif /* RELAY_CLICK_ENABLE */
#endif /* VT_KW41Z_MENP */

extern gpioInputPinConfig_t   gCoexistence_RfDeny;
extern gpioOutputPinConfig_t  gCoexistence_RfActive;
extern gpioOutputPinConfig_t  gCoexistence_RfStatus;
#endif /* __FSL_GPIO_PINS_H__ */
