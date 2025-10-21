int green = 13;
int yelLOW = 12;
int red = 11;

void setup() {
    pinMode(green,OUTPUT);
    pinMode(yelLOW,OUTPUT);
    pinMode(red,OUTPUT);

}

void loop(){
    // Turning Green Light ON
    digitalWrite(green,HIGH);
    digitalWrite(yelLOW,LOW);
    digitalWrite(red,LOW);
    delay(3000);
    // Turning YELLOW Light ON
    digitalWrite(green,LOW);
    digitalWrite(yelLOW,HIGH);
    digitalWrite(red,LOW);
    delay(1000);
    // Turning RED Light ON
    digitalWrite(green,LOW);
    digitalWrite(yellow,LOW);
    digitalWrite(red,HIGH);
    delay(2000);
}