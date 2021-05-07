
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
float tempC;
int tempPin = 0;

void setup() {

  lcd.begin(16, 2);
  lcd.print("Temperature is:");
}

void loop() {
  tempC = analogRead(tempPin);

  tempC = (5.0 * tempC * 100.0) / 1024.0;
  lcd.setCursor(0, 1);
  lcd.print(tempC);
  lcd.print(" Celsius");
  delay(5000);
}
