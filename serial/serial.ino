void setup()
{
    Serial.begin(19200);
    Serial.println("we are in setup");
}

void loop()
{
    Serial.println("we are in loop");
    delay(2000);
}