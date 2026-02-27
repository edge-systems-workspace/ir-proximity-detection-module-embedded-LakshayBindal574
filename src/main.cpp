#include <Arduino.h>
IR
IR_PIN 5

void setup() {
  pinMode(IR_PIN, INPUT);
  Serial.begin(9600);
}
