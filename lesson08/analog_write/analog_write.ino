int led_red = 8;
int led_green = 10;
int red_on_time = 250;
int red_off_time = 250;
int green_on_time = 250;
int green_off_time = 250;
int green_count;
int red_count;

void setup() {
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);

  red_count = 3;
  
  green_count = 3;
}

void loop() { 
  int count = 0;
  
  while(count < green_count) {
    analogWrite(led_green, 1);
    delay(red_on_time);
    analogWrite(led_green, 0);
    delay(red_off_time);
    
    count += 1;
  }
  
  for(count = 0; count < red_count; count += 1) {
    analogWrite(led_red, 128);
    delay(green_on_time);
    analogWrite(led_red, 0);
    delay(green_off_time);
  }
}
