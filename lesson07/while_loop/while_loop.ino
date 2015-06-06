
void setup() {
  Serial.begin(9600);
}

void loop() { 
  int count = 5;
  
  while(27 > count) {
    Serial.print("You are on loop number ");
    Serial.println(count);
    
    delay(250);
    
    count += 3;
  }
  
  Serial.println(" ");  
}
