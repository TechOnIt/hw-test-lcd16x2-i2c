#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define SDA_PIN 5
#define SCL_PIN 18

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
    Wire.begin(SDA_PIN, SCL_PIN);

    lcd.begin(16, 2);
    lcd.backlight();

    lcd.setCursor(0, 0);
    lcd.print("Hum:  33.4%");

    lcd.setCursor(0, 1);
    lcd.print("Temp: 27.1 c");
}

void loop()
{
}