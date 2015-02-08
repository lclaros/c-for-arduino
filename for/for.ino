int LEDPIN = 13;

void setup() {
    pinMode(LEDPIN, OUTPUT);
}

void loop() {
    int foo;

    for (foo = 0; foo < 3; foo = foo + 1)
    {
        digitalWrite(LEDPIN, HIGH);
        delay(500);

        digitalWrite(LEDPIN, LOW);
        delay(500);
    }

    delay(2000);
}