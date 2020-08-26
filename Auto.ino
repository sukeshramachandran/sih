#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>

#include <BlynkSimpleEsp8266.h>

#include <Servo.h>



Servo servo;



char auth[] = "6knbBwwSW6fDPDeaxGvIP-ExrI_aznC3";

char ssid[] = "santosh";

char pass[] = "wifi password";



void setup()

{

  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);



  servo.attach(15); // NodeMCU D8 pin

  

 }

  

void loop()

{

  

  Blynk.run();

  

}

BLYNK_WRITE(V1)

{

   servo.write(param.asInt());

}



BLYNK_WRITE(V2)

{

  servo.write(0);

}

BLYNK_WRITE(V3)

{

  servo.write(90);

}

