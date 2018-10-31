/*  This program makes a single web request to a web server.
 *  This code works with the ESP8266 AI_THINKER MODULES 
 *  
 *  Run the following three commands in the serial monitor 
 *  before loading this program on the Arduino.
 *  
 *  Put the ESP8266 into client mode
 *  AT+CWMODE=1                  
 *
 *  Setup Wifi creditentials     
 *  AT+CWJAP="SSID","PASSWORD"   
 *  
 *  Use this if you are at the college
 *  AT+CWJAP="Georgian",""           
 */
String writeAPIKey = "PUT YOUR API KEY HERE";  //Put your ThingSpeak Write API key here.
unsigned int interval = 60000;  //Update every Minute 
long int now=0, previous=-50000; //Used to hold time variables.
#define DST_IP "api.thingspeak.com"  //Thingspeak Server

void setup() {
  Serial.begin(9600);  // Open serial Connection to Computer
  Serial1.begin(115200);  // Open serial Connection to ESP8266 
  
    while (!Serial) {// wait for serial port to connect. Needed for Leonardo only
  }  
  
  Serial.println("Thingspeak Demo");
  Serial1.println("AT+RST");  //Issue Reset Command
  Serial.println("AT+RST");
  delay(1000);

  //DEBUG LOOP- display ESP output to serial Monitor.
  while (Serial1.available()) { 
  Serial.println(Serial1.read());
  }
  Serial.println("AT+CWMODE=1"); 
  Serial1.println("AT+CWMODE=1");  //Set single client mode.
  delay(5000);

  Serial.println("AT+CIFSR");
  Serial1.println("AT+CIFSR"); //Display IP Information
  
  //DEBUG LOOP- display ESP output to serial Monitor.
  while (Serial1.available()) {  
  Serial.println(Serial1.read());
  }
  delay(1000);

  Serial.println("AT+CIPMUX=0");  
  Serial1.println("AT+CIPMUX=0");  //Sets up Single connection mode.
  delay(1000);

  //DEBUG LOOP- display ESP output to serial Monitor.
  while (Serial1.available()) { 
    Serial.write(Serial1.read());
  }
  delay(1000);
}

void loop()
{
now=millis(); //Get the current time.
if(now - previous >= interval){  //Check to see if it's time to run.
  previous = now; 
  Serial.println("Running Update");
  updateThingSpeak();
  }
}

void updateThingSpeak(){ 
  //int temp = (5.0 * analogRead(A2) * 100.0) / 1024; //Read the temp
  int temp =  analogRead(A0)/100; //Read the temp
  
   //Builds the connection string for the ESP8266
    String cmd = "AT+CIPSTART=\"TCP\",\"";
    cmd += DST_IP;
    cmd += "\",80";
    Serial1.println(cmd);  //Run the command
    Serial.println(cmd);    //Print this to the debug window
    delay(1000);

    //DEBUG LOOP- display ESP output to serial Monitor.
    while (Serial1.available()) {
    Serial.write(Serial1.read());
    } 

   //I NEED TO UPDATE THIS IF STATEMENT TO MAKE SURE CONNECTION WORKED
  //if (client.connect(thingSpeakAddress, 80)){         
    String httpcmd="GET /update?api_key=";
    httpcmd += writeAPIKey+"&field1=";
    httpcmd += temp;
    httpcmd += " HTTP/1.1\r\n";
    httpcmd += "Host: api.thingspeak.com\n";
    httpcmd += "Connection: close\r\n\r\n";
    
    Serial.print("AT+CIPSEND=");
    Serial.println(httpcmd.length());
  
    Serial1.print("AT+CIPSEND=");
    Serial1.println(httpcmd.length());
    delay(1000);

    Serial.print(">");
    Serial1.println(httpcmd);
    Serial.println(httpcmd);
    delay(3000);

    //DEBUG LOOP- display ESP output to serial Monitor.
     while (Serial1.available()) {
      Serial.write(Serial1.read());
      }
   
    Serial.println("AT+CIPCLOSE");
    Serial1.println("AT+CIPCLOSE"); //Close the Web Connection
}
