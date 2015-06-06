int pin = 13;
int blink_delay1 = 900;
int blink_delay2 = 100;

void setup() {
  pinMode(pin, OUTPUT);
}

void loop() {
  digitalWrite(pin, HIGH);
  delay(blink_delay2);
  digitalWrite(pin, LOW);
  delay(blink_delay2);
}
