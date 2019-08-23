int led = 13;
int ledOne = 12;
int ledTwo = 11;

void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode(ledOne, OUTPUT);
pinMode(ledTwo, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led, HIGH);
digitalWrite(ledOne, LOW);
digitalWrite(ledTwo, HIGH);

delay(2500); //ms
digitalWrite(led, LOW);
digitalWrite(ledOne, HIGH);
digitalWrite(ledTwo, HIGH);

delay(2500); //ms
digitalWrite(led, HIGH);
digitalWrite(ledOne, LOW);
digitalWrite(ledTwo, HIGH);

digitalWrite(ledTwo, HIGH);
}
