
int reading;
void setup()
{
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(4,INPUT);
}

void loop()
{
 reading=digitalRead(4);
 if(reading==1){
   digitalWrite(3,0);
   digitalWrite(2,1);
  }
 else if(reading==0){
   digitalWrite(2,0);
   digitalWrite(3,0);
  }
}