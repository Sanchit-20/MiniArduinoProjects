int ledpin=13;
int datapin=2;
void setup(){
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
  pinMode(datapin,INPUT);
}
void loop(){
  digitalWrite(13,digitalRead(datapin));
}

