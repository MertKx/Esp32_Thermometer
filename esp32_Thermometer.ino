#include "DHT.h"

#define DHTPIN 4     
#define DHTTYPE DHT11 

#define overHumidityPin 19 //red light pin
#define lowerHumidityPin 18 //blue light pin
#define POT_PIN 35    //potantiometer pin

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
  pinMode(19, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(POT_PIN, INPUT); 
}

void loop() {
  delay(2000);


  int potValue = analogRead(POT_PIN);
  int threshold = map(potValue, 0, 4095, 0, 100); //defining spesific humidity values

  float humidity = dht.readHumidity();
  float temparature = dht.readTemperature(); 

  if(humidity >= threshold){
    //red light works
    digitalWrite(19, HIGH);
    digitalWrite(18, LOW);
  } else {
    //blue light works
    digitalWrite(19, LOW);
    digitalWrite(18, HIGH);
  }

  Serial.print("Humidity: %");
  Serial.print(humidity);
  Serial.print(" | Threshold Value: %");
  Serial.print(threshold);
  Serial.print(" | Temparature: ");
  Serial.print(temparature);
  Serial.println("°C");
}