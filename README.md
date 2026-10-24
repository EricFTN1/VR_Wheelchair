# VR Wheelchair Simulator

A virtual reality wheelchair simulation system that tracks physical wheelchair wheel movement using rotary sensors and an Arduino Uno, then transmits movement data to Unreal Engine to provide realistic wheelchair navigation within a virtual environment.

---

## Demonstration
[🎥 YouTube Demo:](https://youtube.com/shorts/3MWNplKcLuM?feature=share)]

[📰 Featured by UTA Computer Science & Engineering](https://websites.uta.edu/cseseniordesign/2024/12/09/access-vr/)]

---

## Overview

This project bridges physical wheelchair movement with a virtual reality environment. Rotary encoders attached to the wheelchair wheels measure wheel rotation and direction, while an Elegoo Mega 2560 processes the sensor data and transmits movement information to Unreal Engine.

The result is a VR system that allows users to navigate a virtual environment using natural wheelchair motion.

---

## My Contributions

I was primarily responsible for the hardware integration, mechanical design, embedded systems implementation, and project documentation.

### Mechanical Design

- Designed custom 3D-printed components in Tinkercad to mount LPD3806 optical rotary quadrature encoders to the wheelchair wheels.
- Designed mounting hardware while accounting for alignment, fitment, and manufacturing tolerances.
- Developed a custom 3D-printed friction mechanism to provide resistance while the wheelchair was suspended during testing and demonstrations.
- Iteratively refined designs to improve durability and sensor reliability.

### Embedded Systems Integration

- Integrated LPD3806 optical rotary quadrature encoders with an Elegoo Mega 2560.
- Developed Arduino firmware to capture and process wheel movement data.
- Calibrated and tested encoder measurements to improve tracking accuracy.
- Transmitted movement data to the Unreal Engine simulation environment.

### Documentation & Presentation

- Created the majority of the project's technical documentation.
- Developed diagrams, visual aids, and engineering documentation.
- Designed project presentation materials and showcase displays.

---

## Features

- Real-time wheelchair wheel tracking
- Optical quadrature encoder integration
- Arduino-based motion processing
- Custom 3D-printed sensor mounts
- Custom friction mechanism for testing
- Real-time data transmission to Unreal Engine
- Virtual navigation through physical wheelchair movement

---

## Hardware Components

- Elegoo Mega 2560
- LPD3806 Optical Rotary Quadrature Encoders
- Manual Wheelchair Platform
- Custom 3D-Printed Mounting Hardware
- Custom 3D-Printed Friction Components
- USB Serial Communication

---

## Software Components

- Arduino IDE
- Unreal Engine
- Serial Communication Interface
- Custom Sensor Processing Logic

---

## How It Works

1. Rotary encoders measure wheelchair wheel rotation.
2. The Elegoo Mega 2560 collects encoder data.
3. Wheel movement is processed and converted into navigation data.
4. Movement information is transmitted to a computer.
5. Unreal Engine receives the data and updates virtual wheelchair movement.
6. Users navigate the virtual environment through physical wheelchair motion.

---

## Engineering Lessons Learned

- Migrated from an Arduino Uno R3 to an Elegoo Mega 2560 due to increased interrupt requirements for quadrature encoder processing.
- Learned to debug open-collector encoder outputs using pull-up resistors and an oscilloscope.
- Gained experience analyzing quadrature encoder A/B phase signals for motion tracking.
- Improved reliability through multiple iterations of custom 3D-printed mounting hardware.
- Learned the importance of validating individual subsystems before full system integration.

---

## Skills Demonstrated

- Embedded Systems
- Arduino Development
- Sensor Integration
- Quadrature Encoder Processing
- Serial Communication
- CAD Design (Tinkercad)
- 3D Printing
- Mechanical Design
- Hardware/Software Integration
- System Calibration
- Technical Documentation
- Engineering Design

---

## Documentation

Additional engineering documentation can be found in the `docs/` directory:

- System Requirements Specification (SRS)
- Architectural Design Specification
- Detailed Design Specification
- Project Presentation Materials

---

## Design Files

Custom mounting hardware and support components were designed in Tinkercad.

STL files are located in the `cad/` directory.

---

## Repository Structure

```text
vr-wheelchair-simulator/
├── README.md
├── LICENSE
├── src/
│   └── wheelchair_encoder.ino
├── cad/
├── docs/
└── images/
```

## Authors
- Eric Nguyen
- Jake Cooper
- Khoa Nguyen
- Santiago Hernandez
