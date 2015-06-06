int led_red = 8;
int led_green = 10;
int on_time = 250;
int off_time = 250;

void setup() {
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
}

void loop() {
  digitalWrite(led_green, LOW);
  digitalWrite(led_red, HIGH);
  delay(on_time);

  digitalWrite(led_green, HIGH);
  digitalWrite(led_red, LOW);
  delay(off_time);
}
