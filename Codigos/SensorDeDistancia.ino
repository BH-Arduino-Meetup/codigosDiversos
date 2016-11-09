const int trig = 12;
const int echo = 13;
const int led = 8; 

void setup ()
{
 Serial.begin(9600);
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
  unsigned long duracao = pulseIn(echo,HIGH);
  int distancia = duracao / 58; 
  Serial.print("Distância em centimetros");
  Serial.println(distancia);  
  
  if(distancia < 50)      
    digitalWrite(led,HIGH);    
  else
    digitalWrite(led,LOW);         
     
}