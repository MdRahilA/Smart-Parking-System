# Wiring & Pin Mapping — Smart Parking System (STM32L476RG)

> Board assumed: **STM32L476RG Nucleo** (update if yours differs)

## 🧩 Sensors & Peripherals

| Module                | Signal(s)      | STM32 Pin | Notes |
|----------------------|----------------|-----------|------|
| **Ultrasonic (HC-SR04)** | TRIG →        | **PA8**   | GPIO output |
|                      | ECHO ←         | **PB6**   | GPIO input w/ interrupt or timer capture |
| **Temperature (LM35/NTC/DS18B20)** | ANALOG ←   | **PA0 (ADC1_IN5)** | Use your chosen sensor; adjust code |
| **OLED 0.96” (I²C)** | SDA ↔          | **PB9**   | I²C1 SDA (external pull-ups if needed) |
|                      | SCL ↔          | **PB8**   | I²C1 SCL |
| **Buzzer**           | BUZZER →       | **PA5**   | GPIO (or TIM PWM for tone) |
| **LED (Status)**     | LED →          | **PA6**   | GPIO output |

> If you use different pins, update this table **and** your CubeMX/CubeIDE configuration.

---

## 🔧 Electrical Notes
- Logic level: **3.3V** (do **not** feed 5V into MCU pins).
- HC-SR04 ECHO may output 5V — use a level shifter or resistor divider (e.g., 10k/15k).
- OLED I²C address commonly `0x3C` (confirm with datasheet).

---

## ⚙️ Thresholds & Messages

```c
// In firmware (adjust as needed)
#define FIRE_TEMP_C          45.0f      // °C – fire alert threshold
#define MSG_CAN_COME_MORE    15         // cars
#define MSG_ONLY_FEW         30         // cars
#define MSG_STOP_NO_PLACE    50         // cars (cap)
