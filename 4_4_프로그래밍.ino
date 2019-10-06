int redLED = 11;
int yellowLED = 12;
int greenLED = 13;

void setup() {
  pinMode(redLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
}

void loop() {
  digitalWrite(redLED,HIGH);
  delay(5000);
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, HIGH);
  delay(500);
  digitalWrite(yellowLED, LOW);
  delay(500);
  digitalWrite(yellowLED, HIGH);
  delay(500);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, HIGH);
  delay(7000);
}
