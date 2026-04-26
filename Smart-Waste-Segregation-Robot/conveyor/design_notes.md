# 🚀 Conveyor Design

## 🎯 Purpose
The conveyor belt is used to move waste continuously through the detection and classification system.

---

## ⚙️ Components Used
- DC Motor
- L298N Motor Driver
- Belt + Rollers
- Power Supply (12V Battery)

---

## 🔌 Connections

| Component | Connection |
|----------|-----------|
| Motor +  | L298N OUT3 |
| Motor -  | L298N OUT4 |
| IN3      | Arduino D2 |
| IN4      | Arduino D3 |

---

## 🔄 Working

1. Conveyor motor starts
2. Waste moves on belt
3. Sensors + Camera detect waste
4. Arduino processes data
5. Conveyor stops during sorting
6. Resumes after dumping

---

## ⚡ Advantages

- Continuous operation
- Faster processing
- Industry-level system design
- Reduces manual work

---

## 💡 Future Improvements

- PWM speed control
- Object spacing control
- Jam detection sensor