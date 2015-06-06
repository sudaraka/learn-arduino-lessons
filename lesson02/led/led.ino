int led_red = 8;
int led_green = 10;
int on_time = 10;
int off_time = 2000;
boolean its_on = false;

void setup() {
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
}

void loop() {
  digitalWrite(led_red, HIGH);
  delay(on_time);
  digitalWrite(led_red, LOW);
  delay(off_time);
  
  if(its_on) {
    digitalWrite(led_green, LOW);
  }
  else {
    digitalWrite(led_green, HIGH);
  }
  
  its_on = !its_on;
}
