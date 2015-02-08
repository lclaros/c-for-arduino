int LEDPIN = 13;

void setup() {
    pinMode(LEDPIN, OUTPUT);
}

void blink_led(int number_blinks) {
    int i;

    for (i = 0; i < number_blinks; i++) {
        digitalWrite(LEDPIN, HIGH);
        delay(500);

        digitalWrite(LEDPIN, LOW);
        delay(500);
    }
}

void loop() {
    blink_led(3);
    delay(2000);
}