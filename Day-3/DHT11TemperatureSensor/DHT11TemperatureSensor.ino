#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup()
{
  Serial.begin(9600);
  while (!Serial) { }
  Serial.println("Starting Temperature Monitor...");
  dht.begin();
}

void loop()
{
  delay(5000);
  
  float t = dht.readTemperature();

  if (isnan(t))
  {
    Serial.println("Reading from DHT sensor failed");
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" *C");
}
