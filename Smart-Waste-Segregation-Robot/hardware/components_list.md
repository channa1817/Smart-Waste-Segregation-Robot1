# 🔧 Components List

## 🧠 Controller
- Arduino UNO  
  👉 Main microcontroller used to control sensors and actuators  

---

## 🎯 Sensors

### 1. IR Sensor
- Used for object detection  
- Detects presence of waste on conveyor  

### 2. Proximity Sensor (Inductive)
- Used for metal detection  
- Identifies metallic waste  

### 3. Soil Moisture Sensor
- Used to detect wet vs dry waste  
- Measures moisture content  

---

## ⚙️ Actuators

### 1. Servo Motor (SG90)
- Used for dumping mechanism  
- Controls opening/closing of bin  

### 2. Stepper Motor (with ULN2003 driver)
- Used for rotating waste bins  
- Provides precise angle control  

### 3. DC Motors (x2 / x4)
- Used for robot movement  
- Also used in conveyor belt system  

---

## 🔄 Conveyor System
- Belt mechanism  
- DC motor-driven  
- Used for continuous waste flow  

---

## 🔌 Motor Driver

### L298N Motor Driver
- Controls DC motors and conveyor motor  
- Supports bidirectional control  

---

## 🔊 Output

### Buzzer
- Provides alert signals  
- Indicates detection and sorting  

---

## 📡 Communication

### Bluetooth Module (HC-05 / HC-06) *(Optional)*
- Used for remote control via mobile  

---

## 🔋 Power Supply
- 12V Battery → Motors  
- 5V Supply → Arduino & sensors  

---

## 🧩 Supporting Components
- Jumper wires  
- Breadboard / PCB  
- Wheels + chassis  
- Mounting frame  

---

## ⚠️ Notes
- Ensure **common ground connection**
- Use **external power for motors**
- Avoid powering motors directly from Arduino  

---

## 🎯 Summary

| Category | Components |
|--------|----------|
| Controller | Arduino UNO |
| Sensors | IR, Proximity, Soil |
| Actuators | Servo, Stepper, DC Motors |
| Drivers | L298N |
| Output | Buzzer |
| Power | Battery |

---

## 🚀 Future Add-ons
- Camera module (OpenCV)
- ESP32 (IoT)
- Ultrasonic sensor (distance detection)
- GPS module (tracking)