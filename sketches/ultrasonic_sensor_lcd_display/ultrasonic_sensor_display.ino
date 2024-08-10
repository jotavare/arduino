#include <LiquidCrystal_I2C.h>
#include "SR04.h"

// Initialize the LCD with I2C address 0x27, 20 columns, and 4 rows
LiquidCrystal_I2C lcd(0x27, 20, 4);

// Define Trig and Echo pins
#define TRIG_PIN 2
#define ECHO_PIN 3

// Initialize the SR04 ultrasonic sensor with the Echo and Trig pins
SR04 sr04 = SR04(ECHO_PIN, TRIG_PIN);

void setup() {
  lcd.init();       // Initialize the LCD
  lcd.backlight();  // Turn on the LCD backlight
}

void loop() {
  long distance = sr04.Distance();  // Measure the distance

  lcd.clear();  // Clear the LCD screen
  lcd.setCursor(0, 0);  // Position the cursor at the first line
  lcd.print("Distance: ");
  lcd.print(distance);  // Display the measured distance
  lcd.print(" cm");

  delay(300);  // Delay for 300 ms before the next measurement
}
