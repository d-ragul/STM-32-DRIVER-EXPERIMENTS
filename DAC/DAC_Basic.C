#include "main.h"

DAC_HandleTypeDef hdac1;

int main(void)
{
    HAL_Init();
    SystemClock_Config();

    MX_GPIO_Init();
    MX_DAC1_Init();

    // Start DAC channel
    HAL_DAC_Start(&hdac1, DAC_CHANNEL_1);

    // Set constant output (mid-scale)
    HAL_DAC_SetValue(&hdac1, DAC_CHANNEL_1, DAC_ALIGN_12B_R, 2048);

    while (1)
    {
        // Output remains constant
    }
}