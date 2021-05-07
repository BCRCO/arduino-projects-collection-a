//BCR
int LP[] = {2, 3, 4, 5, 6, 7, 8, 9};
int OL = 7;

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(LP[i], OUTPUT);
  }
}
void loop() {
  OAT();
}
void OAT() {
  int DT = 100;
  for (int i = 0; i <= 7; i ++ ) {
    int OL = i - 1;
    if (i == 0) {
      OL = 7;
    }
    digitalWrite(LP [i], HIGH);
    digitalWrite(LP [OL], LOW);
    delay(50);
  }
}
