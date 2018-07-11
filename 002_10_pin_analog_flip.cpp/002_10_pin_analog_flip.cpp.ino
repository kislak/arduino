int pin_index = 10;           
int timeout = 20;

void setup() {
  pinMode(pin_index, OUTPUT);
}

void loop() {
  payload();
  analogWrite(pin_index, 0);
  delay(10000);
}

void payload() {
  for(int i=0; i<=100; i++) {
    analogWrite(pin_index, i);
    delay(timeout);
  }
}

