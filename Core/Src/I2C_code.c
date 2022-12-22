/*
 * I2C_code.c
 *
 *  Created on: Dec 8, 2022
 *      Author: Sokolov EvgenII
 */
#include "I2C_code.h"
#define I2C_ADDRESS_WRITE (0x40 << 1)
#define I2C_ADDRESS_READ (0x41 << 1)

I2C_HandleTypeDef hi2c1;

void I2C_func(void){
	MX_I2C1_Init();
}

static void MX_I2C1_Init(void){

  GPIO_InitTypeDef GPIO_InitStruct;
  __HAL_RCC_I2C1_CLK_ENABLE();

  hi2c1.Instance = I2C1;
  hi2c1.Init.ClockSpeed = 100000;
  hi2c1.Init.DutyCycle = I2C_DUTYCYCLE_2;
  hi2c1.Init.OwnAddress1 = 0x0;
  hi2c1.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
  hi2c1.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
  hi2c1.Init.OwnAddress2 = 0;
  hi2c1.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
  hi2c1.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;

  GPIO_InitStruct.Pin = GPIO_PIN_8 | GPIO_PIN_9;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_OD;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);


  if (HAL_I2C_Init(&hi2c1) != HAL_OK)
  {
    Error_Handler();
  }
  HAL_I2C_Init(&hi2c1);
}


HAL_StatusTypeDef write_data_to_LCD(uint8_t* word, uint16_t LenWord){
	HAL_StatusTypeDef returnValue;
	return returnValue = HAL_I2C_Master_Transmit(&hi2c1,I2C_ADDRESS_WRITE, word, LenWord, HAL_MAX_DELAY);
}


HAL_StatusTypeDef read_data_on_LCD(uint8_t* buffer, uint16_t LenWord){
	HAL_StatusTypeDef returnValue;
	return returnValue = HAL_I2C_Master_Receive(&hi2c1,I2C_ADDRESS_READ, buffer, LenWord, HAL_MAX_DELAY);;
}


void Error_Handler(void)
{
  __disable_irq();
  while (1)
  {

  }
}
