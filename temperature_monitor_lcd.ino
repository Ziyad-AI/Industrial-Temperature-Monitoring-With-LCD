#include <LiquidCrystal.h>

// LCD Pin Setup (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int tempPin = A0;
const int buzzerPin = 8;

float maxTemperature = 45.0;

void setup() {
  lcd.begin(16, 2);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);

  lcd.print("Temp Monitor");
  delay(2000);
  lcd.clear();
}

void loop() {
  int sensorValue = analogRead(tempPin);
  float voltage = sensorValue * (5.0 / 1023.0);
  float temperature = voltage * 100;  // LM35 conversion

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print(" C   ");

  if (temperature > maxTemperature) {
    digitalWrite(buzzerPin, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("WARNING!        ");
  } else {
    digitalWrite(buzzerPin, LOW);
    lcd.setCursor(0, 1);
    lcd.print("Normal          ");
  }

  delay(1000);
}
