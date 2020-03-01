// LED 변수 선언
int redLED = 12;
int yellowLED = 13;
// 사용 버튼 변수 선언
int redButton = 2;
int yellowButton = 3; 

void setup() {
  pinMode(redLED, OUTPUT); // 해당 핀들의 입, 출력 설정
  pinMode(yellowLED, OUTPUT);
  pinMode(redButton, INPUT);
  pinMode(yellowButton, INPUT);
}

void loop() {
  // 빨강색 버튼에 대한 조작 체크
  if(digitalRead(redButton) == HIGH) {
    digitalWrite(redLED, HIGH);    
  }
  else {
    digitalWrite(redLED, LOW);    
  }
  // 노란색 버튼에 대한 조작 체크
  if(digitalRead(yellowButton) == HIGH) {
    digitalWrite(yellowLED, HIGH);    
  }
  else {
    digitalWrite(yellowLED, LOW);    
  }  
}
