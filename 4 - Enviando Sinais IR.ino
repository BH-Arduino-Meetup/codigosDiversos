#include <IRremote.h>
IRsend irsend;
int inPin = 3a;
const int button = 2;     
const int led =  13;      
int statusButton = 0;

void setup()  
{ 
  pinMode(13, OUTPUT);  
  Serial.begin(9600);
  pinMode(inPin, INPUT);  
}
void loop() 
{
    statusButton = digitalRead(button);    
    if (statusButton == HIGH)
    {   
       digitalWrite(led,HIGH);  
       irsend.sendNEC(0x20DF10EF, 32);          
       delay(200);
    }else{
      digitalWrite(led,LOW);     
    }     
}    
