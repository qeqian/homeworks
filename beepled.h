#ifndef __BEEPLED_H
#define __BEEPLED_H

#include "gpio.h"
#include "main.h"


#define BEEP_PIN GPIO_PIN_8


#define BEEP_ON HAL_GPIO_WritePin(GPIOA, BEEP_PIN, GPIO_PIN_SET)
#define BEEP_OFF HAL_GPIO_WritePin(GPIOA, BEEP_PIN, GPIO_PIN_RESET)

void BEEP_setup(void);
void WATERLED_setup(void);

#endif