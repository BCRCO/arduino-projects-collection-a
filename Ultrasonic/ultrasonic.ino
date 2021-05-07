int TP=11;
int EP=10;
float PT;
float SpeedOfSound;
int TD=6;
void setup() {

  Serial.begin(9600);
  pinMode(TP, OUTPUT);
  pinMode(EP, INPUT);
 
}
 
void loop() {

  
  digitalWrite(TP, LOW);
  delayMicroseconds(2000);
  digitalWrite(TP, HIGH);
  delayMicroseconds(10);
  digitalWrite(TP, LOW);
  
  PT = pulseIn(EP, HIGH);  
 
  SpeedOfSound = (TD*2)/PT*(1000000)*3600/63360;    
  Serial.print("The Speed of Sound is: ");
  Serial.print(SpeedOfSound);
  Serial.println(" miles per hour");
  delay(1000);
  
}
