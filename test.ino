int ledpin=13;
char state='0';
int flag=0;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
Serial.begin(9600);
digitalWrite(ledpin,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
   //Serial.println("hello");
if(Serial.available()>0)
{
  state=Serial.read();
  Serial.println(state);
  flag=0;
}
if(state=='0')
{
  digitalWrite(ledpin,LOW);
  if(flag==0)
  {
    Serial.println("Led: Off");
    flag=1;
  }
}
else if(state=='1')
{
  digitalWrite(ledpin,HIGH);
  if(flag==0)
  {
    Serial.println("Led: On");
    flag=1;
  }
}
}
