/*
Adafruit Arduino - Lesson 4. 8 LEDs and a Shift Register
 */

int latchPin = 5;
int clockPin = 6;
int dataPin = 4;

byte leds = 0;

void setup() 
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
}

void loop() 
{
  for (int j = 0; j < 2; j++)
  { 
    for (int i = 0; i < 8; i++)
    {
      bitSet(leds, i);
      updateShiftRegister();
      delay(20);

      bitSet(leds, i+1);
      updateShiftRegister();
      delay(30);

      bitClear(leds, i-1);
      updateShiftRegister();
      delay(50);
    }

    for (int i = 7; i >= 0; i--)
    {
      bitSet(leds, i);
      updateShiftRegister();
      delay(20);

      bitSet(leds, i-1);
      updateShiftRegister();
      delay(30);

      bitClear(leds, i+1);
      updateShiftRegister();
      delay(50);
    }

  } 

}

void updateShiftRegister()
{
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, leds);
  digitalWrite(latchPin, HIGH);
}


