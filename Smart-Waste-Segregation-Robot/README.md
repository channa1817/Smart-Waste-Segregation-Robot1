# ♻️ Smart Waste Segregation Robot

AI + Arduino + Conveyor-based intelligent waste classification system.

---

## 🚀 Overview

The **Smart Waste Segregation Robot** is an automated system designed to classify and segregate waste using a combination of:

* 🤖 Embedded Systems (Arduino)
* 🧠 Machine Learning (OpenCV + MobileNetV2)
* ⚙️ Conveyor Belt Automation
* 🔌 Real-time Hardware Control

The system detects waste, classifies it (dry / wet / metal / recyclable), and automatically sorts it into appropriate bins.

---

## 🎯 Features

* ♻️ Automatic waste segregation (Dry / Wet / Metal)
* 🤖 AI-based classification using OpenCV
* 🔄 Conveyor belt continuous processing
* ⚡ Real-time Arduino control via serial communication
* 🧠 Sensor + AI hybrid system
* 📡 Future-ready for IoT integration

---

## 🧠 System Architecture

```
Camera → OpenCV Model → Python  
        ↓  
   Serial Communication  
        ↓  
     Arduino  
        ↓  
Stepper + Servo + Conveyor  
        ↓  
   Waste Segregation
```

---

## 🔄 Working

1. Waste is placed on conveyor belt
2. IR sensor detects object
3. Camera captures image
4. AI model predicts waste type
5. Python sends result to Arduino
6. Stepper rotates bin
7. Servo dumps waste
8. Conveyor resumes

---

## ⚙️ Tech Stack

| Category      | Technology                   |
| ------------- | ---------------------------- |
| Hardware      | Arduino UNO, Sensors, Motors |
| AI/ML         | TensorFlow, OpenCV           |
| Programming   | Python, Embedded C           |
| Communication | Serial (USB)                 |

---

## 📂 Project Structure

```
arduino/        → Microcontroller code  
ai_model/       → ML model + detection  
integration/    → Python ↔ Arduino bridge  
hardware/       → Wiring + components  
dataset/        → Training data  
docs/           → Report + documentation  
tests/          → Testing scripts  
```

---

## 🛠️ Installation

### 1️⃣ Clone Repository

```bash
git clone https://github.com/your-username/Smart-Waste-Segregation-Robot.git
cd Smart-Waste-Segregation-Robot
```

### 2️⃣ Install Dependencies

```bash
pip install -r requirements.txt
```

### 3️⃣ Train Model (Optional)

```bash
python ai_model/train_model.py
```

### 4️⃣ Run System

```bash
python integration/main_controller.py
```

### 5️⃣ Upload Arduino Code

* Open `arduino/waste_robot.ino`
* Upload using Arduino IDE

---

## 📊 Results

* ✅ Real-time classification working
* ✅ Automated waste sorting
* 🎯 Accuracy: ~85–90% (MobileNetV2)

---

## 🎯 Applications

* Smart Cities
* Municipal Waste Management
* Industrial Waste Segregation
* Campus Automation

---

## 🌍 Future Scope

* ☁️ IoT dashboard (Firebase / Blynk)
* 📡 ESP32-CAM integration
* 🚗 Autonomous navigation
* ⚡ Smart conveyor control (PWM)

---

---

## ⭐ Support

If you like this project:

* ⭐ Star the repository
* 🍴 Fork it
* 📢 Share it

---
