void setup() {
  Serial.begin(9600);
  pinMode(3 , INPUT);
}

void loop() {
  int current = millis();
  int sum = 0;
  int count = 0;
  while(millis() < current + 1000){
    int value = analogRead(3);
    Serial.print(value);
    sum += value;
    count++;
  }
  Serial.print(sum/count);
}
