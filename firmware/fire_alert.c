/* Temperature sensor reading + fire detection */

#include "stm32l4xx_hal.h"
#include <stdio.h>

extern float temperature;

uint8_t FireAlert_Check(void) {
    if (temperature > 45.0f) {
        printf("Buzzer ON: Fire detected!\n");
        return 1;
    }
    return 0;
}
