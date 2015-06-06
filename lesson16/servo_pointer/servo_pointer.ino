#include <Servo.h>

int pin_servo = 9;
int pin_pot = A0;
int pos_pot;
int pos_servo;

Servo servo_pointer;


void setup() {
  Serial.begin(9600);
  
  servo_pointer.attach(pin_servo);
}

void loop() {
  pos_pot = analogRead(pin_pot);
  pos_servo = (158./1023.) * pos_pot + 2;
  
  servo_pointer.write(pos_servo);
}
