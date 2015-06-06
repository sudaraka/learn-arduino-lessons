int led_red = 8;
int led_green = 10;
int red_on_time = 100;
int red_off_time = 500;
int green_on_time = 500;
int green_off_time = 500;
int green_count = 4;
int red_count = 2;
String redMsg = "Red LED is blinking";
String greenMsg = "Green LED is blinking";

void setup() {
  String welcomeMsg1 = "Welcome to ";
  String welcomeMsg2 = "my program";
  
  Serial.begin(9600);
  Serial.println(welcomeMsg1);
  
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
}

void loop() { 
  int count;
  
  Serial.println(greenMsg);
  
  for(count = 0; count < green_count; count += 1) {
    Serial.print("  You are on blink #: ");
    Serial.println(count + 1);
    
    digitalWrite(led_green, HIGH);
    delay(red_on_time);
    digitalWrite(led_green, LOW);
    delay(red_off_time);
  }
  
  Serial.println(" ");
  Serial.println(redMsg);

  for(count = 0; count < red_count; count += 1) {
    Serial.print("  You are on blink #: ");
    Serial.println(count + 1);
    
    digitalWrite(led_red, HIGH);
    delay(green_on_time);
    digitalWrite(led_red, LOW);
    delay(green_off_time);
  }
  
  Serial.println(" ");  
}
