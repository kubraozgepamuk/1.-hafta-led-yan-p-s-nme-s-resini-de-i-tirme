int led = 4;
int buton =8;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buton, INPUT);

}

void loop() {
  int time = 500;
  digitalWrite(led, HIGH);
  delay(time);
  digitalWrite(led, LOW);
  delay(time);
  if (digitalRead(buton) == LOW){
  time += 250;
  if(time>2000) {
    time=500;
  }
  }


}