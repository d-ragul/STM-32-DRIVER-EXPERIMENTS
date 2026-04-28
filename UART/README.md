# UART Experiment (STM32G431CBT6)

This folder contains basic UART communication experiments using STM32.

---

## 🔹 Objective

To understand how serial communication works between a microcontroller and a computer using UART.

---

## 🔹 Features

* UART configured at 115200 baud rate
* Blocking receive using HAL_UART_Receive
* Echo transmission using HAL_UART_Transmit
* Simple character-based communication

---

## 🔹 Working

* Data is sent from PC (Serial Monitor / PuTTY)
* STM32 receives data byte-by-byte
* The same data is transmitted back (Echo)

---

## 🔹 Files

* `UART_Basic.C` → UART echo implementation
* `UART.txt` → Explanation of experiment

---

## 🔹 Key Concepts

* UART TX/RX communication
* Blocking mode communication
* Serial debugging basics

---

## 🔹 Output

When a character is sent from the terminal, the same character is received back.

Example:
Input → A
Output → A

---

## 🔹 Future Improvements

* Interrupt-based UART
* DMA-based UART
* String communication
