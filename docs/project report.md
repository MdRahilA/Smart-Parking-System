# Smart Parking System — Project Report

## 1) Abstract
An IoT-based parking solution using **STM32L476RG** that counts vehicles with an ultrasonic sensor, displays live availability on an **OLED**, and triggers a fire **alarm** using a temperature sensor. Status messages guide drivers: **“Can come more”**, **“Only few”**, **“Stop, no place.”**

## 2) Problem Statement
Urban parking areas suffer from congestion and safety issues. Manual monitoring is inefficient and slow in emergencies.

## 3) Objectives
- Automatic entry/exit vehicle counting
- Real-time slot availability on OLED
- Fire detection + audible/visual alert
- Low-power operation using STM32L4

## 4) System Overview
**STM32L476RG** reads:
- Ultrasonic (vehicle presence)  
- Temperature sensor (fire hazard)  
Outputs:
- OLED (count + message)  
- Buzzer & LEDs (alerts)

## 5) Hardware Components
- STM32L476RG MCU  
- Ultrasonic sensor (HC-SR04 or equivalent)  
- Temperature sensor (LM35/NTC/DS18B20)  
- 0.96" OLED (I²C)  
- Buzzer, LEDs, 5V power

## 6) Firmware Modules
- `main.c` — init + main loop  
- `vehicle_count.c` — trigger/echo timing, up/down counter  
- `display.c` — I²C OLED printing helpers  
- `fire_alert.c` — temperature read + threshold alarm  

## 7) Algorithm (High Level)
1. Read ultrasonic distance → detect crossing at entry/exit  
2. Update `vehicleCount` with debouncing  
3. Read temperature → if `T >= THRESH` → buzzer ON + “FIRE ALERT”  
4. Select message:  
   - `< 15`: “Can come more”  
   - `< 30`: “Only few”  
   - `>= 50`: “Stop, no place”  
5. Render count + message on OLED

## 8) Results (Prototype)
- Stable counting at doorway speeds  
- OLED status clear and visible  
- Fire alarm triggers reliably above threshold

## 9) Future Scope
- Mobile app integration (BLE/Wi-Fi)  
- Cloud logging and analytics  
- Solar-powered wireless nodes

## 10) Credits
Author: **Mohammed Adnan** | AI & Embedded Systems | AI Decoded
