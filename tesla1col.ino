float val=0,x=0;


void setup() {
  // put your setup code here, to run once:
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
pinMode(A0,INPUT);
Serial.begin(9600);


}
void func1()
{
  digitalWrite(0,HIGH);
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
delay(3000);
digitalWrite(0,LOW);
delay(470);
digitalWrite(1,LOW);
delay(470);
digitalWrite(2,LOW);
delay(470);
digitalWrite(3,LOW);
delay(470);
digitalWrite(4,LOW);
delay(470);
digitalWrite(5,LOW);
delay(470);
digitalWrite(6,LOW);
delay(470);
digitalWrite(7,LOW);
delay(470);
digitalWrite(8,LOW);
delay(470);
digitalWrite(9,LOW);
delay(470);
digitalWrite(10,LOW);
delay(470);
digitalWrite(11,LOW);
delay(470);
digitalWrite(11,HIGH);
delay(470);
digitalWrite(10,HIGH);
delay(470);
digitalWrite(9,HIGH);
delay(470);
digitalWrite(8,HIGH);
delay(470);
digitalWrite(7,HIGH);
delay(470);
digitalWrite(6,HIGH);
delay(470);
delay(5170);
delay(3000);
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);


}
void raindrop1()
{
  digitalWrite(0,HIGH);
  delay(870);
  digitalWrite(1,HIGH);
  delay(870);
  digitalWrite(2,HIGH);
  digitalWrite(0,LOW);
  delay(870);
  digitalWrite(3,HIGH);
  digitalWrite(1,LOW);
  digitalWrite(9,HIGH);
  delay(870);
  digitalWrite(4,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(10,HIGH);
  delay(870);
  digitalWrite(3,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(9,LOW);
  delay(870);
  digitalWrite(4,LOW);
  digitalWrite(10,LOW);
  delay(870);
  digitalWrite(11,LOW);
  delay(370);
}

float music( float a)
{
  if(a>20.0)
   {
    digitalWrite(11,HIGH);
    if(a>=45.0)
    digitalWrite(10,HIGH);
    else
    digitalWrite(10,LOW);
    if(a>=75.0)
    digitalWrite(9,HIGH);
    else
    digitalWrite(9,LOW);
    if(a>=110.0)
    digitalWrite(8,HIGH);
    else
    digitalWrite(8,LOW);
    if(a>=185.0)
    digitalWrite(7,HIGH);
    else
    digitalWrite(7,LOW);
    if(a>=275.0)
    digitalWrite(6,HIGH);
    else
    digitalWrite(6,LOW);   
    if(a>=365.0)
    digitalWrite(5,HIGH);
    else
    digitalWrite(5,LOW);
    if(a>=495.0)
    digitalWrite(4,HIGH);
    else
    digitalWrite(4,LOW); 
    if(a>=615.0)
    digitalWrite(3,HIGH);
    else
    digitalWrite(3,LOW);
    if(a>=785.0)
    digitalWrite(2,HIGH);
    else
    digitalWrite(2,LOW);
    if(a>=925.0)
    digitalWrite(1,HIGH);
    else
    digitalWrite(1,LOW);
    if(a>=1015.0)
    digitalWrite(0,HIGH);
    else
    digitalWrite(0,LOW);
   }
  
}
void electrical()
{
  digitalWrite(0,HIGH);
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(870);
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(870);
  delay(870);
}
void loop() {
  // put your main code here, to run repeatedly:
val =analogRead(0);
  Serial.println(x);
  x=map(val,35,900,0,1024);
  if(x>20.0)
  {
    music(x);
  }
}
