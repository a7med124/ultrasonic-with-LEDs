int echo =11,trig=10;
long d;
long t;
void setup()
{
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
}
void loop()
{
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
t= pulseIn (echo,HIGH);
d=0.0343*(t/2);
if(d>=100)
{digitalWrite(5,1);}
 else{
   digitalWrite(5,0);
}
  if(d>=200)
  {
    digitalWrite(6,1);}
  else{
    digitalWrite(6,0);
  }
    if(d>=300)
  {
      digitalWrite(7,1);}
  else{
    digitalWrite(7,0);
  }
 if(d>=325)
  {
   digitalWrite(8,1);}
  else{
    digitalWrite(8,0);
  }
}
