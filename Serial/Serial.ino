
int time = 1000;

void setup() {
 Serial.begin(9600);
 pinMode(13, OUTPUT);
}

void loop() {
 if(Serial.available())
 {
  int swt = Serial.read();
  if(swt==49)
 {
  digitalWrite(13,1);
  delay(time);
 }
  else
  {
  digitalWrite(13,0);
  delay(time);
 }
 }
}

