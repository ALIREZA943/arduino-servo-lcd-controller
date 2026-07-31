# Embedded Servo Control System

> A real-time embedded control system that demonstrates analog signal acquisition, PWM-based servo actuation, and live monitoring using an Arduino Uno.

![License](https://img.shields.io/badge/License-MIT-green.svg)
![Platform](https://img.shields.io/badge/Platform-Arduino-blue.svg)
![Language](https://img.shields.io/badge/Language-C%2B%2B-orange.svg)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen.svg)

---

## 📖 Overview

This project implements a real-time embedded control system using an Arduino Uno. A 10K potentiometer is used as an analog input device to control the angular position of an SG90 servo motor. Simultaneously, a 16×2 I2C LCD provides real-time feedback by displaying both the measured input voltage and the corresponding servo angle.

The project demonstrates the integration of analog sensing, PWM-based actuator control, and I2C communication within a single embedded application.

---

## ✨ Key Features

* Real-time analog signal acquisition
* Servo motor position control (0°–180°)
* Live voltage measurement
* Real-time LCD feedback
* PWM-based actuator control
* I2C communication
* Modular Arduino implementation
* Low-cost embedded hardware platform

---

## 📸 Project Preview

### Hardware Setup

```text
images/project.jpg
```

### Circuit Diagram

```text
images/circuit_diagram.png
```

---

## 🎥 Demonstration

A complete demonstration video of the project is available.

```text
videos/project_demo.mp4
```

or

https://youtu.be/your-video-link

---

## ⚙️ Hardware Components

| Component                | Quantity |
| ------------------------ | -------- |
| Arduino Uno              | 1        |
| SG90 Servo Motor         | 1        |
| 10K Potentiometer        | 1        |
| 16×2 LCD with I2C Module | 1        |
| Breadboard               | 1        |
| Jumper Wires             | Several  |
| USB Cable                | 1        |

---

## 🔌 Circuit Connections

### Potentiometer

| Pin    | Arduino |
| ------ | ------- |
| Left   | 5V      |
| Middle | A0      |
| Right  | GND     |

### Servo

| Wire   | Arduino |
| ------ | ------- |
| Signal | D9      |
| VCC    | 5V      |
| GND    | GND     |

### LCD I2C

| LCD | Arduino |
| --- | ------- |
| VCC | 5V      |
| GND | GND     |
| SDA | A4      |
| SCL | A5      |

---

## 🧠 Software Architecture

1. Read analog voltage from the potentiometer.
2. Convert ADC values to voltage.
3. Map ADC values to a servo angle between 0° and 180°.
4. Update the servo position.
5. Display voltage on the first LCD line.
6. Display servo angle on the second LCD line.
7. Repeat continuously.

---

## 📂 Repository Structure

```text
Embedded-Servo-Control-System/
│
├── Arduino_Code/
│   └── Servo_LCD.ino
│
├── images/
│   ├── project.jpg
│   └── circuit_diagram.png
│
├── videos/
│   └── project_demo.mp4
│
├── README.md
├── LICENSE
└── .gitignore
```

---

## 📚 Libraries

* Servo.h
* Wire.h
* LiquidCrystal_I2C.h

---

## 🚀 Getting Started

Clone the repository:

```bash
git clone https://github.com/ALIREZA943/embedded-servo-control-system.git
```

Open the project using Arduino IDE.

Install the required libraries.

Upload the sketch to the Arduino Uno.

Connect the hardware according to the circuit diagram.

Power the board and rotate the potentiometer to observe real-time servo movement and LCD updates.

---

## 🎯 Learning Outcomes

This project demonstrates practical experience with:

* Embedded Systems
* Analog-to-Digital Conversion (ADC)
* PWM Signal Generation
* Servo Motor Control
* Human–Machine Interface (LCD)
* I2C Communication
* Arduino Programming
* Hardware Integration
* Embedded System Debugging

---

## 🔮 Future Improvements

* Closed-loop servo position control
* Rotary encoder support
* OLED display interface
* Bluetooth remote control
* Wi-Fi monitoring using ESP32
* Data logging to SD card
* PID control implementation
* FreeRTOS task scheduling

---

## 👨‍💻 Author

**Alireza Rezaei Asl**

Electrical & Control Engineering Student

📍 Isfahan, Iran

📧 [alirezarezaii943@gmail.com](mailto:alirezarezaii943@gmail.com)

🔗 GitHub: https://github.com/ALIREZA943

---

## 📄 License

This project is licensed under the MIT License.

Copyright (c) 2026 Alireza Rezaei Asl

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, subject to the conditions of the MIT License.

See the LICENSE file for the complete license text.

---

## ⭐ Support

If you find this repository useful, consider giving it a ⭐ on GitHub. Contributions, suggestions, and feedback are always welcome.
