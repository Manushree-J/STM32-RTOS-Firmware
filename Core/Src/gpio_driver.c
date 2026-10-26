/*
 * gpio_driver.c
 *
 *  Created on: 25-Oct-2026
 *      Author: Anil Kumar S M
 */


#include "gpio_driver.h"

void GPIO_Driver_Toggle(GPIO_TypeDef *port, uint16_t pin)
{
    HAL_GPIO_TogglePin(port, pin);
}

void GPIO_Driver_Write(GPIO_TypeDef *port, uint16_t pin, GPIO_PinState state)
{
    HAL_GPIO_WritePin(port, pin, state);
}

