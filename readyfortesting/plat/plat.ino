int a=8,c=3,b=7,d=5;
int count=0;
void setup() {
  // put your setup code here, to run once:
pinMode(c,OUTPUT);
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(d,OUTPUT);



}
void s(int n)
{
   digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  delay(n);
}
void forward(int n)
{
   digitalWrite(c,LOW);
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
   digitalWrite(d,HIGH);
delay(n);
}
void rf(int n)
{digitalWrite(c,LOW);
digitalWrite(d,LOW);
 digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  delay(n);
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  delay(n);
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  delay(n);
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  delay(n);
 
   
}

void lb(int n)
{
   digitalWrite(c,HIGH);
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
   digitalWrite(d,HIGH);
   delay(n);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<5;i++)
  {
    if(count==0)
    s(5000);

    count=1;

    forward(1000);
    rf(200);
    forward(800);

    lb(700);
  }

  forward(500);
for(int i=0;i<5;i++)
  rf(200);
 for(int i=0;i<3;i++)
 { 
  forward(1000);
  rf(250);
  forward(1000);
  lb(700);
 }
 
 for(;;)
 s(10000); 

}
