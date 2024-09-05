int tiltPin = 2;
int tiltVal;
int green = 8;
int red = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(tiltPin,INPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  digitalWrite(tiltPin,HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  tiltVal = digitalRead(tiltPin);
  Serial.println(tiltVal);
  if(tiltVal == 0){
    digitalWrite(green,HIGH);
    digitalWrite(red,LOW);
  }
  else{
    digitalWrite(green,LOW);
    digitalWrite(red,LOW);
  }
}
