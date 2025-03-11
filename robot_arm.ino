/*
    Robot arm developper NamKodX
    contact : namik.can@hotmail.com
*/

// include libraries
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// Info :
/*
    
*/

Adafruit_PWMServoDriver srituhobby = Adafruit_PWMServoDriver();

// Define Section
#define servo1 0  // Under Servo
#define servo2 1  // Left Servo
#define servo3 2  // Right Servo
#define servo4 3  // Arm Servo
#define SERVO_FREQ 50

void setup() {
  //The serial monitor starts
  Serial.begin(9600);
  // This is Test Code
  Serial.println("16 channel PWM test!");
  //This code starts the library
  srituhobby.begin();
  srituhobby.setPWMFreq(SERVO_FREQ);  // Servo Frequence value (SG90:50hz)
  //Sets the robot arm starting points
  srituhobby.setPWM(servo1, 0, 330);
  srituhobby.setPWM(servo2, 0, 150);
  srituhobby.setPWM(servo3, 0, 300);
  srituhobby.setPWM(servo4, 0, 410);
  delay(3000);
}

void robotArm() {

  for (int S4value = 290; S4value <= 490; S4value++) {
    srituhobby.setPWM(servo4, 0, S4value);
    delay(10);
  }

  for (int S3value = 300; S3value <= 450; S3value++) {
    srituhobby.setPWM(servo3, 0, S3value);
    delay(10);
  }

  for (int S2value = 150; S2value <= 190; S2value++) {
    srituhobby.setPWM(servo2, 0, S2value);
    delay(10);
  }

  for (int S4value = 490; S4value > 290; S4value--) {
    srituhobby.setPWM(servo4, 0, S4value);
    delay(10);
  }

  for (int S3value = 450; S3value > 300; S3value--) {
    srituhobby.setPWM(servo3, 0, S3value);
    delay(10);
  }

  for (int S2value = 190; S2value <= 320; S2value++) {
    srituhobby.setPWM(servo2, 0, S2value);
    delay(10);
  }

  for (int S1value = 340; S1value >= 150; S1value--) {
    srituhobby.setPWM(servo1, 0, S1value);
    delay(10);
  }

  for (int S3value = 300; S3value <= 410; S3value++) {
    srituhobby.setPWM(servo3, 0, S3value);
    delay(10);
  }

  for (int S4value = 290; S4value <= 490; S4value++) {
    srituhobby.setPWM(servo4, 0, S4value);
    delay(10);
  }

  for (int S4value = 490; S4value > 290; S4value--) {
    srituhobby.setPWM(servo4, 0, S4value);
    delay(10);
  }

  for (int S3value = 410; S3value > 300; S3value--) {
    srituhobby.setPWM(servo3, 0, S3value);
    delay(10);
  }
  for (int S2value = 320; S2value > 150; S2value--) {
    srituhobby.setPWM(servo2, 0, S2value);
    delay(10);
  }

  for (int S1value = 150; S1value < 340; S1value++) {
    srituhobby.setPWM(servo1, 0, S1value);
    delay(10);
  }
}

void loop() {
  

}
