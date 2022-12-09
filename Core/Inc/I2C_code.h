/*
 * I2C_code.h
 *
 *  Created on: Dec 8, 2022
 *      Author: Sokolov EvgenII
 */

#include "stm32f1xx_hal.h"

#ifndef I2C_FOLDER_I2C_CODE_H_
#define I2C_FOLDER_I2C_CODE_H_

void I2C_func(void);
static void MX_I2C1_Init(void);
HAL_StatusTypeDef write_data_to_LCD(uint8_t* word, uint16_t LenWord);
HAL_StatusTypeDef read_data_on_LCD(uint8_t* buffer, uint16_t LenWord);

void Error_Handler(void);

#endif
