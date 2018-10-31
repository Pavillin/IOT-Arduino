
int redRGB  = 9 ;  
int greenRGB = 10;
int blueRGB = 11;
int blueLedPin = 13 ; 
int button1Pin = 2;   
int button2Pin = 3;  

void setup() { 
  pinMode(redRGB, OUTPUT);  
  pinMode(greenRGB, OUTPUT);
  pinMode(blueRGB, OUTPUT);  
  pinMode(button1Pin, INPUT);  
  pinMode(button2Pin, INPUT);  
}

void loop() { 

  if (digitalRead(button1Pin) == LOW) {
    digitalWrite(redRGB, HIGH);
    delay (333);
    digitalWrite(redRGB, LOW);
    digitalWrite(greenRGB, HIGH);
    delay(333);
    digitalWrite(greenRGB, LOW);
    digitalWrite(blueRGB, HIGH);
    delay(333);
    digitalWrite(blueRGB, LOW);
  } else {
    digitalWrite(redRGB, LOW);
    digitalWrite(greenRGB, LOW);
    digitalWrite(blueRGB, LOW);
  }
}
