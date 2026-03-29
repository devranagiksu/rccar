#include <Wire.h>
#include "MotorDriver.h"
#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11); // RX, TX (Connect HC-05 TX to pin 10, RX to pin 11 via voltage divider)

void setup() {
  Serial.begin(9600);
  BT.begin(9600);
  Motor.begin();
  Motor.setSpeed(100); // Set default speed 0-255
}

void loop() {
  if (BT.available()) {
    char command = BT.read();
    Serial.println(command);

    switch (command) {
      case 'F': // Forward
        Motor.drive(MOTOR1, FORWARD);
        Motor.drive(MOTOR2, FORWARD);
        break;
      case 'B': // Backward
        Motor.drive(MOTOR1, BACKWARD);
        Motor.drive(MOTOR2, BACKWARD);
        break;
      case 'L': // Left
        Motor.drive(MOTOR1, BACKWARD);
        Motor.drive(MOTOR2, FORWARD);
        break;
      case 'R': // Right
        Motor.drive(MOTOR1, FORWARD);
        Motor.drive(MOTOR2, BACKWARD);
        break;
      case 'S': // Stop
        Motor.stop(MOTOR1);
        Motor.stop(MOTOR2);
        break;
      default:
        Motor.stop(MOTOR1);
        Motor.stop(MOTOR2);
        break;
    }
  }
}
