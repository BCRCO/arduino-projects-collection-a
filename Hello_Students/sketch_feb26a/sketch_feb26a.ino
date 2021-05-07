int P = A0;

int PV;

void setup() {
pinMode(P, INPUT);
Serial.begin(9600);
}

void loop() {

  int P = analogRead(P) / 255;
  

  if(P != PV)
  {

    switch(P)
    {
      case 0:
        Serial.println("Too Low");
        break;
      case 1:
        Serial.println("Low");
        break;
      case 2:
        Serial.println("Moderate");
        break;
      case 3:
        Serial.println("High");
        break;
      case 4:
        Serial.println("Extreme");
        break;
      default:
        Serial.println("ERROR");
        break;
    }
    PV = P;
  }
}
