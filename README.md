# 🎤 Big Sound Sensor — Sound Detection System

An Arduino project that uses a **Big Sound Sensor** to detect changes in sound and trigger an LED and buzzer.

The sensor provides both **digital (DO)** and **analog (AO)** outputs.

## ⚙️ How It Works

```text
Sound
  ↓
Big Sound Sensor
  ↓
Arduino
  ↓
Sound Detection
  ↓
LED + Buzzer
```

The **DO output** is used for sound detection, while the **AO output** allows the sensor's analog readings to be monitored through the Serial Monitor.

## 🔌 Components

* Arduino UNO
* Big Sound Sensor
* LED
* 220Ω Resistor
* Buzzer
* Breadboard
* Jumper Wires

## 🔗 Connections

### Big Sound Sensor

| Sensor Pin | Arduino |
| ---------- | ------- |
| +          | 5V      |
| G          | GND     |
| DO         | D2      |
| AO         | A0      |

### LED

| LED Connection | Arduino                  |
| -------------- | ------------------------ |
| Anode (+)      | D8 through 220Ω resistor |
| Cathode (-)    | GND                      |

### Buzzer

| Buzzer Pin | Arduino |
| ---------- | ------- |
| +          | D9      |
| -          | GND     |

## 📊 Sensor Outputs

### DO — Digital Output

Provides a digital signal when the detected sound crosses the module's adjustable threshold.

The onboard potentiometer can be used to adjust the detection threshold.

### AO — Analog Output

Provides an analog signal that changes with the sound detected by the sensor.

Arduino reads this value through analog input **A0**.

## 🧠 Arduino Concepts Used

* Digital input
* Analog input
* Digital output
* `digitalRead()`
* `analogRead()`
* `digitalWrite()`
* Serial Monitor
* Threshold adjustment

## 🚀 Possible Upgrades

* Sound-activated lighting
* Clap-controlled systems
* Security alarms
* Noise monitoring
* Sound-reactive projects
* Robotics applications

## 🎬 Sensor Series

**Episode 02 — Big Sound Sensor**

* Part 1 — KNOW IT
* Part 2 — BUILD IT
* Part 3 — TEST IT

---

**Created by Robotics With ZK ⚙️**
