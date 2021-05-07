// 2918094
int G = 2;
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

}

void loop() {

delay(2500);
  if (B == HIGH) {
    delay(1000);
  
  digitalWrite(G, HIGH);
  digitalWrite(Y, LOW);
  digitalWrite(R, LOW);
  
  delay(3000);

  digitalWrite(G, LOW);
  digitalWrite(Y, HIGH);
  digitalWrite(R, LOW);
  delay(2000);

  digitalWrite(G, LOW);
  digitalWrite(Y, LOW);
  digitalWrite(R, HIGH);
  delay(7000);

  }
}
