#include <Arduino.h>

// TODO 1: Define TRIG pin (Use pin 9)
const int TRIG_PIN = 9;

// TODO 2: Define ECHO pin (Use pin 10)
const int ECHO_PIN = 10;

 // TODO 3: Create variable to store duration
long duration = 0;

// TODO 4: Create variable to store calculated distance
float distance = 0.0;

void setup() {

    // TODO 5: Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 6: Configure TRIG as OUTPUT
    pinMode(TRIG_PIN, OUTPUT);

    // TODO 7: Configure ECHO as INPUT
    pinMode(ECHO_PIN, INPUT);

    // TODO 8: Print system initialization message
    Serial.println("======================================");
    Serial.println(" Ultrasonic Distance Measurement ");
    Serial.println("======================================");
    Serial.println("Monitoring distance using HC-SR04...");
}

void loop() {

    // TODO 9: Set TRIG LOW for 2 microseconds
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);

    // TODO 10: Send 10 microsecond pulse on TRIG
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);
 
    // TODO 11:
    // Measure pulse duration on ECHO using pulseIn()

    // TODO 12:
    // Calculate distance in cm

    // TODO 13:
    // Print calculated distance

    // TODO 14:
    // Add delay (500ms)
}
