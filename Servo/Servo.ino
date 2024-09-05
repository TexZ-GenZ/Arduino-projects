#include <Servo.h>
int servoPin = 9;
int servoPos ;
Servo myServo;
int potVal;
int potPin = A3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(servoPin);
  pinMode(potPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  servoPos = (150./1023.)*potVal;
  myServo.write(servoPos);
}
