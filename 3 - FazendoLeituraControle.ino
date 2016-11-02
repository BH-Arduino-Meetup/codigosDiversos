#include <IRremote.h>
int leitorControle = 7; 
String leituraControle;
IRrecv irrecv(leitorControle);
decode_results results;

void setup()  
{      
  irrecv.enableIRIn();  
  Serial.begin(9600);
}  
void dump(decode_results *results)
{
  
  if(results->bits > 0)
  {
      leituraControle =  String(results->value, HEX);      
      Serial.println(leituraControle);      
  }
}   
void loop()  
{  
  if (irrecv.decode(&results)) 
  {
      dump(&results);
      irrecv.resume(); 
  }    
} 