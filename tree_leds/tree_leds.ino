/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int redPin = 10;
int yellowPin = 11;
int greenPin = 12;


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(redPin, OUTPUT); 
  pinMode(yellowPin, OUTPUT);     
  pinMode(greenPin, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  
  digitalWrite(redPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);               // wait for a second
  digitalWrite(yellowPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
  digitalWrite(greenPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
  
  digitalWrite(redPin, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(yellowPin, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(greenPin, LOW);    // turn the LED off by making the voltage LOW

  delay(1000);               // wait for a second
}
