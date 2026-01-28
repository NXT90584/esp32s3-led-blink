#include <Arduino.h>

#define LED_PIN 2   // NON-RGB onboard LED (most ESP32-S3 boards)

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}
