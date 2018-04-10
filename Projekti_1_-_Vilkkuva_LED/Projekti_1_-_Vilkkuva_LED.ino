/*
 * Tuomalan Robottikerho
 * - Vilkkuva LED
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
  // Tässä kerrotaan Arduinolle perusasetukset.
  // Kerromme, missä LED-valo on ja asetetaan portti OUTPUT-tilaan
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Tätä koodia toistetaan niin kauan kuin virta pihisee!
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
