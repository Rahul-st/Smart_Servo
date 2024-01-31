

#include <ArduinoWiFiServer.h>
#include <BearSSLHelpers.h>
#include <CertStoreBearSSL.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiAP.h>
#include <ESP8266WiFiGeneric.h>
#include <ESP8266WiFiGratuitous.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WiFiSTA.h>
#include <ESP8266WiFiScan.h>
#include <ESP8266WiFiType.h>
#include <WiFiClient.h>
#include <WiFiClientSecure.h>
#include <WiFiClientSecureBearSSL.h>
#include <WiFiServer.h>
#include <WiFiServerSecure.h>
#include <WiFiServerSecureBearSSL.h>
#include <WiFiUdp.h>



#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>
Servo myservo;
#define BLYNK_TEMPLATE_ID "TMPL352cvLrZK"
#define BLYNK_TEMPLATE_NAME "esp8266"
char auth[]="StvtqBDM6m4aoGzDClZVocXS0C6a2l5e";
char ssid[]="ROCKSTAR";
char pass[]="1234567890";
BLYNK_WRITE(V0){
  myservo.write(param,asInt());

}
void setup() {
  Serial.begin(115200);
  myservo.attach(D5);
  Blynk.begin(auth,ssid,pass);

  // put your setup code here, to run once:

}

void loop() {
  
  Blynk.run();// put your main code here, to run repeatedly:

}
