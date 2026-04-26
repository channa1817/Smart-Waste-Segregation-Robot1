#include <CheapStepper.h>
#include <Servo.h>

Servo servo1;
CheapStepper stepper(11,10,9,8);

// Pins
#define IR_PIN 5
#define PROXI_PIN 6
#define BUZZER 12
#define SOIL_PIN A0

int servoDefault = 95;
String input="";

// ---------------- SETUP ----------------
void setup() {
  Serial.begin(9600);

  pinMode(IR_PIN, INPUT);
  pinMode(PROXI_PIN, INPUT_PULLUP);
  pinMode(BUZZER, OUTPUT);

  servo1.attach(7);
  stepper.setRpm(17);

  servo1.write(180);
  delay(2000);
  servo1.write(servoDefault);

  Serial.println("System Ready...");
}

// ---------------- FUNCTIONS ----------------
void beep(int d){
  tone(BUZZER,1000,d);
}

void dump(){
  servo1.write(180);
  delay(2000);
  servo1.write(servoDefault);
  delay(1000);
}

void rotateCW(){
  stepper.moveDegreesCW(240);
  delay(1000);
}

void rotateCCW(){
  stepper.moveDegreesCCW(240);
  delay(1000);
}

int readSoil(){
  int total=0;

  for(int i=0;i<3;i++){
    int val=analogRead(SOIL_PIN);
    val=constrain(val,485,1023);
    val=map(val,485,1023,100,0);
    total+=val;
    delay(75);
  }
  return total/3;
}

// ---------------- LOOP ----------------
void loop() {

  // 🔹 AI Input (Python)
  if(Serial.available()){
    input = Serial.readStringUntil('\n');
    input.trim();

    if(input=="metal"){
      beep(1000);
      rotateCCW();
      dump();
      rotateCW();
    }
    else if(input=="trash"){
      beep(500);
      rotateCW();
      dump();
      rotateCCW();
    }
    else{
      dump();
    }
  }

  // 🔹 Sensor fallback
  int metal = digitalRead(PROXI_PIN);
  int objectDetected = digitalRead(IR_PIN);

  if(metal==0){
    beep(1000);
    rotateCCW();
    dump();
    rotateCW();
  }

  if(objectDetected==0){
    int moisture = readSoil();

    if(moisture > 20){
      rotateCW();
      dump();
      rotateCCW();
    } else {
      dump();
    }
  }
}