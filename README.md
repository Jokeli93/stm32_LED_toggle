# STM32F407 LED Toggle – Bitwise vs Bitfield Control

This project demonstrates LED control on the STM32F407G Discovery board using two different approaches:

1. Classic bitwise operations (AND, OR, XOR)
2. Bitfield structures for register access

The goal is to compare readability, usability, and implementation differences between the two methods.

---

## 📌 Project Goal

To explore low-level GPIO control on STM32 by:

- Manually controlling register bits
- Comparing bitwise operations with C bitfields
- Writing cleaner and more maintainable embedded C code

---

## 🛠️ Hardware

- STM32F407 Discovery Board
- Onboard LEDs (PD12)
- ST-Link debugger (onboard)

---

## ⚙️ Software

- STM32CubeIDE
- Language: C
- STM32 HAL / Direct Register Access

---

## ✨ Features

### Version 1 – Bitwise Operations
- LED control using:
  - AND masks
  - OR masks
  - XOR toggling
- Direct register manipulation

### Version 2 – Bitfield Structures
- GPIO register mapping with bitfields
- Easier bit access
- Improved code readability
- Structured register control

---

## 🚀 How to Run

1. Clone this repository
2. Open the project in STM32CubeIDE
3. Build the project
4. Flash to STM32F407 Discovery board
5. Observe LED behavior
6. Don't forget to configure the FPU in the project settings before build

---

## 📚 What I Learned

- GPIO register-level programming
- Bitwise logic in embedded systems
- Advantages and trade-offs of bitfields
- Cleaner register abstraction techniques
- STM32 debugging workflow

---

## 🔍 Key Insight

Bitfields can make code more readable and intuitive when accessing individual bits, but they must be used carefully due to:

- Compiler dependency
- Memory layout considerations
- Portability concerns

---

## 📂 Project Structure

Src/  
→ Application source code (main logic, LED control, bitwise & bitfield implementation)

Startup/  
→ MCU startup files and linker-related configuration

Note:  
This repository contains only the relevant source files.  
Build artifacts and IDE-specific files are excluded using .gitignore.

## 👤 Author
Joel Kevin Likane