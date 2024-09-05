int LedPin = 8;
int buttonPin = 12;
int buttonRead;
int dt = 250;
int toggleState = 0;
int prev = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LedPin,OUTPUT);
  pinMode(buttonPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  buttonRead = digitalRead(buttonPin);

  if(prev == 0 && buttonRead == 1){

    if(toggleState == 0){
    digitalWrite(LedPin,HIGH);
    toggleState = 1;
    }
    else{
      digitalWrite(LedPin,LOW);
      toggleState = 0;
    }
  }
  
  prev = buttonRead;

}
