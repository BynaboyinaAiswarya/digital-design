/*
 * GVV Sharma, August 20, 2018
 * Code released under GNU GPL
 * 
 * Turn LED ON/OFF using a button
 */
#include<Arduino.h>
#define LED_PIN PB4  // LED connected to PB4
#define BUTTON_PIN PB7 // Button connected to PB7

void setup() {
  // Enable LED_PIN as output
  pinMode(LED_PIN, OUTPUT);
  
  // Enable BUTTON_PIN as input
  pinMode(BUTTON_PIN, INPUT_PULLUP); // Using pull-up resistor for the button
}

void loop() {
  // Check if button is pressed (LOW state)
  if (digitalRead(BUTTON_PIN) == LOW) {
    digitalWrite(LED_PIN, LOW); // Turn LED ON
  } else {
    digitalWrite(LED_PIN, HIGH); // Turn LED OFF
  }
}
