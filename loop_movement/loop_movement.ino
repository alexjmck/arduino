/*
Adafruit Arduino - Lesson 14. Sweep
*/

#include <Servo.h> 

int servoPin = 10;       // Trigger servo
int rotServoPin = 9;     // Large Servo controlling horizontal rotation

Servo servoTrigger;      // Trigger servo
Servo servoLarge;        // Large servo
 
int angleTrigger = 55;           // Triggerservo position in degrees 
int angleLarge = 90;      


void setup() 
{ 
  servoLarge.attach(rotServoPin);
  servoTrigger.attach(servoPin);
} 
 
 
void loop() 
{ 
  // scan from 90 to 120 degrees
  for(angleLarge = 90; angleLarge < 120; angleLarge++)  
  {                                  
    servoLarge.write(angleLarge);               
    delay(35);                   
  } 
  delay(500);

    // scan from 120 to 70 degrees
  for(angleLarge = 120; angleLarge > 70; angleLarge--)  
  {                                  
    servoLarge.write(angleLarge);               
    delay(35);                   
  } 
  delay(500);

    // scan from 70 to 90 degrees
  for(angleLarge = 70; angleLarge < 90; angleLarge++)  
  {                                  
    servoLarge.write(angleLarge);               
    delay(35);                   
  } 
  delay(1000);

  // Trigger sweep 90 degrees
    for(angleTrigger = 55; angleTrigger < 160; angleTrigger++)  
  {                                  
    servoTrigger.write(angleTrigger);               
    delay(15);                   
  } 
    // Scan back trigger
    for(angleTrigger = 160; angleTrigger > 55; angleTrigger--)    
  {                                
    servoTrigger.write(angleTrigger);           
    delay(15);       
  }
  /*
  // scan from 45 to 90 degrees
  for(angleLarge = 90; angleLarge < 135; angleLarge++)  
  {                                  
    servoLarge.write(angleLarge);               
    delay(35);                   
  } 
  delay(250);

  // Trigger sweep 90 degrees
    for(angleTrigger = 25; angleTrigger < 120; angleTrigger++)  
  {                                  
    servoTrigger.write(angleTrigger);               
    delay(15);                   
  } 
    // Scan back trigger
    for(angleTrigger = 120; angleTrigger > 25; angleTrigger--)    
  {                                
    servoTrigger.write(angleTrigger);           
    delay(15);       
  }

  // now scan back from 90 to 45 degrees
  for(angleLarge = 135; angleLarge > 90; angleLarge--)    
  {                                
    servoLarge.write(angleLarge);           
    delay(35);       
  }
  delay(250);
 
  // Trigger sweep 90 degrees
    for(angleTrigger = 25; angleTrigger < 120; angleTrigger++)  
  {                                  
    servoTrigger.write(angleTrigger);               
    delay(15);                   
  } 
    // Scan back trigger
    for(angleTrigger = 120; angleTrigger > 25; angleTrigger--)    
  {                                
    servoTrigger.write(angleTrigger);           
    delay(15);       
  }

  // now scan back from 90 to 45 degrees
  for(angleLarge = 90; angleLarge > 45; angleLarge--)    
  {                                
    servoLarge.write(angleLarge);           
    delay(35);       
  }
    delay(250);
    
  // Trigger sweep 90 degrees
    for(angleTrigger = 25; angleTrigger < 120; angleTrigger++)  
  {                                  
    servoTrigger.write(angleTrigger);               
    delay(15);                   
  } 
    // Scan back trigger
    for(angleTrigger = 120; angleTrigger > 25; angleTrigger--)    
  {                                
    servoTrigger.write(angleTrigger);           
    delay(15);       
  }
  */
  delay(5000);          //delay
//  exit();
  
} 
       
