// Define pins for the ULN2003 driver
const int IN1 = 8;
const int IN2 = 9;
const int IN3 = 10;
const int IN4 = 11;

void setup() {
  // Set the pins as outputs
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // Example pattern: light up each LED sequentially
  digitalWrite(IN1, HIGH);
  delay(500);
  digitalWrite(IN1, LOW);
  
  digitalWrite(IN2, HIGH);
  delay(500);
  digitalWrite(IN2, LOW);
  
  digitalWrite(IN3, HIGH);
  delay(500);
  digitalWrite(IN3, LOW);
  
  digitalWrite(IN4, HIGH);
  delay(500);
  digitalWrite(IN4, LOW);
}