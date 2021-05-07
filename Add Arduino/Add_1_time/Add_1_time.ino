void setup() {

  Serial.begin(9600);

  Serial.print("Enter First number: ");
  delay(2500);

  int a = Serial.readString().toInt();
  Serial.println(a);
  
 if (a > 0){ delay(1000);

  Serial.print("Enter Second number: ");
  delay(2500);

  int b = Serial.readString().toInt();
  Serial.println(b);

 if (b > 0)
  Serial.print("The Result is: ");
  int result2 = a + b;
  Serial.println(result2);
}
}
void loop() {



}
