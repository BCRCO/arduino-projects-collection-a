#include<AFMotor.h>
#include<Servo.h>

AF_DCMotor motor(1);
Servo servo1;

void setup() {
  servo1.attach(9);
  motor.setSpeed(200);
  motor.run(RELEASE);

}

void loop() {

  motor.run(FORWARD);
  servo1.write(180);
  delay(3000);

  motor.run(RELEASE);
  servo1.write(-180);
  delay(3000);

}
