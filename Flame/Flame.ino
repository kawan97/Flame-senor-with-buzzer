  
/* Interfacing LDR with Arduino UNO*/

int ldrPin = A0;//Set A0                              (Analog Input) for Flame.
int ledPin = 13; // digital pin 13 

int value=0;
void setup() {
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
}

void loop() 
{
value = analogRead(ldrPin);//Reads the Value of LDR(light).
Serial.println("flame value is :");
Serial.println(value);
if(value>10)
  {
    digitalWrite(ledPin,HIGH);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }
}
