# Solar Battery Charger with Automatic Solar Tracking

## Overview

The Solar Battery Charger with Automatic Solar Tracking is an Arduino-based project that increases the efficiency of solar energy harvesting. Two Light Dependent Resistor (LDR) sensors detect the direction of maximum sunlight, and a servo motor automatically rotates the solar panel toward the brighter light source. The generated power is used to charge a rechargeable battery through a TP4056 charging module.

---

## Features

- Automatic solar tracking using LDR sensors
- Arduino Uno based control
- Servo motor controlled panel movement
- Rechargeable battery charging
- Low-cost and eco-friendly design
- Improved solar energy harvesting efficiency

---

## Components Used

- Arduino Uno
- SG90 Servo Motor
- 2 × LDR Sensors
- Solar Panel
- TP4056 Battery Charging Module
- 18650 Li-ion Battery
- Connecting Wires
- Breadboard

---

## Working Principle

1. Two LDR sensors continuously measure the intensity of sunlight.
2. The Arduino compares the values from both sensors.
3. If one sensor receives more light than the other, the servo motor rotates the solar panel toward the brighter side.
4. The solar panel remains aligned with the sun for maximum power generation.
5. The generated energy is used to charge the battery through the TP4056 charging module.

---

## Software Used

- Arduino IDE
- Embedded C
- Servo Library

---

## Folder Structure

```
Solar-Battery-Charger/
│── README.md
│── LICENSE
│── .gitignore
│── code/
│   └── solar_battery_charger.ino
│── images/
│   ├── circuit_diagram.png
│   ├── hardware_setup.jpg
│   └── output.jpg
```

---

## Project Images

### Circuit Diagram

(Add the circuit diagram image here.)

### Hardware Setup

(Add the hardware setup image here.)

### Output

(Add the output image here.)

---

## Future Enhancements

- IoT-based monitoring using ESP32
- MPPT-based solar charging
- Mobile application integration
- Battery health monitoring
- Data logging and analytics

---

## Author

**Dhayanidhi S**

Electronics and Communication Engineering Student

---

## License

This project is licensed under the MIT License.