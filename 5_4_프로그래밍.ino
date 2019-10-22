int redLED = 9;
int yellowLED = 10;
int greenLED = 11;
int i;
void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  for(i = 0;i < 256; i++){
    analogWrite(redLED, i);
    delay(10);    
  }  
  for(i = 255;i > 0; i--){
    analogWrite(redLED, i);
    delay(10);    
  }  
  for(i = 0;i < 256; i++){
    analogWrite(yellowLED, i);
    delay(10);    
  }  
  for(i = 255;i > 0; i--){
    analogWrite(yellowLED, i);
    delay(10);    
  }
  for(i = 0;i < 256; i++){
    analogWrite(greenLED, i);
    delay(10);    
  }  
  for(i = 255;i > 0; i--){
    analogWrite(greenLED, i);
    delay(10);    
  }  
  delay(2000);
}
