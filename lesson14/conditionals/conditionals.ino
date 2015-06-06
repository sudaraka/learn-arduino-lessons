int pin_R = 9;
int pin_G = 10;
int pin_B = 11;
int brightness = 64;
String color_choice;


void setup() {
  Serial.begin(9600);
  
  pinMode(pin_R, OUTPUT);
  pinMode(pin_G, OUTPUT);
  pinMode(pin_B, OUTPUT);
}

void loop() {
  Serial.print("Please enter your color choice (red, green, blue): ");
  while(0 == Serial.available()) {}
  color_choice = Serial.readString();
  
  if(color_choice == "red") {
    analogWrite(pin_R, brightness);  
    analogWrite(pin_G, 0);  
    analogWrite(pin_B, 0);
  }  
  else if(color_choice == "green") {
    analogWrite(pin_R, 0);  
    analogWrite(pin_G, brightness);  
    analogWrite(pin_B, 0);
  }
  else if(color_choice == "blue") {
    analogWrite(pin_R, 0);  
    analogWrite(pin_G, 0);  
    analogWrite(pin_B, brightness);
  }
  else {
    analogWrite(pin_R, 0);  
    analogWrite(pin_G, 0);  
    analogWrite(pin_B, 0);
    
    Serial.println("");
    Serial.println("Please enter either red, green or blue");
    Serial.println("");
  }
}
