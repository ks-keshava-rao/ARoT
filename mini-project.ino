/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

/* Fill-in your Template ID (only if using Blynk.Cloud) */
//#define BLYNK_TEMPLATE_ID   "YourTemplateID"  
 
// Comment this out to disable prints and save space
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
//int D8;
#define relay 4// D1 Relay pin
#define relay2 5//D2 relay pin
#define relay3 12 //D6 
#define relay4 13 //D7

// You should get Auth Token in the Blynk App. u
// Go to the Project Settings (nut icon).
char auth[] = "ngs01nE6uFRA3Xfg_pgSInPtVFhm8U9a";
 
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "G";
char pass[] = "12345678";

BLYNK_WRITE(V1)
{
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  digitalWrite(4,pinValue);
  // process received value
}
BLYNK_WRITE(V2)
{
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  digitalWrite(5,pinValue);
  // process received value
}
BLYNK_WRITE(V3)
{
  int pinValue = param.asInt(); //D6 assigning incoming value from pin V1 to a variable
  digitalWrite(12,pinValue);
  // process received value
}
BLYNK_WRITE(V4)
{
  int pinValue = param.asInt(); //D7 assigning incoming value from pin V1 to a variable
  digitalWrite(13,pinValue);
  // process received value
}

void setup()
{
 
  // Debug console
  Serial.begin(9600);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  Blynk.begin(auth, ssid, pass);

}

void loop()
{
  Blynk.run();
}
