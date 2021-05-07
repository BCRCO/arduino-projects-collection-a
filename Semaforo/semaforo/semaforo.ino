// 2918094
int G = 4;
int Y = 3;
int R = 2 ;

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
  digitalWrite(G, HIGH);
  digitalWrite(Y, LOW);
  digitalWrite(R, LOW);
  greenLight();
  

  digitalWrite(G, LOW);
  digitalWrite(Y, HIGH);
  digitalWrite(R, LOW);
  delay(2000);

  digitalWrite(G, LOW);
  digitalWrite(Y, LOW);
  digitalWrite(R, HIGH);
  delay(7000);


}
void greenLight() {

  for (int i = 1; i < 31; i++){

    int S = digitalRead(B);

  if (S == 0) {
    delay(100);

  }
   else if (S == 1){
  digitalWrite(G, LOW);
  digitalWrite(Y, LOW);
  digitalWrite(R, HIGH);
  delay(7000);

  digitalWrite(G, HIGH);
  digitalWrite(Y, LOW);
  digitalWrite(R, LOW);
  
    
   }
  }
  delay(5000);
  return;

}

// Bryan Chavez Rodriguez
