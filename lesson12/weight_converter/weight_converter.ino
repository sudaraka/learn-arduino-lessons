String  person_name;
float weight;

void setup() {
  Serial.begin(9600);
}

void loop() {
  float w_pounds, w_ounces, w_grams, w_carats;
  
  Serial.println("Please enter your name: ");
  while(0 == Serial.available()) {}
  person_name = Serial.readString();
  
  Serial.println("How much do you weight in Kilo grams? ");
  while(0 == Serial.available()) {}
  weight = Serial.parseFloat();
  
  w_grams = weight * 1000;
  w_ounces = weight * 35.274;
  w_pounds = weight * 2.202643172;
  w_carats = weight * 5000;
  
  Serial.println("");
  Serial.print("Hello ");
  Serial.println(person_name);
  
  print_weight(weight, "Kilo grams");
  print_weight(w_grams, "grams");
  print_weight(w_pounds, "pounds");
  print_weight(w_ounces, "ounces");
  print_weight(w_carats, "carats");
  
  Serial.println("");
}

void print_weight(float weight, String unit) {
  Serial.print("You weight ");
  Serial.print(weight);
  Serial.print(" ");
  Serial.print(unit);
  Serial.println(".");
}
