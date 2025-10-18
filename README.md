<div align="center">

# 🚗 Smart Parking System  
### IoT-Based Vehicle Counting and Fire Detection using STM32L476RG

</div>

![GitHub repo size](https://img.shields.io/github/repo-size/MdRahilA/Smart-Parking-System?color=brightgreen)
![GitHub license](https://img.shields.io/github/license/MdRahilA/Smart-Parking-System)

![Made with STM32](https://img.shields.io/badge/Made%20with-STM32-blue)
![IoT Project](https://img.shields.io/badge/Category-IoT-lightgrey)

![GitHub last commit](https://img.shields.io/github/last-commit/MdRahilA/Smart-Parking-System)
![GitHub commit activity](https://img.shields.io/github/commit-activity/m/MdRahilA/Smart-Parking-System)
![GitHub language count](https://img.shields.io/github/languages/count/MdRahilA/Smart-Parking-System)
![Top language](https://img.shields.io/github/languages/top/MdRahilA/Smart-Parking-System)
![GitHub contributors](https://img.shields.io/github/contributors/MdRahilA/Smart-Parking-System)

---

## 📘 Overview
The **Smart Parking System** is an IoT-based solution built on the **STM32L476RG microcontroller**, designed to monitor parking-lot occupancy, detect fire hazards, and display live status updates.  
It improves both **safety** and **parking-space utilization** through automated sensing and feedback.

---

## Architecture

## 🧱 System Block Diagram
![System Block Diagram](assets/daigram/system_block_diagram.png)

## 🔄 Logic Flowchart
![Logic Flowchart](assets/daigram/logic_flowchart.png)

## 📸 Project Build and Testing
![Team Working on STM32 Prototype](assets/daigram/working.png)



## ⚙️ Features
- 🚗 **Automatic Vehicle Counting** – Ultrasonic sensors detect entry and exit.  
- 🖥️ **Real-time OLED Display** – Shows current availability and system alerts.  
- 🔥 **Fire Detection** – Temperature sensor triggers alarm on high heat.  
- 🔊 **Buzzer + LEDs** – Alert signals for fire or full-capacity events.  
- 🔋 **Energy Efficient** – Powered by STM32L4’s low-power architecture.  
- 🧠 **Smart Messages:**
  - “Can come more” (< 15 cars)  
  - “Only few” (< 30 cars)  
  - “Stop, no place” (≥ 50 cars)

---
---

## 🧩 Components Used
| Component | Description |
|------------|-------------|
| STM32L476RG | Main MCU – handles sensors and display |
| Ultrasonic Sensor | Vehicle entry/exit detection |
| Temperature Sensor | Fire and heat monitoring |
| OLED Display | Shows slot status and warnings |
| Buzzer & LEDs | Visual and audible alerts |
| Power Supply | 5 V DC regulated |
| Jumper Wires | Connections and interfacing |

---

## ⚙️ Working Principle
- The **ultrasonic sensor** detects vehicles at entry/exit gates.  
- Vehicle count is incremented or decremented accordingly.  
- The **OLED display** shows the current count and smart messages.  
- The **temperature sensor** continuously monitors for high heat.  
- When the threshold is crossed, a **fire alert** is activated via buzzer and display warning.

---

## 🔧 Firmware Overview
- Written in **C (HAL/LL drivers)** using **STM32CubeIDE**  
- Core modules:
  - `main.c` – initialization and main loop  
  - `vehicle_count.c` – ultrasonic sensor logic  
  - `display.c` – OLED I²C interface  
  - `fire_alert.c` – temperature sensing and alarm control
  - 


  ---

## 📸 Project Demo & Results

<table>
<tr>
<td align="center">
  <img src="assets/team_working_on_stm32.jpg" width="400"/><br>
  <sub><b>Development Setup — STM32 Programming</b></sub>
</td>
<td align="center">
  <img src="assets/system_block_diagram.png" width="400"/><br>
  <sub><b>System Architecture Overview</b></sub>
</td>
</tr>
<tr>
<td align="center">
  <img src="assets/logic_flowchart.png" width="400"/><br>
  <sub><b>System Logic Flow</b></sub>
</td>
<td align="center">
  <img src="assets/team_working_on_stm32.jpg" width="400"/><br>
  <sub><b>Testing Phase — OLED & Sensor Integration</b></sub>
</td>
</tr>
</table>

---

## 🧪 Key Observations
- Counting accuracy: **98%+** in controlled testing.  
- Fire alert threshold: **Triggered at 45°C.**  
- OLED messages update dynamically every second.  
- System power draw: **< 80 mA average.**


---

## 📸 Circuit Diagram & Setup
| Prototype | Circuit Diagram |
|:----------:|:----------------:|
## 🚀 Future Scope
- 📱 Integration with smartphone parking apps  
- ☁️ Cloud-based data logging of vehicle flow  
- 🔋 Solar-powered, wireless sensor nodes  

---

## 🧰 Tools & Software
- STM32CubeIDE  
- Proteus / TinkerCAD (simulation)  
- OLED I²C Library  
- HAL/LL Peripheral Drivers  
