int greenLed = 9;
int redLed = 6;
int whiteLed = 10;
int i;
int j;
int k;
int greenBlink;
int redBlink;
int whiteBlink;
String green = "The Green Led is Blinking ";
String red =   "The Red   Led is Blinking ";
String white = " The White Led is Blinking ";

void setup() {
  pinMode(greenLed,OUTPUT);
  pinMode(redLed,OUTPUT);
  pinMode(whiteLed,OUTPUT);
  Serial.begin(9600);
  String s1 = "Hello ";
  String s2 = "Coders";
  String s3;
  s3=s1+s2 ;
  Serial.println(s3);

  Serial.println("how many times you want to blink green led ? ");
 while(Serial.available()==0) {}
 greenBlink = Serial.parseInt();

 Serial.println("how many times you want to blink red led ? ");
 while(Serial.available()==0) {}
 redBlink = Serial.parseInt();

 Serial.println("how many times you want to blink white led ? ");
 while(Serial.available()==0) {}
 whiteBlink = Serial.parseInt();
}

void loop() {

 
 Serial.println(green);
 for(i=0;i<=greenBlink;i++)
 { 
   Serial.print("You are on blink # "); 
   Serial.println(i);
   analogWrite(greenLed,1);
   delay(250);
   digitalWrite(greenLed,0);
   delay(250);
 }

 
 Serial.println(red);
 for(j=0;j<=redBlink;j++)
 {
   Serial.print("You are on blink # ");
   Serial.println(j);
   analogWrite(redLed,1);
   delay(250);
   analogWrite(redLed,0);
   delay(250);
 }
 Serial.println(white);
 for(k=0;k<=whiteBlink;k++)
 {
   Serial.print("You are on blink # ");
   Serial.println(k);
   analogWrite(whiteLed,255);
   delay(250);
   analogWrite(whiteLed,0);
   delay(250);
 }
 
}
