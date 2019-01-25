#include<LiquidCrystal.h> 

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 

const int temperaturePin = 0;

void setup() 
{
  lcd.begin(16, 2); 
  pinMode(9, OUTPUT); //set pin 9 to OUTPUT
  pinMode(10, OUTPUT); //Set pin 10 to OUTPUT
  digitalWrite(9, LOW); //outputs no power to the contrast pin this lets you see the words
  analogWrite(10, 255);	//Outputs full power to the screen brightness LED
  Serial.begin(9600);
  
}
void loop()
{
  lcd.setCursor(0, 0);

  float voltage, degreesC, degreesF;  

  voltage = getVoltage(temperaturePin);  
  degreesC = (voltage - 0.5) * 100.0;
  degreesF = degreesC * (9.0/5.0) + 32.0;

  Serial.print("voltage: ");
  Serial.print(voltage);
  Serial.print("  deg C: ");
  Serial.print(degreesC);
  Serial.print("  deg F: ");
  Serial.println(degreesF);
  delay(500);
  
  lcd.print("Temp :");
  lcd.print(" ");
  lcd.print(degreesC);
}

float getVoltage(int pin)
{
  return (analogRead(pin) * 0.004882814);
}
