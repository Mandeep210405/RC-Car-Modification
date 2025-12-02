# 🚗 MANDY-CAR - WiFi Controlled RC Car

A DIY WiFi-controlled RC car using NodeMCU ESP12E and BD139/BD140 transistors for motor control with custom Android app.

## 📋 Table of Contents
- [Components Required](#-components-required)
- [Connection Diagram](#-connection-diagram)

## 📦 Components Required

### **Essential Components:**
| Component | Quantity | Purpose |
|-----------|----------|---------|
| NodeMCU ESP12E | 1 | Brain of the car |
| BD139 NPN Transistors | 4 | Motor control (bottom side) |
| BD140 PNP Transistors | 4 | Motor control (top side) |
| 1kΩ Resistors | 8 | Base current limiting |
| 1N4007 Diodes | 8 | Motor protection |
| 130 DC Motors | 2 | Drive + Steering |
| 9V Battery | 1 | Power supply |
| Breadboard | 1 | Prototyping |
| Jumper Wires | 20+ | Connections |

### **Optional Components:**
- Door motor (for accessories)
- LEDs with 220Ω resistors (headlights)
- 4x AA battery holder (alternative power)
- Chassis/wheels for car body

## 🔌 Connection Diagram

### **Power Connections:**


9V Battery + → All BD140 Emitters (4 transistors)
9V Battery - → All BD139 Emitters (4 transistors) + NodeMCU GND

### **Main Drive Motor (Motor 1):**

NodeMCU D1 → [1kΩ] → BD140-T1 Base (Forward High)
NodeMCU D2 → [1kΩ] → BD139-T1 Base (Forward Low)
NodeMCU D3 → [1kΩ] → BD140-T2 Base (Reverse High)
NodeMCU D4 → [1kΩ] → BD139-T2 Base (Reverse Low)

BD140-T1 Collector + BD139-T1 Collector → Motor 1 Wire 1
BD140-T2 Collector + BD139-T2 Collector → Motor 1 Wire 2

### **Steering Motor (Motor 2):**

NodeMCU D5 → [1kΩ] → BD140-T3 Base (Right High)
NodeMCU D6 → [1kΩ] → BD139-T3 Base (Right Low)
NodeMCU D7 → [1kΩ] → BD140-T4 Base (Left High)
NodeMCU D8 → [1kΩ] → BD139-T4 Base (Left Low)

BD140-T3 Collector + BD139-T3 Collector → Motor 2 Wire 1
BD140-T4 Collector + BD139-T4 Collector → Motor 2 Wire 2

### **Transistor Pinout (Face Flat Side Toward You):**

 ○  ○  ○
 C  B  E   (Collector, Base, Emitter)
 ↑  ↑  ↑
Left to Right when flat side faces you
