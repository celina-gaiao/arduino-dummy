int redPin = 12;                  // Red LED connected to digital pin 12
int greenPin = 11;                // Green LED connected to digital pin 11
int bluePin = 10;

void setup()                      // run once, when the sketch starts
{
  pinMode(redPin, OUTPUT);        // sets the digital pin as output
  pinMode(greenPin, OUTPUT);      // sets the digital pin as output
  pinMode(bluePin, OUTPUT);      // sets the digital pin as output

}

void loop()                       // run over and over again
{
  // Todas
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, HIGH);
  delay(500);

  //Vermelho
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  delay(500);

  //vermelho + verde
  digitalWrite(greenPin, HIGH);
  delay(500);

  //verde
  digitalWrite(redPin, LOW);
  delay(500);

  //verde + azul
  digitalWrite(bluePin, HIGH);
  delay(500);

  //azul
  digitalWrite(greenPin, LOW);
  delay(500);

  //azul + vermelho
  digitalWrite(redPin, HIGH);
  delay(500);
}
