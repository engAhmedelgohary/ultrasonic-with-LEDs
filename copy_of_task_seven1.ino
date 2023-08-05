int trig = 11;
int echo = 4;
int led1=5;
int led2=6;
int led3=7;
int led4=8;
long s,d;
void setup()
{
  Serial.begin(9600);
  for(int i=5; i<=11; i++)
  {
    pinMode(i,OUTPUT);
  }
  
  pinMode(echo, INPUT);

}

void loop() {
digitalWrite(trig, LOW); 
delayMicroseconds(2); 
digitalWrite(trig, HIGH); 
delayMicroseconds(10); 
digitalWrite(trig, LOW);
s = pulseIn(echo, HIGH);
d = (s/2)*0.0343;
Serial.println(d);
delay(5);
   if (d >= 40){digitalWrite(5,HIGH);}
if (d <= 40){digitalWrite(5,LOW);}
if (d >= 60){ digitalWrite(6,HIGH);}
if (d <= 60){digitalWrite(6,LOW);}
if (d >= 80){digitalWrite(7,HIGH);}
if (d <= 80){digitalWrite(7,LOW);}
if (d >= 120){digitalWrite(8,HIGH);}
if (d <= 120){digitalWrite(8,LOW);}
}