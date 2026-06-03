# 🚨 ESP32 Thief Detection System with IR Sensor, I2C LCD, Buzzer & LED

<div align="center">

![ESP32](https://img.shields.io/badge/ESP32-Microcontroller-blue)
![VS Code](https://img.shields.io/badge/Editor-VS%20Code-blue)
![Status](https://img.shields.io/badge/Project-Completed-success)


# 👨‍💻 Author

## Manish Pal

### Smart Security Alarm System Using ESP32

Detect intruders instantly using an IR sensor and trigger visual and audible alerts through an LCD display, LED, and buzzer.

</div>

---


# 🎬  Project Video YouTube Tutorial

Learn how to build a Smart Thief Detection System using ESP32, IR Sensor, I2C LCD Display, Buzzer, and LED.

🔗 **Watch Full Video:**

[![ESP32 Thief Detection System](https://img.youtube.com/vi/wt2GLQNmN5c/maxresdefault.jpg)](https://youtu.be/wt2GLQNmN5c?si=xHy_-mekhidg2WZ3)

### 📺 Video Link
https://youtu.be/wt2GLQNmN5c?si=xHy_-mekhidg2WZ3

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

 Upload Code

1. Connect ESP32 using USB.
2. Select the correct COM Port.
3. Select ESP32 Board.
4. Upload the code.

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

Feel free to use, modify, and distribute this project for educational and personal purposes.

---

