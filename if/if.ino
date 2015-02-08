int LEDPIN = 13;

void setup() {  
    pinMode(LEDPIN, OUTPUT);
}

int b = 1;

void loop() {  
    if (b < 10) {
        digitalWrite(LEDPIN, HIGH);
    }

    else {
        digitalWrite(LEDPIN, LOW);
    }
}