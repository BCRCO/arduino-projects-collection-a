// Ultrasonic Led

const int TP = 9;
const int EP = 10;
const int L = 13;

long DU;
int DI;
int CD;
void setup() {
pinMode(TP, OUTPUT);
pinMode(EP, INPUT);
pinMode(L, OUTPUT);
Serial.begin(9600);
}
void loop() {

digitalWrite(TP, LOW);
delayMicroseconds(2);

digitalWrite(TP, HIGH);
delayMicroseconds(10);
digitalWrite(TP, LOW);

DU = pulseIn(EP, HIGH);

DI = DU*0.034/2;
CD = DI;
if (CD >= 5){
 digitalWrite(L, HIGH);
}
else{
 digitalWrite(L, LOW);
}

Serial.print("Distance: ");
Serial.println(DI);

}
