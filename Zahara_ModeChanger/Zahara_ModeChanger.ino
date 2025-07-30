// Pin setup
int ldrPin = A0;  // Light sensor
// LED pins
int red1Pin = 4;
int green1Pin = 6;
int blue1Pin = 5;
int yellow1Pin = 7;

void setup() {
  pinMode(red1Pin, OUTPUT);
  pinMode(green1Pin, OUTPUT);
  pinMode(blue1Pin, OUTPUT);
  pinMode(yellow1Pin, OUTPUT);
}

void loop() {
  // Read light level and convert to brightness
  int ldrValue = analogRead(ldrPin);
  int duration = map(ldrValue, 0, 1023, 50, 1500);

  redLed(duration);
  greenLed(duration);
  blueLed(duration);
  yellowLed(duration);

  

}


void redLed(int duration){
for (int i=0; i<=10;i++){
digitalWrite(red1Pin,HIGH);
delay(duration);
digitalWrite(red1Pin,LOW);
delay(duration);
}
}

void greenLed(int duration){
for (int i=0; i<=10;i++){
digitalWrite(green1Pin,HIGH);
delay(duration);
digitalWrite(green1Pin,LOW);
delay(duration);
}
}
void blueLed(int duration){
for (int i=0; i<=10;i++){
digitalWrite(blue1Pin,HIGH);
delay(duration);
digitalWrite(blue1Pin,LOW);
delay(duration);
}
}

void yellowLed(int duration){
for (int i=0; i<=10;i++){
digitalWrite(yellow1Pin,HIGH);
delay(duration);
digitalWrite(yellow1Pin,LOW);
delay(duration);
}
}
