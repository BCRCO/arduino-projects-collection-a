#include <Servo.h>
Servo myservo;
const int sensorPin = 1;
int lightCal;
int LV;

void setup()
{

  lightCal = analogRead(sensorPin);
  Serial.begin(9600);
  myservo.attach(9);
}


void loop()
{
  Serial.print(analogRead(sensorPin));
  LV = analogRead(sensorPin);

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
