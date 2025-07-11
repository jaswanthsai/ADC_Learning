## Folder Structure

ADC_Learning/
│
├── src/           → Source files (driver, main application, startup code)  
├── inc/           → Header files (register definitions, driver APIs)  
├── docs/          → Optional documentation, diagrams, notes  
├── .vscode/       → VS Code workspace and settings files  
├── README.md      → Project overview and status (this file)  
├── development_log.md → Daily development journal with milestones  
├── ADC_Development_Plan.md → High-level learning and build roadmap  
├── linker_script.ld → Memory layout and linker configuration  
├── Makefile       → Build automation scripts for GCC toolchain  
└── start.c        → Minimal startup code and vector table  

---

## Technologies & Tools

- Target MCU: STM32F4 series (STM32F429ZI Nucleo board)  
- Language: Embedded C (no HAL or CubeMX, direct register access)  
- Compiler: `arm-none-eabi-gcc`  
- Build system: Makefile  
- Debugging (planned): UART printf, VisualGDB integration  
- Documentation: Markdown for logs, plans, and references  

---

## Current Progress

| Phase                     | Status       |
|---------------------------|--------------|
| C fundamentals            | ✅ Complete  |
| ADC theory & architecture | ✅ Ongoing   |
| STM32 ADC registers       | ✅ Started   |
| Driver implementation     | 🟡 In Progress (polling method) |
| UART debug output         | ⬜ Upcoming  |
| Interrupt-driven driver   | ⬜ Upcoming  |
| Final testing
