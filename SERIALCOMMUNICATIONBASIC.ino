int LedPin = 13;
void setup()
{
Serial.begin(9600);
pinMode(LedPin,OUTPUT);
}
void loop()
{
  while (Serial.available() == 0);
  int val = Serial/read - '0';

  if (val == 1)
  {
    Serial.println("LED is on");
    digitalWrite(LedPin,HIGH);
  }
  else if (val == 0)
  {
    Serial.println("LED is off");
    digitalWrite(LedPin,LOW);
  }
  else
  {
    Serial.println("Invalid");
  }
    Serial.flush();
}
