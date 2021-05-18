int flame = A0;
int buzzer = 7;
int val;
void setup() {
  pinMode(flame, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(flame);
  Serial.println(val);
  delay(500);
  if(val <= 900){
    digitalWrite(buzzer, HIGH);
    }
  else{
    digitalWrite(buzzer, LOW);
    }
}
