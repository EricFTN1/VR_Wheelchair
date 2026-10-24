# VR Wheelchair Simulator

A virtual reality wheelchair simulation system that tracks physical wheelchair wheel movement using rotary sensors and an Arduino Uno, then transmits movement data to Unreal Engine to provide realistic wheelchair navigation within a virtual environment.

---

## Overview

This project bridges physical wheelchair movement with a virtual reality environment. Rotary sensors attached to the wheelchair wheels measure wheel rotation and direction, while an Arduino Uno processes sensor data and transmits movement information to Unreal Engine.

The system enables users to navigate a virtual environment through real-world wheelchair movement, combining mechanical design, embedded systems, sensor integration, and game engine development.

---

## My Contributions

I was primarily responsible for the hardware integration, mechanical design, and documentation of the project.

### Mechanical Design

- Designed custom 3D-printed components in Tinkercad to securely mount rotary sensors to wheelchair wheels.
- Designed mounting hardware while accounting for mechanical fit, alignment, and manufacturing tolerances.
- Iteratively refined printed components through testing to improve reliability and installation.

### Sensor Integration

- Integrated rotary sensors with an Arduino Elegoo Uno R3, for wheel movement tracking.
- Assisted in calibrating sensors to accurately measure wheel rotation and travel distance.
- Tested and validated sensor performance under real-world operating conditions.

### Data Communication

- Assisted in transmitting wheel movement data from the Arduino Uno to Unreal Engine.
- Participated in system integration testing to ensure virtual movement corresponded accurately with real-world wheelchair movement.

### Documentation & Presentation

- Created the majority of the project's technical documentation and presentation materials.
- Developed system diagrams, visual aids, and engineering documentation used throughout the project.
- Designed presentation graphics and the final project showcase materials.

---

## Features

- Real-time wheelchair wheel movement tracking
- Custom 3D-printed sensor mounting hardware
- Arduino Uno-based data acquisition system
- Rotary sensor position and rotation measurement
- Serial communication with Unreal Engine
- Real-time virtual wheelchair movement
- Hardware and software system integration

---

## Hardware Components

- Arduino Elegoo Uno R3
- Rotary Encoders
- Manual Wheelchair Platform
- USB Serial Communication
- Custom 3D-Printed Components

---

## Software Components

- Arduino IDE
- Unreal Engine
- Serial Communication Interface
- Custom Data Processing Logic

---

## How It Works

1. Rotary sensors measure wheelchair wheel rotation.
2. The Arduino Uno collects sensor data.
3. Movement data is processed and transmitted to a computer.
4. Unreal Engine receives the wheel movement data.
5. Virtual wheelchair movement is updated in real time.
6. Users navigate the VR environment through physical wheelchair motion.

---

## Skills Demonstrated

- Embedded Systems
- Arduino Development
- Sensor Integration
- Serial Communication
- Unreal Engine Development
- CAD Design
- Tinkercad
- 3D Printing
- Mechanical Design
- System Calibration
- Hardware/Software Integration
- Technical Documentation

---

## Challenges

- Designing sensor mounting hardware that maintained alignment during wheelchair movement.
- Managing tolerances between 3D-printed and commercial components.
- Ensuring accurate wheel movement tracking.
- Synchronizing physical and virtual movement.
- Creating reliable communication between the Arduino and Unreal Engine.

---

## Documentation

Engineering documentation for the project is available in the `docs/` directory.

- System Requirements Specification (SRS)
- Architectural Design Specification
- Detailed Design Specification
- Final Project Presentation

---

## Design Files

Custom mounting components were designed in Tinkercad and optimized through multiple development iterations.

STL files can be found in the `cad/` directory.

---

## Media

### Completed System

<img src="images/vr_wheelchair_system.jpg" width="700">

### Sensor Mount Assembly

<img src="images/sensor_mount.jpg" width="700">

### Unreal Engine Environment

<img src="images/unreal_environment.jpg" width="700">

### Demonstration

<img src="images/demo.gif" width="700">


## Authors
- Eric Nguyen
- Jake Cooper
- Khoa Nguyen
- Santiago Hernandez
