/*
  Has issues with laser part, but knob control of servo works. 
  Majority of code taken from https://www.arduino.cc/en/tutorial/knob .
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

void setup() {
    myservo.attach(9);
    pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13,HIGH);               // laser
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
}
