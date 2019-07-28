
int a=8,c=3,b=7,d=5;
void setup() {
  // put your setup code here, to run once:
pinMode(c,OUTPUT);
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(d,OUTPUT);


}
void s()
{
   digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
}
void forward()
{
   digitalWrite(c,LOW);
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
   digitalWrite(d,HIGH);
}
void rf()
{digitalWrite(c,LOW);
digitalWrite(d,LOW);
 digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  delay(250);
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  delay(250);
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  delay(250);
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  delay(250);
 
   
}
void lb()
{
   digitalWrite(c,HIGH);
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
   digitalWrite(d,HIGH);
  
}
void loop() {
  // put your main code here, to run repeatedly:
  
  s();
  delay(3000);
 forward();
   delay(1500);
   rf();
   forward();
   delay(1000);
   lb();
  
   delay(800);
  }
  
