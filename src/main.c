// main.c
#include <stdint.h>
#include "stm32f4xx.h"  // Replace with real register definitions later

void delay(volatile uint32_t time)
{
    while (time--);
}

int main(void)
{
    ADC_Init();

    while (1)
    {
        uint16_t adc_value = ADC_Read();
        delay(100000);
    }
}
