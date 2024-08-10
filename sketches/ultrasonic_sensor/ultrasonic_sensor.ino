#include "SR04.h"
#define TRIG_PIN 12
#define ECHO_PIN 11
SR04 sr04 = SR04(ECHO_PIN, TRIG_PIN);
long a;

void setup() {
   Serial.begin(9600); // initialize serial communication at 9600 bps
   delay(1000); // wait for a second to stabilize the sensor
}

void loop() {
   a = sr04.Distance(); // get the distance from the sensor
   Serial.print(a); // print the distance value
   Serial.println("cm"); // print the unit of measurement
   delay(1000); // wait for a second before the next reading
}