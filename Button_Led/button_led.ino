// Button LED

const int B = 4;
const int L = 5;
int BS = 0;

void setup() {

  pinMode(L, OUTPUT);
  pinMode(B, INPUT);
}

void loop() {

  BS = digitalRead(B);

  if (BS == HIGH) {
    digitalWrite(L, HIGH);
    delay(5000);
    digitalWrite(L, LOW);
  }
}
