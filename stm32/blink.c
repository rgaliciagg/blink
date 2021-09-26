  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {

	// Toggle the LED
	HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);

	// Wait for 500 ms
	HAL_Delay(500);

	// Rinse and repeat :)

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
  //https://stm32world.com/wiki/STM32_LED_Blink