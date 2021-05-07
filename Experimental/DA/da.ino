#include <Servo.h>

Servo myservo;
//voids
int potpin = 0;
int val;
int pos = 0;
const int sensorPin = 1;
int lightCal;
int LV;

//main loop
int SA = 0;
int SB = 0;
int SC = 0;

//buttons
int BA = 2;
int BB = 3;
int BC = 4;

void setup() {

  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  myservo.attach(9);
  lightCal = analogRead(sensorPin);
  Serial.begin(9600);
  val = analogRead(potpin);

}


void loop() {
 

  if (digitalRead(BB) == HIGH) {
    Serial.print("B");
    val = analogRead(potpin);
    val = map(val, 0, 1023, 0, 180);
    myservo.write(val);
    delay(15);

  }

  if (digitalRead(BC) == HIGH) {

    for (pos = 0; pos <= 180; pos += 1) {

      myservo.write(pos);
      delay(15);

      Serial.print("C");
    }

  }

   if (digitalRead(BA) == HIGH) {
    Serial.print(analogRead(sensorPin));
    LV = analogRead(sensorPin);
    Serial.print("A");
    switch (LV)
    {
      case 0:
        myservo.write(0);
        break;

      case 1:
        myservo.write(45);
        break;
      case 2:
        myservo.write(45);
        break;

      case 3:
        myservo.write(45);
        break;
      case 4:
        myservo.write(90);
        break;

      case 5:
        myservo.write(90);
        break;
      case 6:
        myservo.write(90);
        break;

      case 7:
        myservo.write(180);
        break;
      case 8:
        myservo.write(180);
        break;

      case 9:
        myservo.write(180);
        break;

    }
    delay(1000);


  }

}
