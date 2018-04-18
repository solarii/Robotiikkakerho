int ledPin = 10;

void setup() {
pinMode(ledPin, OUTPUT); 
}

void loop() {
// 3 lyhyttä väläystä, eli “S”
digitalWrite(ledPin,HIGH); delay(150); digitalWrite(ledPin,LOW); delay(100);
digitalWrite(ledPin,HIGH); delay(150); digitalWrite(ledPin,LOW); delay(100);
digitalWrite(ledPin,HIGH); delay(150); digitalWrite(ledPin,LOW); delay(100);
delay(100); //100 millisekunnin tauko

//3 pitkää väläystä, eli “0” 
digitalWrite(ledPin,HIGH); delay(400); digitalWrite(ledPin,LOW); delay(100);
digitalWrite(ledPin,HIGH); delay(400); digitalWrite(ledPin,LOW); delay(100);
digitalWrite(ledPin,HIGH); delay(400); digitalWrite(ledPin,LOW); delay(100);
delay(100);
//100 millisekunnin tauko

//3 lyhyttä väläystä “S” again

// LISÄÄ TÄHÄN PUUTTUVA KOODI

delay(5000); // odotetaan viisi sekuntia ja toistetaan taas S.O.S.
}
