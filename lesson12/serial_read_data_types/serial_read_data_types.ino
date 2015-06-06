String  person_name;
int person_age;
float person_height;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Please enter your name: ");
  while(0 == Serial.available()) {}
  person_name = Serial.readString();
  
  Serial.println("How old are you? ");
  while(0 == Serial.available()) {}
  person_age = Serial.parseInt();
  
  Serial.println("How tall are you? ");
  while(0 == Serial.available()) {}
  person_height = Serial.parseFloat();
  
  Serial.println("");
  Serial.print("Hello ");
  Serial.print(person_name);
  Serial.print(", you are ");
  Serial.print(person_age);
  Serial.println(" years old,");
  Serial.print("And your are ");
  Serial.print(person_height);
  Serial.println(" feet tall.");
  Serial.println("");
}
