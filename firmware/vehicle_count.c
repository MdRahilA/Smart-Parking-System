/* Handles ultrasonic sensor–based vehicle counting */

#include "stm32l4xx_hal.h"

extern uint16_t vehicleCount;

void VehicleCount_Update(uint8_t entryDetected, uint8_t exitDetected) {
    if (entryDetected && vehicleCount < 50) vehicleCount++;
    if (exitDetected && vehicleCount > 0) vehicleCount--;
}
