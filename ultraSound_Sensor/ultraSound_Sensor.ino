
int trigPin = 10;
int echoPin = 9;
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);

}

void loop() {
  // triger pin low and high to send sound signal
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
}
