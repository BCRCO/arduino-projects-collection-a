// 2918094
int G = 4;
int Y = 3;
int R = 4;

int B = 6;
int S = digitalRead(B);

void setup() {
  pinMode(G, OUTPUT);
  pinMode(Y, OUTPUT);
  pinMode(R, OUTPUT);

  digitalWrite(G, LOW);
  digitalWrite(Y, LOW);
  digitalWrite(R, LOW);
  // BCR
  pinMode(B, INPUT);
  Serial.begin(9600);

}

void loop() {

  digitalWrite(G, HIGH);
  digitalWrite(Y, LOW);
  digitalWrite(R, LOW);
  delay(4000);
  greenLight();
  delay(1000);

  digitalWrite(G, LOW);
  digitalWrite(Y, HIGH);
  digitalWrite(R, LOW);
  delay(1000);
  greenLight();
  delay(1000);


  digitalWrite(G, LOW);
  digitalWrite(Y, LOW);
  digitalWrite(R, HIGH);
  delay(1000);
  greenLight();
  delay(6000);

}
void greenLight() {
  delay(10);

  for (int i = 1; i < 31; i++)

    int S = digitalRead(B);

  if (S == 0) {
  delay(1000);
  digitalWrite(G, HIGH);
  digitalWrite(Y, LOW);
  digitalWrite(R, LOW);
  Serial.print("W");
   int S = 0;
  }
  delay(10);
  return;

}
