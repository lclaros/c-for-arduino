int LEDPIN = 13;

void setup() {
    pinMode(LEDPIN, OUTPUT);
}

void loop() {
    int foo = 0;

    while (foo < 3)
    {
        digitalWrite(LEDPIN, HIGH);
        delay(500);

        digitalWrite(LEDPIN, LOW);
        delay(500);

        foo = foo + 1;
    }

    delay(2000);
}
