/*
  simplesketch #1a - testing with "if"

  This series of sketches demonstrates some aspects of C/C++ programming on Arduino
  
  Hardware setup:
  
  An Arduino connected to your computer.

  Revision history:
  - apr 20, 2014
    created.

  Author: Rolf Widenfelt (c) 2014 - Some Rights Reserved.

  Note: This source code is licensed under a Creative Commons License, CC-by-sa.
 	(attribution, share-alike)
     	See http://creativecommons.org/licenses/by-sa/4.0/ for details.
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
  int b = 1;

  if (b == 1) {
    digitalWrite(LEDPIN, HIGH);
  } else {
    digitalWrite(LEDPIN, LOW);
  }
  
}