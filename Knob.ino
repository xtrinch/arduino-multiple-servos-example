#include <Arduino.h> // include from libraries folder
#include "MyServo.h"

Servo myservoa, myservob, myservoc;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

void setup() {
  myservoa.attach(3);  // attaches the servo on pin 9 to the servo object
  myservob.attach(5);  // attaches the servo on pin 9 to the servo object
  myservoc.attach(6);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 175);     // scale it to use it with the servo (value between 0 and 180)
  myservoa.write(val);                  // sets the servo position according to the scaled value
  myservob.write(val);                  // sets the servo position according to the scaled value
  myservoc.write(val);                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
}

int main(void)
{
  init();
  Serial.begin(9600);
  pinMode(7,OUTPUT) ;                                   // set servo pin to output
  
#if defined(USBCON)
  USB.attach();
#endif
  
  setup();
    
  for (;;) {
    loop();
    if (serialEventRun) serialEventRun();
  }
        
  return 0;
}
