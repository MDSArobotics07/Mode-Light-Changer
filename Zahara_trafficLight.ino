const int LED2 = 6;
const int LED1 = 7;
const int LED3 = 5;

void setup(){
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
}

void loop(){
digitalWrite(LED1, HIGH);
delay(5000);
digitalWrite(LED1, LOW);
delay(200);
  
digitalWrite(LED2, HIGH);
delay(2000);
digitalWrite(LED2, LOW);
delay(200);
  
digitalWrite(LED3, HIGH);
delay(5000);
digitalWrite(LED3, LOW);
delay(200);
}
