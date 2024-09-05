int readVal;
float V1;
int readPin = A3;
int R1 = 4700;
int R2;
int dt;
int buzzPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);
  pinMode(buzzPin,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  V1 = (5./1023.)*readVal;

  R2 = R1*V1/(5-V1);
  if(R2<0){
    R2 = 32000;
  }
  Serial.println(R2);
  delay(200);

  dt = (290./32000.)*R2 + 10;
  Serial.print("dt = ");
  Serial.println(dt);

  analogWrite(buzzPin,240);
  delayMicroseconds(1000);
  analogWrite(buzzPin,0);
  delayMicroseconds(1000);

}
