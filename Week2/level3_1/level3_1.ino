  /*      
   *      Title: 321Maker Experiment #001 - Blue Blink
   *      Description: This program will blink the Blue LED on the 321Maker shield.
   *      Tutorial:  http://321maker.com/e/blue-blink   
   *      Revision Date: January 15, 2016
   *      Licence: http://321maker.mit-license.org/
   *      Requirements:  Arduino with 321Maker Shield
   */

int blueLed  = 13;
int TimeSlow = 1000;
int TimeFast = 500;
int blueLedPin = 13;

void setup() { //The Setup function runs once.
  pinMode(blueLedPin, OUTPUT);  //Setup Blue LED pin as an output pin.  
}

void loop() { //The loop function runs forever.
  //1
  digitalWrite(blueLedPin, HIGH);
  delay(TimeSlow);
  digitalWrite(blueLedPin, LOW);
  delay(TimeSlow);
  //2
  digitalWrite(blueLedPin, HIGH);
  delay(TimeSlow);
  digitalWrite(blueLedPin, LOW);
  delay(TimeSlow);
  //3
  digitalWrite(blueLedPin, HIGH);
  delay(TimeSlow);
  digitalWrite(blueLedPin, LOW);
  delay(TimeFast);

  //1
  digitalWrite(blueLedPin, HIGH);
  delay(TimeFast);
  digitalWrite(blueLedPin, LOW);
  delay(TimeFast);
  //2
  digitalWrite(blueLedPin, HIGH);
  delay(TimeFast);
  digitalWrite(blueLedPin, LOW);
  delay(TimeFast);
  //3
  digitalWrite(blueLedPin, HIGH);
  delay(TimeFast);
  digitalWrite(blueLedPin, LOW);
  delay(TimeSlow);
}

