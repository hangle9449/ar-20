/*
 예제 7.2
 서보모터 구동
*/
 
// 서보모터 라이브러리 불러오기
#include <Servo.h> 

// 서보모터 이름 설정
Servo motor1; 

// 서보 모터 신호핀 설정
int servoMotorPin = 9;




int btn1 = 13;
int btn2 = 12;
// 포텐쇼미터 핀 설정
int potentioMeterPin = 0;

// 모터 각도 변수 설정
int motorAngle;
int motorAngleOld;

void setup() {
  
  // 서보모터 설정. 0.6ms 부터 2.4ms 범위로 설정
  motor1.attach(servoMotorPin,600,2400);
pinMode(btn1, INPUT_PULLUP);
pinMode(btn2, INPUT_PULLUP);



  // 시리얼 통신 설정  
  Serial.begin(9600);
}

void loop() {
  boolean btn1HL = digitalRead(btn1);
  boolean btn2HL = digitalRead(btn2);

  if (btn1 == LOW) {
    stepper.step(stepsPerRev);  // 한 바퀴 회전 명령
  }
  else (btn2 == LOW) {
    stepper.step(-stepsPerRev);  // 반대 방향으로 한 바퀴 회전
  }
 
}
