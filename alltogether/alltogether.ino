/*
  simplesketch #1e - using datatypes (like float)
  
  This series of sketches demonstrates some aspects of C/C++ programming on Arduino
  
  This sketch reads a value from an analog pin, and converts it to a floating point
  number between 0.0 and 1.0.
  This demonstrates the use of "int" and "float" datatypes.

  Hardware setup:
  
  An Arduino connected to your computer.
  A 10K potentiometer wired so that the middle pin goes to analog pin 4,
  the top pin goes to +5 volts and the bottom pin to GND.

  Revision history:
  - apr 24, 2014 - rolf
    created.

  Author: Rolf Widenfelt (c) 2014 - Some Rights Reserved.

  Note: This source code is licensed under a Creative Commons License, CC-by-sa.
 	(attribution, share-alike)
     	See http://creativecommons.org/licenses/by-sa/4.0/ for details.
*/

// this defines the analog pin to use
const int SENSORPIN = A4;

// the setup routine runs once
void setup() {
  
  // set the baud rate
  Serial.begin(19200);
}

// the loop routine runs over and over
void loop() {
  int sensor;      // the sensor value, as an integer
  float sum, avg;  // the sum and average, as floating point values
  
  // we read the analog pin 5 times, convert to "float", and take the average

  sum = 0.0;
  for (int i = 0; i < 5; i++) {
    sensor = analogRead(SENSORPIN);  // returns a value from 0 to 1023
    sum = sum + sensor;       // Collect new value from sensor in sum.
    
    Serial.print(sensor);
    Serial.print(" ");

    delay(10);
  }
  Serial.println("");
  
  avg = sum/5.0;           // calculate the average
  Serial.println(avg);

  delay(2000);
}
