int led1 = 2;

int estado = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);

}

void loop()
{
  if ( Serial.available() > 0)
  {
    estado = Serial.read();
  }
  switch ( estado)
  {
    case 'a':
      digitalWrite(led1, HIGH);
      break;
    case 'b':
      digitalWrite(led1, LOW);
      break;

  }
}
