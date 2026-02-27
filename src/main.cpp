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
  } else {
    Serial.println("No Object");
  }

  delay(200);
}
/**
 * @file IR_Object_Detection.ino
 * @brief Infrared (IR) sensor based object detection system
 * @details
 * This program reads digital output from an IR obstacle detection sensor.
 * When an object is detected, the sensor output goes LOW.
 * The detection status is displayed on the Serial Monitor.
 *
 * @author Lakshay Bindal
 * @version 1.0
 * @date 27-02-2026
 *
 * @section hardware_sec Hardware Connections
 * - IR Sensor VCC → 5V
 * - IR Sensor GND → GND
 * - IR Sensor OUT → Digital Pin 5
 *
 * @section working_sec Working Principle
 * - If IR output is LOW  → Object Detected
 * - If IR output is HIGH → No Object
 *
 * @note Most IR obstacle sensors are active LOW.
 * @warning Adjust onboard potentiometer to set detection sensitivity.
 */

#include <Arduino.h>

/** @brief Digital pin connected to IR sensor output */
#define IR_PIN 5


/**
 * @brief Initializes IR sensor pin and Serial communication
 */
void setup()
{
    pinMode(IR_PIN, INPUT);
    Serial.begin(9600);
}


/**
 * @brief Main program loop
 * @details
 * Continuously reads IR sensor value
 * and prints detection status.
 */
void loop()
{
    int irValue = digitalRead(IR_PIN);

    if (irValue == LOW)
    {
        Serial.println("Object Detected");
    }
    else
    {
        Serial.println("No Object");
    }

    delay(200);
}
