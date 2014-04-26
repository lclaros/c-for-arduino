/*
  simplesketch #1d - using C++ objects (like Serial)
  
  This series of sketches demonstrates some aspects of C/C++ programming on Arduino
  
  Hardware setup:
  
  An Arduino connected to your computer.

  Notes:
  - since Serial is a built-in abject, we don't have to create or declare it.
  - an example of a non-built-in object is in the sketch LiquidCrystal/HelloWorld

  author: Rolf Widenfelt

  - apr 24, 2014
    created.
    
 */

// the setup routine runs once
void setup() {
  
  // set the baud rate before doing anything else! (make sure it matches your Serial Monitor)
  Serial.begin(19200);
  Serial.println("we are in setup");
}

// the loop routine runs over and over
void loop() {
  Serial.println("we are in loop");
  delay(2000);
}