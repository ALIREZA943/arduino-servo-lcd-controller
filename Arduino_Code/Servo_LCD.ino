#include <Servo.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Create servo and LCD objects
Servo myServo;
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Pin definitions
const int potPin = A0;
const int servoPin = 9;

void setup() {
  // Attach the servo motor to the specified pin
  myServo.attach(servoPin);

  // Initialize the LCD
  lcd.init();
  lcd.backlight();
  lcd.clear();
}

void loop() {
  // Read the analog value from the potentiometer
  int sensorValue = analogRead(potPin);

  // Convert the ADC value to voltage (0–5V)
  float voltage = sensorValue * (5.0 / 1023.0);

  // Map the potentiometer value to the servo angle (0°–180°)
  int angle = map(sensorValue, 0, 1023, 0, 180);

  // Rotate the servo to the calculated angle
  myServo.write(angle);

  // Display the input voltage on the first LCD line
  lcd.setCursor(0, 0);
  lcd.print("Volt: ");
  lcd.print(voltage, 2);
  lcd.print(" V ");

  // Display the servo angle on the second LCD line
  lcd.setCursor(0, 1);
  lcd.print("Angle: ");
  lcd.print(angle);
  lcd.print((char)223);   // Degree symbol
  lcd.print("   ");       // Clear remaining characters

  // Refresh every 100 ms
  delay(100);
}
