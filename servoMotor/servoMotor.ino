#include<Servo.h>
int servoPin = 6;

Servo servo;

void setup() {
  
  servo.attach(servoPin);
}

void loop() {
  servo.write(90);
  delay(2000);
  servo.write(45);
  delay(2000);
  servo.write(180);
  delay(4000);
  servo.write(0);
  delay(4000);

}
