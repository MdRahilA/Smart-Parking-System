/* firmware/main.c
 * Smart Parking System – STM32L476RG Starter
 * Vehicle counting + fire detection demo
 */

#include "stm32l4xx_hal.h"
#include <stdio.h>

uint16_t vehicleCount = 0;
float temperature = 0.0f;

void SystemClock_Config(void);
void MX_GPIO_Init(void);
void MX_ADC1_Init(void);
void MX_I2C1_Init(void);
void OLED_ShowMessage(const char *msg);

int main(void)
{
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();
    MX_ADC1_Init();
    MX_I2C1_Init();

    OLED_ShowMessage("Smart Parking Ready");

    while (1)
    {
        // 🅰️ Demo placeholders (replace with real sensor logic)
        temperature += 0.1f;
        if (temperature > 45.0f)
            OLED_ShowMessage("🔥 Fire Alert!");

        if (vehicleCount < 15)
            OLED_ShowMessage("Can come more");
        else if (vehicleCount < 30)
            OLED_ShowMessage("Only few");
        else
            OLED_ShowMessage("Stop, no place");

        HAL_Delay(1000);
    }
}

void OLED_ShowMessage(const char *msg)
{
    printf("OLED: %s\n", msg);
}

/* Peripheral initialization stubs (auto-generated in CubeIDE later) */
void SystemClock_Config(void) {}
void MX_GPIO_Init(void) {}
void MX_ADC1_Init(void) {}
void MX_I2C1_Init(void) {}
