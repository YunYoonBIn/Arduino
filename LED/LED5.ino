
 int LED1 = 13 ;
 int LED2 = 12 ;
 int LED3 = 11 ;
 int LED4 = 10 ;
 int LED5 = 9 ;
 
 int time = 200;

void setup() {
  // initialize the digital pin as an output.
  for(int i = 13; i > 8; i--)
  {
   pinMode(i,OUTPUT);
  }
}
   
void loop() {
    for(int i = 13; i > 8; i--)
  {
  digitalWrite(i, HIGH);
  delay(time);               
  }           
             
  for(int i = 9; i < 14; i++) 
  {  
  digitalWrite(i, LOW); 
  delay(time);               
 }

}
