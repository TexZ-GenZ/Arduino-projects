int myNumber;
String msg = "Please Enter Your Number:";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available()==0){

  }
  myNumber = Serial.parseInt();
  Serial.print("Your number is :");
  Serial.println(myNumber);
  delay(500);
}
