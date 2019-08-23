/*#include<Servo.h>
//ultra sound sensor
int trigPin = 7;
int echoPin = 9;
long duration;
int distance;
//servo motor
int servoPin = 6;
Servo servo;

void setup() {
  // put your setup code here, to run once:
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);
servo.attach(servoPin); //servo motor
}

void loop() {
  // triger pin low and high to send sound signal - toggle
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  //waits until echoPin is high
  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  
  //servo motor
if(distance>50){
   servo.write(180);
  }else
  {
    servo.write(0);
  }

}
*/
