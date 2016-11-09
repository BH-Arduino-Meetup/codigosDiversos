const int button = 2;     
const int led =  13;      
int statusButton = 0;

void setup()  
{ 
  pinMode(13, OUTPUT);  
  Serial.begin(9600);
}
void loop() 
{
    statusButton = digitalRead(button);    
    if (statusButton == HIGH)
    {   
       digitalWrite(led,HIGH);            
       Serial.println("SILENCIE;");    
       delay(1000);
    }else{
      digitalWrite(led,LOW);     
    }     
}   