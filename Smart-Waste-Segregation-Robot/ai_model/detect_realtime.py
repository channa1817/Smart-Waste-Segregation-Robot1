import cv2
import numpy as np
from tensorflow.keras.models import load_model

model = load_model("ai_model/models/waste_classifier.h5")
classes = ['cardboard', 'glass', 'metal', 'paper', 'plastic', 'trash']

def get_prediction():
    cap = cv2.VideoCapture(0)

    while True:
        ret, frame = cap.read()
        if not ret:
            break

        img = cv2.resize(frame, (224, 224)) / 255.0
        img = np.reshape(img, (1, 224, 224, 3))

        pred = model.predict(img)
        label = classes[np.argmax(pred)]

        # 🔥 Show prediction
        cv2.putText(frame, label, (20, 50),
                    cv2.FONT_HERSHEY_SIMPLEX, 1,
                    (0, 255, 0), 2)

        cv2.imshow("Waste Classifier", frame)

        if cv2.waitKey(1) & 0xFF == 27:  # ESC
            break

    cap.release()
    cv2.destroyAllWindows()

    return label