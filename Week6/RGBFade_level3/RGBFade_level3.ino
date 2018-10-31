int RGBGreenPin = 10; //The green RGB LED is connected pin 10 of the Arduino.
int fadeDelay = 5;    //This is the number of milliseconds that it will take between steps during fading.
int rotationPin = A0;
int brightness = 0;
int data = 0;

void setup() { //The Setup function runs once.
  pinMode(RGBGreenPin, OUTPUT);  //Setup green RGB LED pin as an output pin.
}

void loop() { //The loop function runs forever.
  
  int brightness = analogRead(rotationPin);
  analogWrite(RGBGreenPin, map(brightness,0,1023,0,255));
}

