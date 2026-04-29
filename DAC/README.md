# DAC Experiment (STM32G431CBT6)

This module demonstrates basic Digital-to-Analog Conversion (DAC) using STM32.

---

## 🔹 Objective

To generate an analog voltage from a digital value using the internal DAC peripheral.

---

## 🔹 Features

* Uses DAC Channel 1
* 12-bit resolution output
* Constant analog voltage generation

---

## 🔹 Working

* The DAC is initialized using STM32 HAL.
* DAC channel is started using `HAL_DAC_Start`.
* A digital value (2048) is written using `HAL_DAC_SetValue`.
* The DAC converts this digital value into an analog voltage.

---

## 🔹 Output

For a 3.3V reference:

* Input: 2048
* Output: ~1.65V (mid-scale voltage)

---

## 🔹 Key Concepts

* Digital-to-Analog Conversion
* Resolution (12-bit DAC → 0–4095)
* Voltage scaling

---

## 🔹 Files

* `dac_basic.c` → DAC constant output implementation

---

## 🔹 Future Improvements

* Waveform generation using Timer
* DMA-based DAC output
* Signal generation (sine, triangle)

---

## 🔹 Note

This is a basic implementation. Advanced DAC applications involve timer-triggered and DMA-driven waveform generation.
