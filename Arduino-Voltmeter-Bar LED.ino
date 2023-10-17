//#include <LiquidCrystal.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int analogPin = A0;
float analogValue;
float input_voltage;

void setup()
{
  Serial.begin(9600);     //  opens serial port, sets data rate to 9600 bps
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  lcd.init();
  // set up the LCD's number of columns and rows:
  lcd.backlight();      //// set up the LCD's number of columns and rows:
}
void LED_function(int stage)
{
  for (int j = 2; j <= 11; j++)
  {
    digitalWrite(j, LOW);
  }
  for (int i = 1, l = 2; i <= stage; i++, l++)
  {
    digitalWrite(l, HIGH);
    //delay(30);
  }

}
void loop()
{
  //  Conversion formula for voltage
  analogValue = analogRead (A0);
  //Serial.println(analogValue);
  delay (1000);
  input_voltage = (analogValue * 5.0) / 1024.0;
  lcd.setCursor(0, 1);
  lcd.print("Voltage= ");
  lcd.print(input_voltage);
  Serial.println(input_voltage);
  delay(100);

  if (input_voltage < 0.50 && input_voltage >= 0.00 )
  {
    digitalWrite(2, HIGH);
  }
  else if (input_voltage < 1.00 && input_voltage >= 0.50)
  {
    LED_function(2);
  }
  else if (input_voltage < 1.50 && input_voltage >= 1.00)
  {
    LED_function(3);
  }
  else if (input_voltage < 2.00 && input_voltage >= 1.50)
  {
    LED_function(4);
  }
  else if (input_voltage < 2.50 && input_voltage >= 2.00)
  {
    LED_function(5);
  }
  else if (input_voltage < 3.00 && input_voltage >= 2.50)
  {
    LED_function(6);
  }
  else if (input_voltage < 3.50 && input_voltage >= 3.00)
  {
    LED_function(7);
  }
  else if (input_voltage < 4.00 && input_voltage >= 3.50)
  {
    LED_function(8);
  }
  else if (input_voltage < 4.50 && input_voltage >= 4.00)
  {
    LED_function(9);
  }
  else if (input_voltage < 5.00 && input_voltage >= 4.50)
  {
    LED_function(10);
  }

}
