int pin_R = 9;
int pin_G = 10;
int pin_B = 11;
int color_delay = 1000;
int full_bright = 255;
int half_bright = 128;

void setup() {
  pinMode(pin_R, OUTPUT);
  pinMode(pin_G, OUTPUT);
  pinMode(pin_B, OUTPUT);
}

void loop() {
  // Red
  analogWrite(pin_R, full_bright);  
  analogWrite(pin_G, 0);  
  analogWrite(pin_B, 0);
  delay(color_delay);  
  
  // Green
  analogWrite(pin_R, 0);  
  analogWrite(pin_G, full_bright);  
  analogWrite(pin_B, 0);
  delay(color_delay);  
  
  // Blue
  analogWrite(pin_R, 0);  
  analogWrite(pin_G, 0);  
  analogWrite(pin_B, full_bright);
  delay(color_delay);  
  
  // Cyan
  analogWrite(pin_R, 0);  
  analogWrite(pin_G, full_bright);  
  analogWrite(pin_B, full_bright);
  delay(color_delay);  
  
  // Magenta
  analogWrite(pin_R, full_bright);  
  analogWrite(pin_G, 0);  
  analogWrite(pin_B, full_bright);
  delay(color_delay);  
  
  // Yellow
  analogWrite(pin_R, full_bright);  
  analogWrite(pin_G, full_bright);  
  analogWrite(pin_B, 0);
  delay(color_delay);  
  
  // Purple
  analogWrite(pin_R, half_bright);  
  analogWrite(pin_G, 0);  
  analogWrite(pin_B, half_bright);
  delay(color_delay);  
  
  // Pink
  analogWrite(pin_R, full_bright);  
  analogWrite(pin_G, 192);  
  analogWrite(pin_B, 203);
  delay(color_delay);  
  
  // Orange
  analogWrite(pin_R, full_bright);  
  analogWrite(pin_G, 165);  
  analogWrite(pin_B, 0);
  delay(color_delay);  
}
