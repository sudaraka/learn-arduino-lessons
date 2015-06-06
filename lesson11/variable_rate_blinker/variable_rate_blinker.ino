int led_pin = 9;
int pot_pin = A0;
int read_value;
float blink_delay = 100;

void setup() {
  pinMode(pot_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  
  //Serial.begin(9600);
}

void loop() {
  read_value = analogRead(pot_pin);
  blink_delay = convert_delay_scale(read_value);
  
  //Serial.println(blink_delay);
  
  digitalWrite(led_pin, HIGH);
  delay(blink_delay);
  
  digitalWrite(led_pin, LOW);
  delay(blink_delay);
}

float convert_delay_scale(int in_value) {
  /**
   * Analog Read: 0V = 0, 5V = 1023
   */
  float _delay = in_value * 900.0 / 1023.0;
  
  return _delay + 100;
}
