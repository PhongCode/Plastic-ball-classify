#include <Servo.h>
Servo myservo_01; 

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myservo_01.attach(3);
myservo_01.write(0);
pinMode(13, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available())
{
  switch(Serial.read())
  {
  case '1':
  myservo_01.write(90);
  delay(2000);
  myservo_01.write(0);
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(100);
  break;
  case '2':
  myservo_01.write(90);
  delay(2000);
  myservo_01.write(0);
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(100);
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(100);
  break;
  case '3':
  myservo_01.write(90);
  delay(2000);
  myservo_01.write(0);
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(100);
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(100);
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(100);
  break;
  case '4':
  myservo_01.write(90);
  delay(2000);
  myservo_01.write(0);
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(100);
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(100);
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(100);
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(100);
  break;
  case '5':
  myservo_01.write(90);
  delay(2000);
  myservo_01.write(0);
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(100);
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(100);
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(100);
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(100);
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(100);
  break;
}
}
}
