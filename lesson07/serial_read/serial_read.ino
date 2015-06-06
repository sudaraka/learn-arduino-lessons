int led_red = 8;
int led_green = 10;
int red_on_time = 100;
int red_off_time = 500;
int green_on_time = 500;
int green_off_time = 500;
int green_count;
int red_count;
String redMsg = "Red LED is blinking";
String greenMsg = "Green LED is blinking";

void setup() {
  String welcomeMsg1 = "Welcome to ";
  String welcomeMsg2 = "my program";
  
  Serial.begin(9600);
  Serial.println(welcomeMsg1);
  
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
  
  Serial.println("How many times do you want the Red LED to blink? ");
  while(0 == Serial.available()) {}  // Wait for user input
  
  red_count = Serial.parseInt();
  
  Serial.println("How many times do you want the Green LED to blink? ");
  while(0 == Serial.available()) {}  // Wait for user input
  
  green_count = Serial.parseInt();
}

void loop() { 
  int count = 0;
  
  while(count < green_count) {
    digitalWrite(led_green, HIGH);
    delay(red_on_time);
    digitalWrite(led_green, LOW);
    delay(red_off_time);
    
    count += 1;
  }
  
  for(count = 0; count < red_count; count += 1) {
    digitalWrite(led_red, HIGH);
    delay(green_on_time);
    digitalWrite(led_red, LOW);
    delay(green_off_time);
  }
  
  Serial.println(" ");  
}
