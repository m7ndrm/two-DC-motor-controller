void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
