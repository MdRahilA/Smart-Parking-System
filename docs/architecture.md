# Architecture Explanation – Smart Parking System

## 1. Overview
The Smart Parking System is an IoT-based embedded design centered around the **STM32L476RG microcontroller**, combining real-time vehicle counting and fire detection.

---

## 2. Functional Blocks
| Block | Description |
|--------|-------------|
| **Ultrasonic Sensor** | Detects vehicle presence at entry/exit gates. |
| **Temperature Sensor** | Monitors ambient temperature to detect potential fire. |
| **STM32L476RG MCU** | Processes sensor data, updates counters, and drives display/alerts. |
| **OLED Display (I²C)** | Shows vehicle count, slot availability, and warnings. |
| **Buzzer + LEDs** | Triggered during fire or “No Space” conditions. |
| **Power Supply** | 5V regulated DC for MCU and peripherals. |

---

## 3. Data Flow
1. **Ultrasonic sensor** → Detects car movement → MCU updates `vehicleCount`.  
2. **MCU logic** → Compares count to thresholds → Generates message.  
3. **Temperature sensor** → If `T > threshold`, triggers **fire alert**.  
4. **OLED** → Displays “Can come more” / “Only few” / “Stop, no place.”  
5. **Buzzer + LED** → Activate during alert conditions.  

---

## 4. Communication & Interfaces
- **I²C** → OLED Display  
- **ADC** → Temperature Sensor  
- **GPIO Trigger/Echo** → Ultrasonic Sensor  
- **GPIO Output** → LEDs and Buzzer  

---

## 5. Power & Safety
- Operates at 3.3V logic, powered by a 5V supply.  
- Low-power sleep mode supported for idle time.  
- Reverse polarity and overcurrent protection can be added externally.

---

## 6. Expansion Possibilities
- Wi-Fi or BLE module for remote monitoring  
- Cloud dashboard for parking analytics  
- Solar charging for outdoor deployment  
- Integration with mobile parking apps
