#include<Servo.h>

Servo myServo;
const int MOTOR = 9;

void setup()
{
  myServo.attach(MOTOR);
  Serial.begin(9600);
}

void loop()
{
  myServo.write(0);
  Serial.println("0 grados");
  delay(2000);
  myServo.write(45);
  Serial.println("45 grados");
  delay(2000);
  myServo.write(90);
  Serial.println("90 grados");
  delay(2000);
  myServo.write(180);
  Serial.println("180 grados");
  delay(2000);
}
