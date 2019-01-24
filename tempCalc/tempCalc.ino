#include <LiquidCrystal.h>
LiquidCrystal lcd(0, 1, 5, 4, 3, 2);
const int sensorPin = A0;
const float baselineTemp = 30.0;

void setup()
{
  
  Serial.begin(9600);   // opens serial port, sets data rate to 9600 bps
  
}

void loop()
{

  int sensorVal = analogRead(sensorPin);
  Serial.print("Sensor Value: ");
  Serial.print(sensorVal);

  
  float voltage = (sensorVal/1024.0) * 5.0;

  Serial.print(", Volts: ");
  Serial.print(voltage);

  Serial.print(", degrees C: ");

  //conversion
  float temperature = (voltage - 0.5) * 100;
  Serial.print(temperature);
  Serial.print("\n");
  delay(500);
}
