# STM32 Driver Experiments – STM32G431CBT6

This repository contains low-level and HAL-based driver experiments using the **STM32G431CBT6 microcontroller**.
The goal of this project is to build strong fundamentals in embedded systems by implementing peripheral drivers from scratch and understanding their internal working.

---

## 🔹 Microcontroller Used

* **MCU:** STM32G431CBT6
* **Core:** ARM Cortex-M4 (with FPU)
* **Clock Speed:** Up to 170 MHz
* **Flash Memory:** 128 KB
* **SRAM:** 32 KB

---

## 🔹 Why STM32G431?

The STM32G4 series is designed for:

* High-performance embedded control
* Mixed-signal applications
* Power electronics and motor control

This makes it highly relevant for:

* Embedded Systems roles
* Power Electronics applications
* Real-time control systems

---

## 🔹 Project Objective

* Understand peripheral-level programming
* Move from HAL → Register-level control
* Build industry-relevant embedded skills
* Prepare for core embedded job roles

---

## 🔹 Implemented Modules

### ✅ UART (Universal Asynchronous Receiver Transmitter)

* Basic transmit functionality
* Serial communication testing using terminal
* Understanding baud rate configuration

*(More modules will be added progressively)*

---

## 🔹 Tools & Software

* STM32CubeIDE
* STM32CubeMX
* Embedded C
* Serial Monitor (PuTTY / Arduino Serial Monitor)

---

## 🔹 Project Structure

```
stm32-driver-experiments/
│
├── uart/
│   └── uart_basic.c
│
├── README.md
```

---

## 🔹 Learning Approach

This repository follows a structured learning approach:

1. Understand peripheral theory
2. Implement using HAL
3. Re-implement using registers
4. Optimize and test

---

## 🔹 Future Work

* GPIO (input/output handling)
* SPI Communication
* I2C Communication
* Interrupts and NVIC
* Timer-based applications
* DMA

---

## 🔹 Author

**Ragul D**
VLSI And Embedded Systems  Engineering

---

## 🔹 Note

This repository is part of my preparation for embedded systems roles and focuses on practical, industry-relevant skills rather than only academic understanding.
datasheet for reference https://www.st.com/resource/en/datasheet/DM00507199.pdf
