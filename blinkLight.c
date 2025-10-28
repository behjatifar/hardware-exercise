int green = 13;
int yellow = 12;
int red = 11;
int btn = 7;
void setuo() {
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(btn,OUTPUT);
  
}

void loop() {
  while(digitalRead(b) == LOW)
  {
    digitalWrite(green,LOW);
    digitalWrite(yellow,LOW);
    digitalWrite(red,HIGH);
  }
  digitalWrite(green,HIGH);
  digitalWrite(yellow,low);
  digitalWrite(red,LOW);
  delay(100);
  digitalWrite(green,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(red,LOW);
}
