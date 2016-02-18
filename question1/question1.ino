void setup() {
  Serial.begin(9600);
  pinMode(3 , INPUT);
}

void loop() {
  int last = millis();
  if(millis() - last < 1000){
    int value = analogRead(3);
    Serial.println(millis());
    Serial.println(value);
    Serial.println();
  }
  Serial.println("1 second passed");
  
}
