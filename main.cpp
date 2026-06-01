#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

// Pin Definitions
#define IR_SENSOR 23
#define LED_PIN   22
#define BUZZER_PIN 25

int detectionCount = 0;
bool previousState = false;

void setup() {
  pinMode(IR_SENSOR, INPUT);
  pinMode(LED_PIN, OUTPUT);

  Wire.begin(21, 19); // SDA, SCL

  // Buzzer PWM Setup
  ledcAttach(BUZZER_PIN, 1000, 8);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("IR SECURITY");
  lcd.setCursor(0, 1);
  lcd.print("SYSTEM READY");

  delay(2000);
  lcd.clear();
}

void loop() {

  // Most IR sensors output LOW when object detected
  bool objectDetected = (digitalRead(IR_SENSOR) == LOW);

  // Count only once per new detection
  if (objectDetected && !previousState) {
    detectionCount++;
  }

  if (objectDetected) {

    digitalWrite(LED_PIN, HIGH);

    // Siren Sound
    ledcWriteTone(BUZZER_PIN, 1000);
    delay(80);
    ledcWriteTone(BUZZER_PIN, 2000);
    delay(80);

    lcd.setCursor(0, 0);
    lcd.print("ObjectDetected");

    lcd.setCursor(0, 1);
    lcd.print("Count:");
    lcd.print(detectionCount);
    lcd.print("    ");

  } else {

    digitalWrite(LED_PIN, LOW);

    // Stop Buzzer
    ledcWriteTone(BUZZER_PIN, 0);

    lcd.setCursor(0, 0);
    lcd.print("No Object      ");

    lcd.setCursor(0, 1);
    lcd.print("Count:");
    lcd.print(detectionCount);
    lcd.print("    ");
  }

  previousState = objectDetected;
}