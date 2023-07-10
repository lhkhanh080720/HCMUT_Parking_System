/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

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
#define  OpenOut()           htim2.Instance->CCR1 = 118;
#define  OpenIn()            htim2.Instance->CCR2 = 30;
#define  CloseOut()          htim2.Instance->CCR1 = 65;
#define  CloseIn()           htim2.Instance->CCR2 = 80;

typedef enum {IN, OUT}       status_t;

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
void Buzzer_Announ(uint32_t time);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SPI1_SS_1_Pin GPIO_PIN_2
#define SPI1_SS_1_GPIO_Port GPIOE
#define SPI1_RST_1_Pin GPIO_PIN_3
#define SPI1_RST_1_GPIO_Port GPIOE
#define BUTTON_IN_Pin GPIO_PIN_1
#define BUTTON_IN_GPIO_Port GPIOC
#define BUTTON_IN_EXTI_IRQn EXTI1_IRQn
#define BUTTON_OUT_Pin GPIO_PIN_2
#define BUTTON_OUT_GPIO_Port GPIOC
#define BUTTON_OUT_EXTI_IRQn EXTI2_IRQn
#define SPI1_SS_Pin GPIO_PIN_2
#define SPI1_SS_GPIO_Port GPIOA
#define SPI1_RST_Pin GPIO_PIN_3
#define SPI1_RST_GPIO_Port GPIOA
#define BUTTON_RST_Pin GPIO_PIN_5
#define BUTTON_RST_GPIO_Port GPIOC
#define BUTTON_RST_EXTI_IRQn EXTI9_5_IRQn
#define SPI2_SS_Pin GPIO_PIN_10
#define SPI2_SS_GPIO_Port GPIOD
#define SENSOR_OUT_Pin GPIO_PIN_10
#define SENSOR_OUT_GPIO_Port GPIOA
#define SENSOR_OUT_EXTI_IRQn EXTI15_10_IRQn
#define SENSOR_IN_Pin GPIO_PIN_15
#define SENSOR_IN_GPIO_Port GPIOA
#define SENSOR_IN_EXTI_IRQn EXTI15_10_IRQn
#define BUZZER_Pin GPIO_PIN_5
#define BUZZER_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
