# nucleo-c031c6-4bit-binary-led-counter

An implementation of a 4-bit binary counter on an STM32 Nucleo-C031C6 microcontroller using Wokwi simulation. 
The program uses digital output pins and bitwise operations to cycle through decimal values from `0` to `15` (`0000` to `1111` binary).

---
##  Project Overview

* Objective: Design and simulate a 4-bit binary LED counter where each LED represents a bit in a 16-second loop cycle.
* Core Functionality: Utilizes bitwise right-shifts (`>>`) and bitwise AND (`&`) operations to continuously reflect state transitions on digital output pins.
* Simulation Tool: [Wokwi Embedded Systems Simulator](https://wokwi.com).

---
## Live Simulation

Test and run the project interactively: 
[Open in Wokwi](https://wokwi.com/projects/471322425478776833) 

---

## Repository Structure

* `diagram.json` — Wokwi hardware configuration and wiring layout.
*  `sketch.ino` — Arduino C++ firmware logic.
