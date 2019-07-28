
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "Obke1aropmCSuGWZW30yUDpzla-Q4Uh4";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "AndroidAP";
char pass[] = "12345678";

// This function will be called every time Slider Widget
// in Blynk app writes values to the Virtual Pin 1
BLYNK_WRITE(V1)
{
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  // You can also use:
  // String i = param.asStr();
  // double d = param.asDouble();
  if(pinValue ==1)
  {
    digitalWrite(D1,HIGH);
    

  }
  else
  {
    digitalWrite(D1,LOW);
    
  }
}
  BLYNK_WRITE(V2)
{
  int pinValue1 = param.asInt(); // assigning incoming value from pin V1 to a variable
  // You can also use:
  // String i = param.asStr();
  // double d = param.asDouble();
  if(pinValue1 ==1)

  {
    digitalWrite(D2,HIGH);
    

  }

 else
  {
    digitalWrite(D2,LOW);
    
  }
}
  BLYNK_WRITE(V3)
{
  int pinValue2 = param.asInt(); // assigning incoming value from pin V1 to a variable
  // You can also use:
  // String i = param.asStr();
  // double d = param.asDouble();
  if(pinValue2 ==1)
  {
    digitalWrite(D3,HIGH);
    

  }
  else
  {
    digitalWrite(D3,LOW);
    
  }
}

void setup()
{
  pinMode(D1,OUTPUT);
  // Debug console
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
}

void loop()
{
  Blynk.run();
}



