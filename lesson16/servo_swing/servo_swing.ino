#include <Servo.h>

int pin_servo = 9;
int pos = 2;
int dir = 1;
int servo_delay = 25;

Servo servo_pointer;


void setup() {
  Serial.begin(9600);
  
  servo_pointer.attach(pin_servo);
}

void loop() {
  // Serial.print("Where would you like to position the servo? ");
  // while(0 == Serial.available()) {}
  // pos = Serial.parseInt();
  
  // servo_pointer.write(pos);
  
  // Note: Servo I have works well between 2 - 160 (found using above code)
  //       Servo shakes while it's stop when in a unstable position
  pos += dir;
  
  if(2 >= pos || 160 <= pos) {
    dir *= -1;
  }
  
  delay(servo_delay);
  
  servo_pointer.write(pos);
}
