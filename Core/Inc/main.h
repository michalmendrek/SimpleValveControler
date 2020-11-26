/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ADDR_0_Pin GPIO_PIN_13
#define ADDR_0_GPIO_Port GPIOC
#define ADDR_1_Pin GPIO_PIN_14
#define ADDR_1_GPIO_Port GPIOC
#define ADDR_2_Pin GPIO_PIN_15
#define ADDR_2_GPIO_Port GPIOC
#define FAN_PWM_Pin GPIO_PIN_0
#define FAN_PWM_GPIO_Port GPIOA
#define FAN_TACHO_Pin GPIO_PIN_1
#define FAN_TACHO_GPIO_Port GPIOA
#define LEVEL_IN_Pin GPIO_PIN_2
#define LEVEL_IN_GPIO_Port GPIOA
#define OUT_1_Pin GPIO_PIN_0
#define OUT_1_GPIO_Port GPIOB
#define OUT_2_Pin GPIO_PIN_1
#define OUT_2_GPIO_Port GPIOB
#define OUT_3_Pin GPIO_PIN_2
#define OUT_3_GPIO_Port GPIOB
#define OUT_4_Pin GPIO_PIN_10
#define OUT_4_GPIO_Port GPIOB
#define OUT_5_Pin GPIO_PIN_11
#define OUT_5_GPIO_Port GPIOB
#define LED_1_Pin GPIO_PIN_11
#define LED_1_GPIO_Port GPIOA
#define A_RDY2_Pin GPIO_PIN_6
#define A_RDY2_GPIO_Port GPIOB
#define A_RDY1_Pin GPIO_PIN_7
#define A_RDY1_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
