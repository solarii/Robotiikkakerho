/*
 * Tuomalan Robottikerho
 * - SOS LED
 * 
 * Tässä projektissa rakennamme vilkkuvan LED-valon
 * Tarvittavat komponentit:
 * - Arduino Uno
 * - Leipälauta
 * - 2 x kaapeli
 * - 1 x vastus 220R
 * - 1 x 5MM LED
 */

/* Tässä alustetaan muutamia muuttujia, jotta meidän ei tarvitse
 * kirjoittaa niitä joka kerta uudestaan.
 * Näin vältymme myös virheiltä!
 */

int ledPin = 10;

void setup() {
pinMode(ledPin, OUTPUT); 
}

void loop() {

  // Kirjain "S"
  for(int x=0; x<3; x++){
    digitalWrite(ledPin, HIGH); // Laitetaan LED päälle
    delay(150);                 // Odotetaan 150ms
    digitalWrite(ledPin, LOW);  // Laitetaan LED pois
  }
  
  delay(100);                   // Odotetaan 100ms

  // Kirjain "0"
  for(int x=0; x<3; x++){
    digitalWrite(ledPin, HIGH); // Laitetaan LED päälle
    delay(400);                 // Odotetaan 400ms
    digitalWrite(ledPin, LOW);  // Laitetaan LED pois
    delay(100);
  }

  delay(100);                   // Odotetaan 100ms

  // Kirjain "S"

  // LISÄÄ TÄHÄN PUUTTUVA KOODI
}
