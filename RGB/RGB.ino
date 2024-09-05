int red = 8;
int green = 9;
int blue = 10;
String myColor;
String msg = "What Color do you want:";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available() ==0){

  }
  myColor = Serial.readString();

  if(myColor == "red"){
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
    digitalWrite(blue,LOW);
  }
  if(myColor == "green"){
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    digitalWrite(blue,LOW);
  }
  if(myColor == "blue"){
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    digitalWrite(blue,HIGH);
  }
  if(myColor == "off"){
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    digitalWrite(blue,LOW);
  }
  if(myColor == "yellow"){
    digitalWrite(red,HIGH);
    analogWrite(green,200);
    analogWrite(blue,205);
  }


}
