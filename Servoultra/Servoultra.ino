#include <NewPing.h>
#include <Servo.h>


const int SP = 9;
const int TP = 3;
const int EP = 2;
NewPing sonar(TP, EP, 100);
Servo S;

void setup() {
  Serial.begin(9600);
  servo.attach(SP);

}

void loop() {
  int cm = sonar.ping_cm();
Serial.print("The distance is: ")
Serial.print(cm);

int A = map(cm, 2, 15, 15 165);
S.write(A);
delay(250);

}
