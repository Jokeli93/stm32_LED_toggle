# STM32F407 LED Toggle – Bitwise vs Bitfield Control with SysTick Timing

This project demonstrates low-level LED control on the **STM32F407 Discovery board** using direct register access.

It compares two approaches for bit manipulation:

- Classic bitwise operations (AND, OR, XOR)
- Bitfield-based register structures

Additionally, the project implements a **SysTick-based delay** to replace inaccurate software delay loops.

---

## 📌 Project Goal

The goal of this project is to gain hands-on experience with:

- Register-level programming on STM32
- Bit manipulation techniques in Embedded C
- Cortex-M SysTick timer usage
- Writing cleaner and more maintainable low-level code

This project focuses on understanding *how the hardware works underneath HAL libraries*.

---

## 🛠️ Hardware

- STM32F407 Discovery Board
- Onboard LEDs (PD12)
- ST-Link debugger (onboard)

---

## ⚙️ Software

- STM32CubeIDE  
- Language: C  
- Bare-metal register access (no HAL functions for GPIO control)

---

## ✨ Features

- Direct register-level GPIO control  
- LED toggle using bitwise operations (AND, OR, XOR)  
- Bitfield-based register mapping for cleaner access  
- SysTick-based millisecond delay implementation  
- Comparison between software delays and hardware timer delays

---

## ⏱️ Timing Implementation

### Initial Approach
A simple `for`-loop was used to generate visible delays.

Drawbacks:

- CPU blocking  
- Compiler dependent  
- Not time-accurate  
- Not suitable for scalable firmware

---

### Improved Approach – SysTick Timer

The delay mechanism was redesigned using the **Cortex-M SysTick timer**.

Benefits:

- Hardware-based timing  
- Accurate and predictable delays  
- Industry-standard approach  
- Portable across Cortex-M microcontrollers  

---

## 📚 What I Learned

- GPIO register-level programming  
- Bitwise logic in embedded systems  
- Advantages and trade-offs of bitfields  
- Cortex-M SysTick timer fundamentals  
- Hardware-based timing vs software delays  
- Difference between core peripherals and MCU peripherals  
- Reading and using reference manuals

---

## 🔍 Key Insight

Bitfields: It can make code more readable and intuitive when accessing individual bits, but they must be used carefully due to:

- Compiler dependency
- Memory layout considerations
- Portability concerns

SysTick: It is part of the **Cortex-M core**, not an STM32-specific peripheral.  
This makes SysTick-based solutions portable across different Cortex-M devices.

---

## 📂 Project Structure

Src/  
→ Application source code (main logic, LED control, SysTick delay)

Startup/  
→ MCU startup files and linker-related configuration

Note:  
Build files and IDE-specific files are excluded via `.gitignore` to keep the repository clean and focused on relevant source code.

## 🚀 How to Run

1. Clone this repository
2. Open the project in STM32CubeIDE
3. Build the project
4. Flash to STM32F407 Discovery board
5. Observe LED behavior
6. Don't forget to configure the FPU in the project settings before build

---

## 👤 Author
Joel Kevin Likane

Focused on STM32 & Embedded C/C++