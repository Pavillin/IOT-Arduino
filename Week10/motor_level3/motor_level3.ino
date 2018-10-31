#include <Servo.h>

Servo myservo;                                    // create servo object to control a servo

int val = 150;                                    // default set to locked
int buttonTop = 2;                                //Lock button
int buttonBottom = 3;                             //unlock button


void setup() {
  myservo.attach(7);                              // attaches the servo on pin 7
  pinMode(buttonTop, INPUT);
  pinMode(buttonBottom, INPUT);
}

void loop() {
  myservo.write(val);                             // sets the servo position    
  if(digitalRead(buttonTop) == LOW) {
    val = 150;
  } 
  if(digitalRead(buttonBottom) == LOW) {
    val = 60;
  }
  delay(15);                                      // waits for the servo to get there
}

