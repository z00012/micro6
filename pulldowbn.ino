int buttonpin=8;
int ledPin=2;
int buttonState;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(buttonpin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonpin);
  if (buttonState==HIGH){
    digitalWrite(ledPin,HIGH);}
    else{
      digitalWrite(ledPin,LOW);
  }
  

}
