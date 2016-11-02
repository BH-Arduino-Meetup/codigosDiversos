const int button = 2;     
const int led =  13;      
int statusButton = 0;         

void setup()
{  
  pinMode(led, OUTPUT);  
  pinMode(button, INPUT);
}

void loop()
{  
  statusButton = digitalRead(button);    
  if (statusButton == HIGH) {    
    digitalWrite(led, HIGH);
  }else{    
    digitalWrite(led, LOW);
  }
}
