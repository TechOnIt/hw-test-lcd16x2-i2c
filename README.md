# LCD I2C Test (ESP32 + 16x2 LCD)

A simple test project for a 16x2 character LCD with an I2C interface using ESP32.

<p align="center">
  <img width="500" height="413" alt="1602-16x2-lcd-iici2ctwispi-serial-interface-module" src="https://github.com/user-attachments/assets/ba3e3db1-4cf2-4b36-abaa-9934a98da10b" />
</p>

## Hardware

### Wiring

| LCD I2C | ESP32   |
| ------- | ------- |
| VCC     | 5V      |
| GND     | GND     |
| SDA     | GPIO 5  |
| SCL     | GPIO 18 |

> Make sure ESP32 GND and LCD power supply GND are connected together.

## Dependencies

Required library:

```ini
lib_deps =
    marcoschwartz/LiquidCrystal_I2C
```

## I2C Address

Current LCD I2C address:

```
0x27
```

If the display does not show anything, run an I2C scanner first to find the correct address.

## Display Output

This test displays fixed sensor-like values:

```
Hum:  33.4%
Temp: 27.1 c
```

## Notes

* The LCD size is **16x2**, so each row can display a maximum of 16 characters.
* Longer messages require scrolling or splitting the text into multiple lines.
* `Wire.begin()` must be called with the correct SDA and SCL pins before initializing the LCD.

## Troubleshooting

If the LCD backlight is on but no text is visible:

1. Adjust the contrast potentiometer on the back of the I2C module.
2. Verify the I2C address (`0x27`).
3. Check SDA, SCL, and common GND connections.
4. Make sure the LCD is powered with 5V.
