/*
 * Tuomalan Robottikerho
 * - RGB LED
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

int redPin = 9;    // Pinni, jossa punainen LED on kiinni
int greenPin = 10; // Pinni, jossa vihreä LED on kiinni.
int bluePin = 11;  // Pinni, jossa sininen LED on kiinni. 


/*
 * Tässä Arduinolle kerrotaan alkuasetukset.
 */
void setup(){
     pinMode(redPin, OUTPUT);
     pinMode(greenPin, OUTPUT);
     pinMode(bluePin, OUTPUT);

}


/*
 * Tätä Arduino toistaa.
 */
void loop(){
  
    // Kutsutaan funktiota colorRGB. Älä huoli, jos et vielä ymmärrä! :)
    colorRGB(random(0,255),random(0,255),random(0,255)); // Mahdolliset arvot LED:eille! R:0-255 G:0-255 B:0-255
    
    // Mitä "random()" tekee? 
    // Mitä tapahtuu jos laittaisit siihen joitain muita numeroita?
    //colorRGB(100,100,100);
    
    delay(500); // Tämä on viive vilkkumisten välillä!
}


/* 
 *  Tällä Arduino sytyttää valot! 
 *  
 *  Tälläisiä erillisiä toimintoja kutsumme "funktioiksi".
 *  Mutta miksi funktiot ovat näppäriä?
 */
void colorRGB(int red, int green, int blue){
     // analogWrite()-funkctio kontrolloi LEDejä - vertaa digitalWrite()-funktioon!
     // Miksi haluamme käyttää tässä analogWrite-funktiota?
     // constrain() rajoittaa annetut numerot välille 0-222.
     analogWrite(redPin,constrain(red,0,255));
     analogWrite(greenPin,constrain(green,0,255));
     analogWrite(bluePin,constrain(blue,0,255));
}
