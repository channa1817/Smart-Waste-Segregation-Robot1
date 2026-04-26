#include <Servo.h>
#include <CheapStepper.h>

Servo servo1;
CheapStepper stepper(11, 10, 9, 8);

#define BUZZER 12

int servoDefault = 95;
String input = "";

void setup() {
  Serial.begin(9600);
  pinMode(BUZZER, OUTPUT);

  servo1.attach(7);
  stepper.setRpm(17);

  servo1.write(servoDefault);

  Serial.println("Arduino Ready");
}

// 🔊 Buzzer
void beep(int duration) {
  tone(BUZZER, 1000, duration);
}

// 🎯 Dump
void dumpWaste() {
  servo1.write(180);
  delay(2000);
  servo1.write(servoDefault);
  delay(1000);
}

// 🔄 Movement
void rotateCW() {
  stepper.moveDegreesCW(240);
  delay(1000);
}

void rotateCCW() {
  stepper.moveDegreesCCW(240);
  delay(1000);
}

void loop() {

  if (Serial.available()) {
    input = Serial.readStringUntil('\n');
    input.trim();

    Serial.print("Received: ");
    Serial.println(input);

    if (input == "metal") {
      beep(1000);
      rotateCCW();
      dumpWaste();
      rotateCW();
    }
    else if (input == "trash") {
      beep(500);
      rotateCW();
      dumpWaste();
      rotateCCW();
    }
    else {
      beep(300);
      dumpWaste();
    }
  }
}