//www.elegoo.com
//2016.12.08
#define buzzer 12 

void setup()
{
  pinMode(buzzer,OUTPUT);
}
void loop()
{
  unsigned char i;
  while(1)
  {
   //output an frequency
    for(i=0;i<80;i++)
    {
      digitalWrite(buzzer,HIGH);
      delay(1);//wait for 1ms
      digitalWrite(buzzer,LOW);
      delay(1);//wait for 1ms
    }
    //output another frequency
    for(i=0;i<50;i++)
    {
        digitalWrite(buzzer,HIGH);
        delay(2);//wait for 2ms
        digitalWrite(buzzer,LOW);
        delay(2);//wait for 2ms
    }
  }
} 