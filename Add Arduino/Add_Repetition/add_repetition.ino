// Add
int a = 0;
int b = 0;
int result = 0;

void setup() {

  Serial.begin(9600);

}
void loop() {

  delay(500);

  Serial.print("Enter First number: ");
  delay(2500);

  int a = Serial.readString().toInt();
  Serial.println(a);

  if (a > 0) {
    delay(1000);

    Serial.print("Enter Second number: ");
    delay(2000);

    int b = Serial.readString().toInt();
    Serial.println(b);
    delay(1000);

    Serial.print("The Result is: ");
    int result = a + b;
    Serial.println(result);

    delay(2500);


  }
}
