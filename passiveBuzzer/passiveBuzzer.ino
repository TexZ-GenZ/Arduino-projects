int buzzPin = 8;
int potPin = A2;
int potVal;
int dt;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin,OUTPUT);
  pinMode(potPin,INPUT);
}

void loop() {
  potVal = analogRead(potPin);
  dt = -(9940./1023.)*potVal + 10000;
  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(dt);
  digitalWrite(buzzPin, LOW);
}
