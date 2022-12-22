/*
 * GPIO.c
 *
 *  Created on: Dec 19, 2022
 *      Author: Sokolov EvgenII
 */
#include "GPIO_code.h"
#include "stm32f1xx_it.h"

int tiks = 0;

void EXTI15_10_IRQHandler(void) {
	HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_8);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin){
	if(tiks == 100){
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_10);
		tiks = 0;
	}
	else
		tiks++;
}
void GPIO_Init(void){
	MX_GPIO_Init();
}


static void MX_GPIO_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStruct = {0};
  __HAL_RCC_GPIOA_CLK_ENABLE();

  GPIO_InitStruct.Pin = GPIO_PIN_8;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING;//
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = GPIO_PIN_9;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = GPIO_PIN_10;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;//
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);
}

