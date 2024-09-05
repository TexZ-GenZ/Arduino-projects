int readPin = A2;
int bluePin = 9;
int readVal;
float V2;
int dt = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  V2= (5./1023.)*readVal;
  if(V2 > 4 || V2<1){
    digitalWrite(bluePin,HIGH);
  }
  else{
    digitalWrite(bluePin,LOW);
  }
  Serial.println(V2);
  delay(dt);
}
