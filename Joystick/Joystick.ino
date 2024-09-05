int Xpin= A0;
int Ypin = A1;
int Spin = 2;
int Xval;
int Yval;
int Sval;
int dt = 250;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Xpin,INPUT);
  pinMode(Ypin,INPUT);
  pinMode(Spin,INPUT);
  digitalWrite(Spin,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  Xval = analogRead(Xpin);
  Yval = analogRead(Ypin);
  Sval = digitalRead(Spin);
  delay(dt);
  Serial.print("X Value = ");
  Serial.println(Xval);
  Serial.print("Y Value = ");
  Serial.println(Yval);
  Serial.print("Switch Value = ");
  Serial.println(Sval);
  Serial.println(" ");

}
