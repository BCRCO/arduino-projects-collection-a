int LP[] = {2, 3, 4, 5, 6, 7, 8, 9};
void setup() {
  pinMode(LP[0], OUTPUT);
  pinMode(LP[1], OUTPUT);
  pinMode(LP[2], OUTPUT);
  pinMode(LP[3], OUTPUT);
  pinMode(LP[4], OUTPUT);
  pinMode(LP[5], OUTPUT);
  pinMode(LP[6], OUTPUT);
  pinMode(LP[7], OUTPUT);
}

void loop() {
  OAA();
  OAAT();
  PP();
  MAA();
  RALED();
}
void OAA() {
  int index;
  int delayTime = 100;


  for (index = 0; index <= 7; index = ++index)
  {
    digitalWrite(LP[index], HIGH);
    delay(delayTime);
  }


  for (index = 7; index >= 0; index = --index)
  {
    digitalWrite(LP[index], LOW);
    delay(delayTime);
  }

}

void OAAT()
{
  int index;
  int delayTime = 100;

  for (index = 0; index <= 7; index = ++index)
  {
    digitalWrite(LP[index], HIGH);
    delay(delayTime);
    digitalWrite(LP[index], LOW);
  }
}

void PP()
{
  int index;
  int delayTime = 100;

  for (index = 0; index <= 7; index = ++index)
  {
    digitalWrite(LP[index], HIGH);
    delay(delayTime);
    digitalWrite(LP[index], LOW);
  }
  for (index = 7; index >= 0; index = --index)
  {
    digitalWrite(LP[index], HIGH);
    delay(delayTime);
    digitalWrite(LP[index], LOW);
  }
}

void MAA()
{
  int index;
  int delayTime = 200;

  for (index = 0; index <= 3; index = ++index)
  {
    digitalWrite(LP[index], HIGH);
    digitalWrite(LP[index + 4], HIGH);
    delay(delayTime);
    digitalWrite(LP[index], LOW);
    digitalWrite(LP[index + 4], LOW);

  }
}

void RALED()
{
  int index;
  int delayTime;

  index = random(8);
  delayTime = 100;

  digitalWrite(LP[index], HIGH);
  delay(delayTime);
  digitalWrite(LP[index], LOW);

}
