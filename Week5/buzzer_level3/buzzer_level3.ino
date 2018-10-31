/*
        Title: 321Maker Experiment #008 - Buzzer
        Description: This program will turn on the buzzer when the SW1 button is pressed. 
        Tutorial:  http://321maker.com/e/buzzer
        Revision Date: January 15, 2016
        Licence: http://321maker.mit-license.org/
        Requirements:  Arduino with 321Maker Shield
*/
#include "pitches.h";
int buzzerPin  = 5 ;  //The buzzerPin is connected to pin 5 of the Arduino.
int button1Pin = 2;   //The SW1 button is connect to pin 2 of the Arduino.

void setup() { //The Setup function runs once.
  pinMode(buzzerPin, OUTPUT);  //Setup red LED pin as an output pin.
  pinMode(button1Pin, INPUT);  //Setup button1 pin as an input pin.
}

void loop() { //The loop function runs forever.
  if (digitalRead(button1Pin) == LOW) //Check to see if button1 is pressed.
  { 
    //Cut your teeth(Kygo remix)
    tone(buzzerPin, NOTE_F6,1397);
    delay(400);
    tone(buzzerPin, NOTE_DS6,1245);
    delay(300);
    tone(buzzerPin, NOTE_CS6,1109);
    delay(300);
    tone(buzzerPin, NOTE_DS6,1245);
    delay(200);
    tone(buzzerPin, NOTE_CS6,1109);
    delay(300);
    tone(buzzerPin, NOTE_CS6,1109);
    delay(200);
    tone(buzzerPin, NOTE_AS5,932);
    delay(250);
    tone(buzzerPin, NOTE_AS5,932);
    delay(200);
    tone(buzzerPin, NOTE_GS5,831);
    delay(250);
    tone(buzzerPin, NOTE_AS5,932);
    delay(300);
    tone(buzzerPin, NOTE_CS6,1109);
    delay(300);
    tone(buzzerPin, NOTE_DS6,1245);
    delay(200);
    tone(buzzerPin, NOTE_F6,1397);
    delay(250);
    tone(buzzerPin, NOTE_DS6,1245);
    delay(300);
    tone(buzzerPin, NOTE_CS6,1109);
    delay(300);
    tone(buzzerPin, NOTE_AS5,932);
    delay(200);
    tone(buzzerPin, NOTE_AS5,932);
    delay(300);
    //chourus x2
    tone(buzzerPin, NOTE_F6,1397);
    delay(400);
    tone(buzzerPin, NOTE_DS6,1245);
    delay(300);
    tone(buzzerPin, NOTE_CS6,1109);
    delay(300);
    tone(buzzerPin, NOTE_DS6,1245);
    delay(200);
    tone(buzzerPin, NOTE_CS6,1109);
    delay(300);
    tone(buzzerPin, NOTE_CS6,1109);
    delay(200);
    tone(buzzerPin, NOTE_AS5,932);
    delay(250);
    tone(buzzerPin, NOTE_AS5,932);
    delay(200);
    tone(buzzerPin, NOTE_GS5,831);
    delay(250);
    tone(buzzerPin, NOTE_AS5,932);
    delay(300);
    tone(buzzerPin, NOTE_CS6,1109);
    delay(300);
    tone(buzzerPin, NOTE_DS6,1245);
    delay(200);
    tone(buzzerPin, NOTE_F6,1397);
    delay(250);
    tone(buzzerPin, NOTE_DS6,1245);
    delay(300);
    tone(buzzerPin, NOTE_CS6,1109);
    delay(300);
    tone(buzzerPin, NOTE_AS5,932);
    delay(200);
    tone(buzzerPin, NOTE_AS5,932);
    delay(300);
    //slow part
    tone(buzzerPin, NOTE_F5,698);
    delay(350);
    tone(buzzerPin, NOTE_F5,698);
    delay(350);
    tone(buzzerPin, NOTE_DS5,622);
    delay(450);
    tone(buzzerPin, NOTE_AS4,466);
    delay(300);
    tone(buzzerPin, NOTE_CS5,554);
    delay(450);
    tone(buzzerPin, NOTE_AS4,466);
    delay(1000);

    tone(buzzerPin, NOTE_F5,698);
    delay(350);
    tone(buzzerPin, NOTE_F5,698);
    delay(350);
    tone(buzzerPin, NOTE_DS5,622);
    delay(450);
    tone(buzzerPin, NOTE_AS4,466);
    delay(300);
    tone(buzzerPin, NOTE_CS5,554);
    delay(650);
   } 
}

