
#include "DHT.h"
#define DHTPIN 4     // what digital pin we're connected to
#define DHTTYPE DHT11   // DHT 11

DHT dht(DHTPIN, DHTTYPE);

int RGBGreenPin = 10;
int RGBBluePin = 11;
int RedLED = 12;
int BlueLED = 13;

void setup() {
  Serial.begin(9600);
  Serial.println("DHTxx test!");
  dht.begin();
  pinMode(RGBGreenPin, OUTPUT);  //Setup green RGB LED pin as an output pin.
  pinMode(RGBBluePin, OUTPUT);   //Setup blue RGB LED pin as an output pin.
  pinMode(BlueLED, OUTPUT);
  pinMode(RedLED, OUTPUT);
}

void loop() {
  // Wait a few seconds between measurements.
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %");
  Serial.println("");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.println("");
  Serial.print("Temperature: ");
  Serial.print(f);
  Serial.print(" *F");
  Serial.println("");

  if (t >= 25)
  {
    //turn off blue light
    digitalWrite(BlueLED, LOW);
    //turn on red light
    digitalWrite(RedLED, HIGH);
  }

  if (t <= 25)
  {
    //turn off red light
    digitalWrite(RedLED, LOW);
    //turn on blue light
    digitalWrite(BlueLED, HIGH);
  }

  if (h >= 50)
  {
    //turn off green RGB light
    digitalWrite(RGBGreenPin, LOW);
    //turn on blue RGB light
    digitalWrite(RGBBluePin, HIGH);
  }

  if (h <= 50)
  {
    //turn off blue RGB light
    digitalWrite(RGBBluePin, LOW);
    //turn on green RGB light
    digitalWrite(RGBGreenPin, HIGH);
  }
}

