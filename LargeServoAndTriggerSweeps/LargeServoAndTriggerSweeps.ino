/*
Adafruit Arduino - Lesson 14. Sweep
*/

#include <Servo.h> 

int servoPin = 10;       // Trigger servo
int rotServoPin = 9;     // Large Servo controlling horizontal rotation

Servo servoTrigger;      // Trigger servo
Servo servoLarge;        // Large servo
 
int angleTrigger = 155;           // Triggerservo position in degrees 
int angleLarge = 45;      


void setup() 
{ 
  servoLarge.attach(rotServoPin);
  servoTrigger.attach(servoPin);
} 
 
 
void loop() 
{ 
  // scan from 0 to 90 degrees
  for(angleLarge = 45; angleLarge < 135; angleLarge++)  
  {                                  
    servoLarge.write(angleLarge);               
    delay(15);                   
  } 
  // now scan back from 90 to 0 degrees
  for(angleLarge = 135; angleLarge > 45; angleLarge--)    
  {                                
    servoLarge.write(angleLarge);           
    delay(15);       
  }
  delay(15);
 
  // Trigger sweep 10 degrees
    for(angleTrigger = 155; angleTrigger < 175; angleTrigger++)  
  {                                  
    servoTrigger.write(angleTrigger);               
    delay(15);                   
  } 
    // Scan back trigger
    for(angleTrigger = 175; angleTrigger > 155; angleTrigger--)    
  {                                
    servoTrigger.write(angleTrigger);           
    delay(15);       
  }
  
} 
