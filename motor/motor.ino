void setup() {
  pinMode(3 , OUTPUT);
}

void moveClockwise(){
  analogWrite(3 , 127);
}

void moveCounterClockwise(){
  analogWrite(3, 200);
}
void loop() {
  moveClockwise();
  delay(500);
  moveCounterClockwise();
  delay(1000);
  analogWrite(3 , 0);
  delay(2000);
  
}
