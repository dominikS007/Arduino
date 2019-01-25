  GNU nano 3.2                      tempCalc.ino                      
Modified

include <LiquidCrystal.h>
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

                 [ Read 33 lines (Converted from DOS format) ]
^G Get Help  ^O Write Out ^W Where Is  ^K Cut Text  ^J Justify   ^C Cur 
Pos
^X Exit      ^R Read File ^\ Replace   ^U Uncut Text^T To Spell  ^_ Go 
To Line

