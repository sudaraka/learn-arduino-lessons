int led_pin = 9;
int pot_pin = A0;
int read_value;
float write_value;

void setup() {
  pinMode(pot_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  
  //Serial.begin(9600);
}

void loop() {
  read_value = analogRead(pot_pin);
  write_value = convert_voltage_scale(read_value);
  
  //Serial.println(write_value);
  
  analogWrite(led_pin, write_value);
  
  delay(250);
}

float convert_voltage_scale(int in_value) {
  /**
   * Analog Read: 0V = 0, 5V = 1023
   * Analog Write: 0V = 0, 5V = 255
   */
  float voltage = in_value * 5.0 / 1023.0;
  
  return voltage * 51;
}
