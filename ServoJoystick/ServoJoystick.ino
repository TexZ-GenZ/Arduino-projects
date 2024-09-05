#include <Servo.h>
int servoPin1 = 8;
int servoPin2 = 9;
int servoPos1 ;
int servoPos2 ;
Servo myServo1;
Servo myServo2;
int Xpin = A0;
int Ypin = A1;
int Spin = 2;
int Xval;
int Yval;
int Sval;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo1.attach(servoPin1);
  myServo2.attach(servoPin2);
  pinMode(Xpin,INPUT);
  pinMode(Ypin,INPUT);
  pinMode(Spin,INPUT);
  // digtalWrite(Spin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  Xval = analogRead(Xpin);
  Yval = analogRead(Ypin);
  // Sval = digitalRead(Spin);
  servoPos1 = -(180./1023.)*Xval+180;
  servoPos2 = -(180./1023.)*Yval+180;
  myServo1.write(servoPos1);
  myServo2.write(servoPos2);
}
