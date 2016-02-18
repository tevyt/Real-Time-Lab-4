void setup() {
  pinMode(3 , OUTPUT);
}

void moveClockwise(){
  analogWrite(3 , 127);
}

void moveCounterClockwise(){
  analogWrite(3, 200);
}

void halt(){
  analogWrite(3 , 0);
  delay(200);
}

void state1(){
  moveClockwise();
  delay(50);
}

void state2(){
  moveCounterClockwise();
  delay(100);
}

void state3(){
  moveCounterClockwise();
  delay(50);
}

void state4(){
 moveClockwise();
 delay(100);
}

void loop() {
  state1();
  halt();
  state2();
  halt();
  state3();
  halt();
  state4();
  halt();
}
