#include <Servo.h>
#include <CheapStepper.h>

Servo servo1;
CheapStepper stepper(11,10,9,8);

void setup(){
  Serial.begin(9600);
  servo1.attach(7);
  stepper.setRpm(17);
}

void loop(){
  stepper.moveDegreesCW(240);
  delay(2000);

  stepper.moveDegreesCCW(240);
  delay(2000);

  servo1.write(180);
  delay(2000);

  servo1.write(90);
  delay(2000);
}