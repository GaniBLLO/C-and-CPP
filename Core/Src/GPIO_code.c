/*
 * GPIO.c
 *
 *  Created on: Dec 19, 2022
 *      Author: Sokolov EvgenII
 */
#include "GPIO_code.h"

void EXTI15_10_IRQHandler(void) {
	HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_10);
}

void GPIO_Init(void){
	MX_GPIO_Init();
}


static void MX_GPIO_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStruct = {0};
  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  //HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : LED_Pin */
  GPIO_InitStruct.Pin = GPIO_PIN_10;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
  //HAL_NVIC_EnableIRQ(EXT15_10_IRQn);
}

