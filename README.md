# 🎤 Big Sound Sensor — Sound Detection System

An Arduino project that uses a **Big Sound Sensor** to detect changes in sound and trigger an LED and buzzer.

The sensor provides both **digital (DO)** and **analog (AO)** outputs, allowing Arduino to detect sound and monitor the sensor's analog readings.

## ⚙️ How It Works

The Big Sound Sensor detects changes in sound and sends the information to Arduino.

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

The analog output can also be monitored through the Arduino Serial Monitor.

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

The **DO pin** provides a digital signal that can be used to detect whether the sound level has crossed the module's adjustable threshold.

The onboard potentiometer can be used to adjust this threshold.

### AO — Analog Output

The **AO pin** provides an analog signal representing changes detected by the sound sensor.

Arduino reads this value using:

```cpp
analogRead(A0);
```

The value can be viewed through the Serial Monitor.

## 💻 Code

The project uses both sensor outputs:

```cpp
const int soundDigital = 2;
const int soundAnalog = A0;
const int led = 8;
const int buzzer = 9;

void setup() {
  pinMode(soundDigital, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int digitalValue = digitalRead(soundDigital);
  int analogValue = analogRead(soundAnalog);

  Serial.print("Digital: ");
  Serial.print(digitalValue);

  Serial.print(" | Analog: ");
  Serial.println(analogValue);

  if (digitalValue == HIGH) {
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(100);
}
```

> **Note:** Depending on the specific sensor module and threshold adjustment, the DO logic may be HIGH or LOW when sound is detected. If the response is reversed, the condition can be inverted.

## 🧠 Arduino Concepts Used

* `digitalRead()`
* `analogRead()`
* `digitalWrite()`
* Digital input
* Analog input
* Digital output
* Serial Monitor
* Threshold adjustment

## 🚀 Possible Upgrades

This basic project can later be expanded into:

* Sound-activated lighting
* Clap-controlled systems
* Security alarms
* Noise monitoring
* Sound-reactive projects
* Robotics applications

## 🎬 Sensor Series

This project is part of the **Robotics With ZK Sensor Series**.

**Episode 02 — Big Sound Sensor**

* Part 1 — KNOW IT
* Part 2 — BUILD IT
* Part 3 — TEST IT

---

**Created by Robotics With ZK ⚙️**
