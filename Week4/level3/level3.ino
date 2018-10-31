
int rotationPin = A0;
int waitTime=0;
int rgbRed = 9;
int rgbGreen = 10;
int rgbBlue = 11;

void setup() {
pinMode(rgbRed, OUTPUT);
pinMode(rgbGreen, OUTPUT);
pinMode(rgbBlue, OUTPUT);
}

void loop() {
waitTime = analogRead(rotationPin);
//Display Red
digitalWrite(rgbRed, HIGH);
delay(waitTime);
digitalWrite(rgbRed, LOW);

//Display Green
digitalWrite(rgbGreen, HIGH);
delay(waitTime);
digitalWrite(rgbGreen, LOW);

//Display Blue
digitalWrite(rgbBlue, HIGH);
delay(waitTime);
digitalWrite(rgbBlue, LOW);
}

