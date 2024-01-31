# Smart_Servo
// Control the servo motor via mobile using Blynk software.

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>
Servo myservo;
#define BLYNK_TEMPLATE_ID "****"
#define BLYNK_TEMPLATE_NAME "esp8266"
char auth[]="Stvtq******XS0C6a2l5e";
char ssid[]="*****"
char pass[]="1234567890";
BLYNK_WRITE(V0){
  myservo.write(param,asInt());

}
void setup() {
  Serial.begin(115200);
  myservo.attach(D5);
  Blynk.begin(auth,ssid,pass);

 

}

void loop() {
  
  Blynk.run();

}

