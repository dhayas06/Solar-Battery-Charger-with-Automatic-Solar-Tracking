#include <Servo.h>

// Create servo object
Servo sg90;

// LDR Pins
const int LDR1 = A0;
const int LDR2 = A1;

// Servo Pin
const int servoPin = 4;

// Variables
int servoPosition = 90;   // Initial servo position
const int error = 5;      // Minimum difference to move servo

void setup()
{
  Serial.begin(9600);

  pinMode(LDR1, INPUT);
  pinMode(LDR2, INPUT);

  sg90.attach(servoPin);
  sg90.write(servoPosition);

  delay(1000);
}

void loop()
{
  // Read LDR values
  int sensorLeft = analogRead(LDR1);
  int sensorRight = analogRead(LDR2);

  // Print values to Serial Monitor
  Serial.print("LDR1: ");
  Serial.print(sensorLeft);
  Serial.print("    LDR2: ");
  Serial.println(sensorRight);

  // Calculate difference
  int diff = abs(sensorLeft - sensorRight);

  // Move servo only if difference is greater than error
  if (diff > error)
  {
    // Left LDR receives more light
    if (sensorLeft > sensorRight && servoPosition > 0)
    {
      servoPosition--;
    }

    // Right LDR receives more light
    else if (sensorRight > sensorLeft && servoPosition < 180)
    {
      servoPosition++;
    }

    // Move servo
    sg90.write(servoPosition);
  }

  delay(20);
}