//Christopher Derrell 620068066    Keown White 620052848  Alexander Nicholson 620072062 Travis Smith 620065811 Samorae Campbell 620055968
#define MAX 1000
void setup() {
  Serial.begin(9600);
  pinMode(3 , INPUT);
  pinMode(13 , OUTPUT);//Controls the red LED
  pinMode(12 , OUTPUT);//Controls the green LED
  pinMode(7 , OUTPUT); //Controls the buzzer
}

void loop() {
  long current = millis();//when we started taking readings
  long sum = 0;
  long count = 0;
  while(millis() <= current + 1000){//Get readings for one second
    long value = analogRead(3);
    if(value < MAX/3){
      digitalWrite(13 , HIGH);
    }else{
      digitalWrite(13 , LOW);
    }
    
    if(value > MAX/2){
      digitalWrite(12 , HIGH);
    }else{
      digitalWrite(12 , LOW);
    }
    
    if(value > MAX * (2/3.0)){
      digitalWrite(7 , HIGH);
    }else{
      digitalWrite(7, LOW);
    }
    Serial.print(count+1);
    Serial.print(": ");
    Serial.println(value);
    sum += value;
    count++;
  }
  Serial.print("Average: ");
  Serial.println(sum/count);
}
