/* Pin 13 has an LED connected on most Arduino boards.
   give it a name:  */

int LEDPIN = 13;


// the setup routine runs once when you press reset:
void setup() {  
    pinMode(LEDPIN, OUTPUT);
}


// initialize the digital pin as an output.
void loop() {  
    digitalWrite(LEDPIN, HIGH);
}