/*
 * gpio_driver.h
 *
 *  Created on: 25-Oct-2026
 *      Author: Anil Kumar S M
 */

#ifndef INC_GPIO_DRIVER_H_
#define INC_GPIO_DRIVER_H_

#include "main.h"

void GPIO_Driver_Toggle(GPIO_TypeDef *port, uint16_t pin);
void GPIO_Driver_Write(GPIO_TypeDef *port, uint16_t pin, GPIO_PinState state);

#endif /* INC_GPIO_DRIVER_H_ */
