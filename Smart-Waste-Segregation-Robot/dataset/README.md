# 📊 Dataset Information

## 📌 Overview
This project uses an image dataset for training a machine learning model to classify different types of waste.

The model is trained to identify the following categories:

- cardboard
- glass
- metal
- paper
- plastic
- trash

---

## 📁 Dataset Structure

dataset/
│
├── train/
│   ├── cardboard/
│   ├── glass/
│   ├── metal/
│   ├── paper/
│   ├── plastic/
│   └── trash/
│
└── test/
    ├── cardboard/
    ├── glass/
    ├── metal/
    ├── paper/
    ├── plastic/
    └── trash/

---

## 📥 Dataset Source

We use the **TrashNet Dataset**, a widely used dataset for waste classification.

🔗 GitHub:
https://github.com/garythung/trashnet

---

## 🧠 Preprocessing Steps

Before training, the following preprocessing is applied:

- Images resized to **224 × 224**
- Pixel values normalized (0–1)
- Data split into training and testing sets
- Data augmentation (optional)

---

## 📊 Model Training Details

- Model: MobileNetV2 (Transfer Learning)
- Input size: 224 × 224 × 3
- Output classes: 6
- Loss: Categorical Crossentropy
- Optimizer: Adam

---

## ⚠️ Notes

- Ensure correct folder structure before training
- Class folder names must match labels.txt
- Keep balanced data for better accuracy

---

## 🚀 Future Improvements

- Add more real-world waste images
- Use YOLO for object detection
- Improve dataset diversity