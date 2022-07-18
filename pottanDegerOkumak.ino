byte potPin = A0;

int potDegeri = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  potDegeri = analogRead(potPin);

  Serial.print("Pot Degeri: ");
  Serial.println(potDegeri);

}
