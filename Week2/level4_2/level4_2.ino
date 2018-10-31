//Police Lights Program

int RedLed = 12;
int BlueLed  = 13;

void setup() { //The Setup function runs once.
  pinMode(BlueLed, OUTPUT);  //Setup Blue LED pin as an output pin.  
  pinMode(RedLed, OUTPUT);   //Setup Red LED pin as an output pin.
}

void loop() {
  //Blue Light
  digitalWrite(BlueLed, HIGH);
  delay(500);
  digitalWrite(BlueLed, LOW);
  //Red Light
  digitalWrite(RedLed, HIGH);
  delay(500);
  digitalWrite(RedLed, LOW);
}

