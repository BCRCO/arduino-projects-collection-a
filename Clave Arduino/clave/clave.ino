// Password

int led = 5;
int BA = 2;
int BB = 3;
int BC = 4;
int CA = 0;
int CB = 0;
int CC = 0;
int CE = 0;
int ST = 8;


void setup() {

  pinMode(led, OUTPUT);
  pinMode(BA, INPUT);
  pinMode(BB, INPUT);
  pinMode(BC, INPUT);
  pinMode(ST, INPUT);

}

void loop() {
  int bs1 = digitalRead(BA);
  int bs2 = digitalRead(BB);
  int bs3 = digitalRead(BC);
  int STS = digitalRead(ST);

  if (bs1 == 1) {

    CA = 1;
  }

  if (bs1 == 1 && bs3 == 1) {

    CB = 2;
  }
  if (bs2 == 1 && bs3 == 1) {

    CC = 3;
  }

  if (CA == 1 && CB == 2 && CC == 3) {
    digitalWrite(led, HIGH);

  }
  else {
    digitalWrite(led, LOW);

  }
  if (bs1 == 1 && bs2 == 1 && STS == 1) {
    CA = 0;
    CB = 0;
    CC = 0;
    
  }

  delay(50);

}
