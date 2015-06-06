int pot_pin = A0;
int read_value;
float voltage;

void setup() {
  pinMode(pot_pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  read_value = analogRead(pot_pin);
  voltage = read_value * 5.0 / 1023.0;
  
  Serial.println(voltage);
  
  delay(250);
}
