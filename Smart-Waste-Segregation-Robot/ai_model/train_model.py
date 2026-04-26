import tensorflow as tf
from tensorflow.keras.preprocessing.image import ImageDataGenerator
from tensorflow.keras.applications import MobileNetV2
from tensorflow.keras import layers, models
import os

IMG_SIZE = 224
BATCH_SIZE = 32

# Data generators
train = ImageDataGenerator(rescale=1./255)
test = ImageDataGenerator(rescale=1./255)

train_data = train.flow_from_directory(
    "dataset/train",
    target_size=(IMG_SIZE, IMG_SIZE),
    batch_size=BATCH_SIZE,
    class_mode='categorical'
)

test_data = test.flow_from_directory(
    "dataset/test",
    target_size=(IMG_SIZE, IMG_SIZE),
    batch_size=BATCH_SIZE,
    class_mode='categorical'
)

# Model
base = MobileNetV2(weights='imagenet', include_top=False)
base.trainable = False

model = models.Sequential([
    base,
    layers.GlobalAveragePooling2D(),
    layers.Dense(128, activation='relu'),
    layers.Dense(6, activation='softmax')
])

model.compile(
    optimizer='adam',
    loss='categorical_crossentropy',
    metrics=['accuracy']
)

# Train
model.fit(train_data, validation_data=test_data, epochs=10)

# Save model (FIXED)
os.makedirs("ai_model/models", exist_ok=True)
model.save("ai_model/models/waste_classifier.h5")

print("✅ Model saved successfully!")