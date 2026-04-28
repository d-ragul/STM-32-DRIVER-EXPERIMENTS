#include "main.h"
#include <string.h>

UART_HandleTypeDef huart1;

char rx_data;

int main(void)
{
    HAL_Init();
    SystemClock_Config();

    MX_GPIO_Init();
    MX_USART1_UART_Init();

    // Send initial message
    char msg[] = "UART Ready\r\n";
    HAL_UART_Transmit(&huart1, (uint8_t*)msg, strlen(msg), HAL_MAX_DELAY);

    while (1)
    {
        // Receive 1 byte
        HAL_UART_Receive(&huart1, (uint8_t*)&rx_data, 1, HAL_MAX_DELAY);

        // Echo back received data
        HAL_UART_Transmit(&huart1, (uint8_t*)&rx_data, 1, HAL_MAX_DELAY);
    }
}