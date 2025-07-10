# ADC Driver Development Log

Welcome to the ADC Driver development log! This document tracks progress, decisions, technical notes, and issues during the ADC learning and driver development journey.

---

## Table of Contents

- [Project Overview](#project-overview)
- [Development Milestones](#development-milestones)
- [Step-by-Step Progress](#step-by-step-progress)
- [Pending Issues / TODOs](#pending-issues--todos)
- [References](#references)

---

## Project Overview

**Goal:**  
Develop a deep understanding of ADC hardware, theory, and implement a register-level ADC driver from scratch.

**Target Hardware:**  
- STM32F4 Nucleo (ordering soon)
- Practicing with C and theoretical preparation before hardware arrives

**Requirements:**  
- Understand ADC principles (resolution, sampling, voltage references)  
- Study STM32 ADC architecture and registers  
- Develop modular, reusable, bare-metal ADC driver  
- Document entire journey with challenges and solutions  

---

## Development Milestones

- [ ] Project Initialization
- [ ] C Fundamentals Aligned with Driver Development
- [ ] ADC Theory Study Completed
- [ ] STM32 ADC Architecture Understanding
- [ ] Register-Level ADC Initialization
- [ ] ADC Channel Configuration
- [ ] Polling-Based ADC Read
- [ ] Interrupt-Based ADC Read
- [ ] Error Handling & Edge Case Testing
- [ ] Documentation & Final Reflections

---

## Step-by-Step Progress

### [2025-07-07] Project Setup and Bitwise Practice

- **Description:** Created project structure with `src/`, `inc/`, `docs/`, and development log.
- **Code Location:** `ADC_Learning/`
- **Outcome:** Organized project space ready, initial bitwise operations practiced for setting/clearing bits.
- **Next Steps:** Review C pointers and memory-mapped I/O basics before moving to STM32 ADC study.### Day 2 - July 8, 2025

**Tasks Completed:**
- Created adc_driver.c with ADC_Init() and ADC_Read() functions (skeleton)
- Created main.c to call ADC functions in infinite loop
- Wrote basic Makefile for ARM GCC toolchain

**What I Learned:**
- How to plan register-level ADC code
- Role of clock config and GPIO analog setup before ADC
- First look at build process with Makefile

**Next Steps:**
- Write real register-level code in ADC_Init()
- Add STM32 header file or manually define registers
- Create minimal linker script for compiling






## Current Status (2025-07-10)

- Set up project structure and initial files (`stm32f4xx.h`, `start.c`, `linker_script.ld`, Makefile).
- Planning build environment setup (ARM toolchain installation pending).
- Next: Implement UART debug output and prepare for hardware testing once STM32F4 board arrives.


---

## Pending Issues / TODOs

- Await STM32 hardware arrival  
- Gather STM32F4 datasheets and reference manuals  
- Understand ADC registers in detail  
- Practice C pointers with memory simulations  

---

## References

- [Analog Devices ADC Tutorial](https://www.analog.com/en/analog-dialogue/articles/tutorial-on-analog-to-digital-conversion.html)  
- [STM32F4 Reference Manual (PDF)](https://www.st.com/resource/en/reference_manual/dm00031020-stm32f4-series-advanced-armbased-32bit-mcus-stmicroelectronics.pdf)  
- Texas Instruments ADC Fundamentals PDF (To be added)  

---
