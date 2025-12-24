int buzzer=3;
int redLed = 9;
int greenLed = 10;
int blueLed = 11;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
}

void loop() {
  digitalWrite(buzzer,HIGH);
  for(int i = 10; i <= 255;i+=5){
    analogWrite(redLed, i);
    delay(50);
  }
  for(int i = 255;i>=10;i-=5)
    {
      analogWrite(redLed,i);
      delay(50);
    }
    for(int i = 10; i <= 255;i+=5){
    analogWrite(greenLed, i);
    delay(50);
  }
  for(int i = 255;i>=10;i-=5)
    {
      analogWrite(greenLed,i);
      delay(50);
    }
  
  for(int i = 10; i <= 255;i+=5){
    analogWrite(blueLed, i);
    delay(50);
  }
  for(int i = 255;i>=10;i-=5)
    {
      analogWrite(blueLed,i);
      delay(50);
    }
  delay(500);
}
