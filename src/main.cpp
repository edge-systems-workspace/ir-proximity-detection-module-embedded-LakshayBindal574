#include <Arduino.h>
IR
IR_PIN 5

void setup() {
  pinMode(IR_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  int irValue = digitalRead(IR_PIN);

  if (irValue == LOW) {
    Serial.println("Object Detected");
  }
  delay(200);
}
