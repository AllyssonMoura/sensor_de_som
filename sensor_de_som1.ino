void setup(){
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  digitalWrite(4, LOW);
}

bool estadoLed = LOW;

void loop(){
  if(digitalRead(3) == LOW){
  	estadoLed == !estadoLed;
  	digitalWrite(4, estadoLed);
  	delay(1000);
  }
}