#include "DHT.h"
 
#define DHT22PIN D2
DHT dht22(DHT22PIN, DHT22);
 
void setup() {
Serial.begin(115200);
delay(10);

dht22.begin();
}
 
void loop() {
 
delay(2000);
 
float tempValue22 = dht22.readTemperature();
float humidityValue22 = dht22.readHumidity();
 
Serial.println("DHT22 Sensorwerte");
Serial.print("Luftfeuchtigkeit: "); //Im seriellen Monitor den Text und
Serial.print(humidityValue22); //die Dazugehörigen Werte anzeigen
Serial.println(" %");
Serial.print("Temperatur: ");
Serial.print(tempValue22);
Serial.println(" Grad Celsius");
 
delay(5000);
}
