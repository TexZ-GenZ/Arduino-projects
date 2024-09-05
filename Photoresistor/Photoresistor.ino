int readVal;
float V1;
int readPin = A3;
int R1 = 4700;
int R2;
int dt = 100;
int redPin = 8;
int greenPin = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(A3,INPUT);
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  V1 = (5./1023.)*readVal;

  R2 = R1*V1/(5-V1);
  Serial.println(R2);
  delay(dt);

  if(R2 < 14000 && R2> 0){
    digitalWrite(greenPin,HIGH);
    digitalWrite(redPin,LOW);
  }
  else{
    digitalWrite(greenPin,LOW);
    digitalWrite(redPin,HIGH);   
  }

}
