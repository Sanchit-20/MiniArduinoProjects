int echopin=10;
int trigpin=9;
float pingtime;
float distance;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigpin,LOW);
delayMicroseconds(2);
digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);

pingtime = pulseIn(echopin,HIGH);
pingtime=pingtime/2;
distance=(0.0342)*pingtime;
Serial.print("Distance : ");
Serial.println(distance);
}
