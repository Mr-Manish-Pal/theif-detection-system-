# 🚨 ESP32 Thief Detection System with IR Sensor, I2C LCD, Buzzer & LED

<div align="center">

![ESP32](https://img.shields.io/badge/ESP32-Microcontroller-blue)
![Arduino](https://img.shields.io/badge/Arduino-IDE-green)
![Status](https://img.shields.io/badge/Project-Completed-success)
![License](https://img.shields.io/badge/License-MIT-yellow)

### Smart Security Alarm System Using ESP32

Detect intruders instantly using an IR sensor and trigger visual and audible alerts through an LCD display, LED, and buzzer.

</div>

---

# 📖 Overview

This project demonstrates a simple and effective **Thief Detection System** using an ESP32 microcontroller. The system continuously monitors an area using an IR sensor. When an object or intruder is detected, the ESP32 activates a buzzer alarm, turns on an LED indicator, and displays an alert message on an I2C LCD screen.

The project is designed for:

- Electronics Students
- Embedded Systems Learners
- IoT Enthusiasts
- Engineering Mini Projects
- Final Year Project Demonstrations
- Security System Prototypes

---

# 🎯 Features

✅ Real-Time Intruder Detection

✅ ESP32-Based Smart Security System

✅ IR Sensor Object Detection

✅ Audible Alarm Using Buzzer

✅ Visual Alert Using LED

✅ LCD Notification System

✅ Detection Counter

✅ Low Cost and Easy to Build

✅ Beginner-Friendly Project

---

# 🛠 Hardware Components

| Component | Quantity |
|------------|----------|
| ESP32 Development Board | 1 |
| IR Sensor Module | 1 |
| 16x2 I2C LCD Display | 1 |
| Active Buzzer | 1 |
| LED | 1 |
| 220Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# 🔌 Pin Connections

## IR Sensor

| IR Sensor Pin | ESP32 Pin |
|--------------|-----------|
| VCC | 3.3V |
| GND | GND |
| OUT | GPIO 23 |

---

## LED

| LED Pin | ESP32 Pin |
|----------|-----------|
| Positive | GPIO 22 |
| Negative | GND |

---

## Buzzer

| Buzzer Pin | ESP32 Pin |
|------------|-----------|
| Positive | GPIO 25 |
| Negative | GND |

---

## I2C LCD Display

| LCD Pin | ESP32 Pin |
|---------|-----------|
| VCC | 5V |
| GND | GND |
| SDA | GPIO 21 |
| SCL | GPIO 19 |

---

# ⚙️ System Working

### Normal State

The IR sensor continuously monitors the surroundings.

LCD displays:

```text
THIEF DETECTOR
Monitoring...
```

LED remains OFF.

Buzzer remains OFF.

---

### Detection State

When the IR sensor detects an object:

- Detection count increases
- LED turns ON
- Buzzer starts sounding
- LCD displays warning message

LCD Output:

```text
OBJECT DETECTED!
Count: 1
```

The alarm continues until the object is removed.

---

# 📊 Project Flow

```text
Start
  |
Initialize ESP32
  |
Initialize LCD
  |
Read IR Sensor
  |
Object Detected?
  |
 YES ------------------> Activate Alarm
  |                          |
  |                          |
 NO                          |
  |                          |
Display Monitoring           |
Status                       |
  |                          |
  <--------------------------
```

---

# 📂 Project Structure

```text
ESP32-Thief-Detection-System
│
├── README.md
├── Thief_Detection_System.ino
├── Circuit_Diagram.png
├── Project_Photos
│   ├── setup.jpg
│   ├── lcd_display.jpg
│   └── prototype.jpg
│
└── LICENSE
```

---

# 🚀 Getting Started

## Step 1: Install Arduino IDE

Download and install Arduino IDE.

---

## Step 2: Install ESP32 Board Support

Open:

```text
File → Preferences
```

Paste:

```text
https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
```

Then:

```text
Tools → Board Manager
```

Search:

```text
ESP32
```

Install the latest package.

---

## Step 3: Install Required Libraries

Install:

```text
LiquidCrystal_I2C
Wire
```

From:

```text
Sketch → Include Library → Manage Libraries
```

---

## Step 4: Upload Code

1. Connect ESP32 using USB.
2. Select the correct COM Port.
3. Select ESP32 Board.
4. Upload the code.

---

# 📸 Project Images

## Circuit Diagram

Add your circuit diagram here:

```text
/images/circuit_diagram.png
```

---

## Project Preview

Add project images here:

```text
/images/project_setup.jpg
/images/project_working.jpg
```

---

# 🔍 Applications

### Home Security

Detect unauthorized entry into rooms.

### Office Security

Monitor restricted areas.

### Smart Door Monitoring

Alert users when someone approaches.

### Educational Projects

Perfect for:

- Diploma Projects
- B.Tech Projects
- Engineering Exhibitions
- IoT Workshops

### Embedded Systems Learning

Learn:

- ESP32 Programming
- Sensor Interfacing
- LCD Communication
- Alarm Systems

---

# 🔮 Future Enhancements

### Wi-Fi Notifications

Send alerts to mobile devices.

### Telegram Bot Integration

Receive instant intrusion alerts.

### Blynk IoT Dashboard

Monitor detections remotely.

### Camera Module

Capture images during intrusion.

### Cloud Logging

Store detection history online.

### Mobile Application

Control and monitor remotely.

---

# 📈 Learning Outcomes

After building this project, you will understand:

- ESP32 GPIO Programming
- Digital Sensor Interfacing
- LCD Communication Using I2C
- Alarm System Design
- Embedded System Development
- Security System Fundamentals

---

# 🌟 Repository Support

If you found this project useful:

⭐ Star this repository

🍴 Fork this repository

📢 Share with friends

💡 Contribute improvements

---

# 🤝 Contributing

Contributions are welcome.

1. Fork the repository
2. Create a new branch
3. Make changes
4. Commit updates
5. Open a Pull Request

---

# 📜 License

This project is licensed under the MIT License.

Feel free to use, modify, and distribute this project for educational and personal purposes.

---

# 👨‍💻 Author

## Manish Pal

Embedded Systems & Electronics Enthusiast
