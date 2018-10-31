   //dot = 100mS ON
   //dash = 1000Ms ON
   //D = - . .
   //S = . . .

int TimeDot = 100;
int TimeDash = 1000;
int TimeOff = 1000;
int blueLedPin = 13;

void setup() {
  pinMode(blueLedPin, OUTPUT);  //Setup Blue LED pin as an output pin.  
}

void loop() {
  //D
  digitalWrite(blueLedPin, HIGH);
  delay(TimeDash);
  digitalWrite(blueLedPin, LOW);
  delay(TimeOff);
  digitalWrite(blueLedPin, HIGH);
  delay(TimeDot);
  digitalWrite(blueLedPin, LOW);
  delay(TimeOff);
  digitalWrite(blueLedPin, HIGH);
  delay(TimeDot);
  digitalWrite(blueLedPin, LOW);
  delay(TimeOff);
  
  //S
  digitalWrite(blueLedPin, HIGH);
  delay(TimeDot);
  digitalWrite(blueLedPin, LOW);
  delay(TimeOff);
  digitalWrite(blueLedPin, HIGH);
  delay(TimeDot);
  digitalWrite(blueLedPin, LOW);
  delay(TimeOff);
  digitalWrite(blueLedPin, HIGH);
  delay(TimeDot);
  digitalWrite(blueLedPin, LOW);
  delay(TimeOff);
}

