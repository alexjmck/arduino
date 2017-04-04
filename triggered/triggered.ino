
  /*
Adafruit Arduino - Lesson 14. Sweep
*/

#include <Servo.h> 

int servoPin = 10;       // Trigger servo
int rotServoPin = 9;     // Large Servo controlling horizontal rotation

Servo servoTrigger;      // Trigger servo
Servo servoLarge;        // Large servo
 
int angleTrigger = 105;           // Triggerservo position in degrees 
int angleLarge = 45;      


void setup() 
{ 
  servoLarge.attach(rotServoPin);
  servoTrigger.attach(servoPin);
} 

void loop() 
{ 

//  servoTrigger.write(20);

  // Trigger sweep 90 degrees
    for(angleTrigger = 105; angleTrigger < 150; angleTrigger++)  
  {                                  
    servoTrigger.write(angleTrigger);               
    delay(15);                   
  } 
    // Scan back trigger
    for(angleTrigger = 150; angleTrigger > 105; angleTrigger--)    
  {                                
    servoTrigger.write(angleTrigger);           
    delay(15);       
  }
delay(15);
  
}
