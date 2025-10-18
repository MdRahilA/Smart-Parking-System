/* OLED display helpers */

#include "stm32l4xx_hal.h"
#include <stdio.h>

extern uint16_t vehicleCount;
extern float temperature;

void Display_Update(void) {
    if (temperature > 45.0f)
        printf("OLED: 🔥 FIRE ALERT! T=%.1f\n", temperature);
    else if (vehicleCount < 15)
        printf("OLED: Can come more (%d)\n", vehicleCount);
    else if (vehicleCount < 30)
        printf("OLED: Only few (%d)\n", vehicleCount);
    else
        printf("OLED: Stop, no place (%d)\n", vehicleCount);
}
