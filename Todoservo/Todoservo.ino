#include <EEPROM.h>
#define numSKETCH 3

void setup()
{
  delay(500);
  byte sketch = EEPROM.read(0);
  sketch = (sketch >= 1 && sketch < numSKETCH ? sketch + 1 : 1);
  EEPROM.write(0, sketch);

  switch (sketch)
  {
    case 1: sketch1(); break;
    case 2: sketch2(); break;
    case 3: sketch3(); break;
  }
}
void loop();

/**
   SKETCH 1
*/
#include <Servo.h>

Servo myservo;
int potpin = 0;
int val;
void sketch1()
{
  //Setup:
  myservo.attach(9);

  //Main loop:
  while (true)
  {
    val = analogRead(potpin);
    val = map(val, 0, 1023, 0, 180);
    myservo.write(val);
    delay(15);
  }
}

/**
   SKETCH 2
*/
#include <Servo.h>

int pos = 0;
void sketch2()
{
  //Setup:
  myservo.attach(9);

  //Main loop:
  while (true)
  {
    for (pos = 0; pos <= 180; pos += 1) {

      myservo.write(pos);
      delay(15);
    }
    for (pos = 180; pos >= 0; pos -= 1)
      myservo.write(pos);
    delay(15);
  }
}


/**
   SKETCH 3
*/
#include <Servo.h>

const int sensorPin = 1;
int lightCal;
int LV;


void sketch3()
{
  //Setup:
  lightCal = analogRead(sensorPin);
  Serial.begin(9600);
  myservo.attach(9);

  //Main loop:
  while (true)
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
}


//https://jpst.it/25807
