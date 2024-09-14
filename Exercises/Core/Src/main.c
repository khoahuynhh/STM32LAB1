/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.c
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
 * @brief  The application entry point.
 * @retval int
 */
int main(void) {
	/* USER CODE BEGIN 1 */

	/* USER CODE END 1 */

	/* MCU Configuration--------------------------------------------------------*/

	/* Reset of all peripherals, Initializes the Flash interface and the Systick. */
	HAL_Init();

	/* USER CODE BEGIN Init */

	/* USER CODE END Init */

	/* Configure the system clock */
	SystemClock_Config();

	/* USER CODE BEGIN SysInit */

	/* USER CODE END SysInit */

	/* Initialize all configured peripherals */
	MX_GPIO_Init();
	/* USER CODE BEGIN 2 */

	/* USER CODE END 2 */

	/* Infinite loop */
	/* USER CODE BEGIN WHILE */
	void set_LEDS(GPIO_PinState led_1, GPIO_PinState led_2, GPIO_PinState led_3,
			GPIO_PinState led_4, GPIO_PinState led_5, GPIO_PinState led_6,
			GPIO_PinState led_7, GPIO_PinState led_8, GPIO_PinState led_9,
			GPIO_PinState led_10, GPIO_PinState led_11, GPIO_PinState led_12) {
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, led_1);
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, led_2);
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, led_3);
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, led_4);
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, led_5);
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, led_6);
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, led_7);
		HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, led_8);
		HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, led_9);
		HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, led_10);
		HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, led_11);
		HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, led_12);
	}
	void display7SEG_x(GPIO_PinState seg_0, GPIO_PinState seg_1,
			GPIO_PinState seg_2, GPIO_PinState seg_3, GPIO_PinState seg_4,
			GPIO_PinState seg_5, GPIO_PinState seg_6) {
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, seg_0);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, seg_1);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, seg_2);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, seg_3);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, seg_4);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, seg_5);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, seg_6);
	}
	void display7SEG_y(GPIO_PinState seg_7, GPIO_PinState seg_8,
			GPIO_PinState seg_9, GPIO_PinState seg_10, GPIO_PinState seg_11,
			GPIO_PinState seg_12, GPIO_PinState seg_13) {
		HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, seg_7);
		HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, seg_8);
		HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, seg_9);
		HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, seg_10);
		HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, seg_11);
		HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, seg_12);
		HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, seg_13);
	}
	int cnt = 10;
	while (1) {
		switch (cnt) {
		case 10:
			set_LEDS(1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0);
			display7SEG_x(0, 0, 0, 0, 1, 1, 0);
			display7SEG_y(0, 1, 0, 0, 1, 0, 0);
			break;
		case 9:
			display7SEG_x(0, 0, 1, 0, 0, 1, 0);
			display7SEG_y(1, 0, 0, 1, 1, 0, 0);
			break;
		case 8:
			display7SEG_x(0, 0, 1, 1, 1, 1, 1);
			display7SEG_y(0, 0, 0, 0, 1, 1, 0);
			break;
		case 7:
			set_LEDS(0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1);
			display7SEG_x(0, 0, 0, 0, 0, 0, 1);
			display7SEG_y(0, 0, 1, 0, 0, 1, 0);
			break;
		case 6:
			display7SEG_x(0, 0, 1, 0, 0, 1, 0);
			display7SEG_y(0, 0, 1, 1, 1, 1, 1);
			break;
		case 5:
			set_LEDS(0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0);
			display7SEG_x(0, 0, 1, 1, 1, 1);
			display7SEG_y(0, 0, 0, 0, 0, 1);
			break;
		case 4:
			display7SEG_x(0, 0, 0, 0, 0, 0, 1);
			display7SEG_y(0, 0, 0, 0, 1, 1, 0);
			break;
		case 3:
			display7SEG_x(0, 0, 0, 0, 1, 1, 0);
			display7SEG_y(0, 0, 1, 0, 0, 1, 0);
			break;
		case 2:
			set_LEDS(0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0);
			display7SEG_x()
			break;
		case 1:
			cnt = 11;
			break;
		default:
			break;
		}
		cnt--;
		HAL_Delay(1000);
		/* USER CODE END WHILE */

		/* USER CODE BEGIN 3 */
	}
	/* USER CODE END 3 */
}

/**
 * @brief System Clock Configuration
 * @retval None
 */
void SystemClock_Config(void) {
	RCC_OscInitTypeDef RCC_OscInitStruct = { 0 };
	RCC_ClkInitTypeDef RCC_ClkInitStruct = { 0 };

	/** Initializes the RCC Oscillators according to the specified parameters
	 * in the RCC_OscInitTypeDef structure.
	 */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
	RCC_OscInitStruct.HSIState = RCC_HSI_ON;
	RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
		Error_Handler();
	}
	/** Initializes the CPU, AHB and APB buses clocks
	 */
	RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
			| RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK) {
		Error_Handler();
	}
}

/**
 * @brief GPIO Initialization Function
 * @param None
 * @retval None
 */
static void MX_GPIO_Init(void) {
	GPIO_InitTypeDef GPIO_InitStruct = { 0 };

	/* GPIO Ports Clock Enable */
	__HAL_RCC_GPIOA_CLK_ENABLE();
	__HAL_RCC_GPIOB_CLK_ENABLE();

	/*Configure GPIO pin Output Level */
	HAL_GPIO_WritePin(GPIOA,
			SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin
					| SEG_5_Pin | SEG_6_Pin | SEG_7_Pin | SEG_8_Pin | SEG_9_Pin
					| SEG_10_Pin | SEG_11_Pin | SEG_12_Pin | SEG_13_Pin,
			GPIO_PIN_RESET);

	/*Configure GPIO pin Output Level */
	HAL_GPIO_WritePin(GPIOB,
			LED_1_Pin | LED_2_Pin | LED_3_Pin | LED_11_Pin | LED_12_Pin
					| LED_4_Pin | LED_5_Pin | LED_6_Pin | LED_7_Pin | LED_8_Pin
					| LED_9_Pin | LED_10_Pin, GPIO_PIN_RESET);

	/*Configure GPIO pins : SEG_0_Pin SEG_1_Pin SEG_2_Pin SEG_3_Pin
	 SEG_4_Pin SEG_5_Pin SEG_6_Pin SEG_7_Pin
	 SEG_8_Pin SEG_9_Pin SEG_10_Pin SEG_11_Pin
	 SEG_12_Pin SEG_13_Pin */
	GPIO_InitStruct.Pin = SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin
			| SEG_4_Pin | SEG_5_Pin | SEG_6_Pin | SEG_7_Pin | SEG_8_Pin
			| SEG_9_Pin | SEG_10_Pin | SEG_11_Pin | SEG_12_Pin | SEG_13_Pin;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

	/*Configure GPIO pins : LED_1_Pin LED_2_Pin LED_3_Pin LED_11_Pin
	 LED_12_Pin LED_4_Pin LED_5_Pin LED_6_Pin
	 LED_7_Pin LED_8_Pin LED_9_Pin LED_10_Pin */
	GPIO_InitStruct.Pin = LED_1_Pin | LED_2_Pin | LED_3_Pin | LED_11_Pin
			| LED_12_Pin | LED_4_Pin | LED_5_Pin | LED_6_Pin | LED_7_Pin
			| LED_8_Pin | LED_9_Pin | LED_10_Pin;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
 * @brief  This function is executed in case of error occurrence.
 * @retval None
 */
void Error_Handler(void) {
	/* USER CODE BEGIN Error_Handler_Debug */
	/* User can add his own implementation to report the HAL error return state */
	__disable_irq();
	while (1) {
	}
	/* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
