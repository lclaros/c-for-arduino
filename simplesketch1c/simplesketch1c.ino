/*
  simplesketch #1c - defining a function
  
  This series of sketches demonstrates some aspects of C/C++ programming on Arduino
  
  Hardware setup:
  
  An Arduino connected to your computer.
 
  author: Rolf Widenfelt

  - apr 20, 2014
    created.
    
 */
 
// a nice way to remember which pin has the LED
const int LEDPIN = 13;


// define a function that blinks the LED "blinks" times
void blinkIt(int blinks) {

  for (int i = 0; i < blinks; i++) {
    digitalWrite(LEDPIN, HIGH);
    delay(500);
    digitalWrite(LEDPIN, LOW);
    delay(500);
  }
}


// the setup routine runs once
void setup() {
  // always set up your pins
  pinMode(LEDPIN, OUTPUT);
}


// the loop routine runs over and over
void loop() {
  blinkIt(3);    // this "calls" our function with one parameter, the number 3
  delay(2000);
}
