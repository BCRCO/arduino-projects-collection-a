const int sensorPin = 1;
const int ledPin = 10;

int lightCal;
int lightVal;


void setup()
{

  pinMode(ledPin, OUTPUT);
  lightCal = analogRead(sensorPin);
Serial.begin(9600);
}


void loop()
{
 Serial.print(analogRead(sensorPin));
  lightVal = analogRead(sensorPin);

  if (lightVal > 0)
  {
    digitalWrite(9, HIGH);
  }


  else
  {
    digitalWrite(9, LOW);
  }

}
