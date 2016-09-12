void setup()
{
  pinMode(A0, INPUT);
  digitalWrite(A0, 1);
  pinMode(A1, INPUT);
  digitalWrite(A1, 1);
  pinMode(A2, INPUT);
  digitalWrite(A2, 1);
}
int x=1;
void loop()
{
  //up:
  if(digitalRead(A0)==0)
  {
    
    PORTB=x;
    delay(300);
    x*=2;
    if(x>8)
    {
      x=1;
      //goto up;
    }
  }
  //down:
  if(digitalRead(A1)==0)
  {
    PORTB=x;
    delay(300);
    x/=2;
    if(x<1)
    {
      x=8;
      //goto down;
    }
  }
  if(digitalRead(A2)==0)
  {
    PORTB=0;
  }
}


