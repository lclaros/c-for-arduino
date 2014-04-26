/*
  simplesketch #1b - repeating things with "for"
  
  This series of sketches demonstrates some aspects of C/C++ programming on Arduino
  
  Hardware setup:
  
  An Arduino connected to your computer.
 
  author: Rolf Widenfelt

  - apr 20, 2014
    created.
    
 */
 
// a nice way to remember which pin has the LED
const int LEDPIN = 13;

// the setup routine runs once
void setup() {
  // always set up your pins
  pinMode(LEDPIN, OUTPUT);
}

// the loop routine runs over and over
void loop() {

  // blink 3 times
  for (int i = 0; i < 3; i++) {
    digitalWrite(LEDPIN, HIGH);
    delay(500);
    digitalWrite(LEDPIN, LOW);
    delay(500);
  }

  delay(2000);
}