const int led = 13; 
void setup ()
{
   // Este exemplo não necessita de nenhum setup 
}
void loop()
{
    digitalWrite(led,HIGH);
    delay(500);
    digitalWrite(led,LOW);
    delay(500);    
}