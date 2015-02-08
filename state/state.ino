void setup() {  
    pinMode(LEDPIN, OUTPUT);
}

int b = 1;

void loop() {  
    if (b == 1) {
        digitalWrite(LEDPIN, HIGH);
        b = 0;
    }

    else {
        digitalWrite(LEDPIN, LOW);
        b = 1;
    }

    delay(500);
}