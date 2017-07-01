int ledpin=8;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);

}

void loop() {
 digitalWrite(ledpin,HIGH);
 delay(500);
 digitalWrite(ledpin,LOW);
 delay(500);
}
