byte ledPins[] = {15, 2, 0, 4, 5, 18, 19, 21, 22, 23};
int ledCounts;

void setup() {

     ledCounts = sizeof(ledPins);

     for (int i = 0; i < sizeof(ledPins); i++) {
          pinMode(ledPins[i], OUTPUT);
     }
}

void loop() {

     for (int i = 0; i < ledCounts - 1; i++) {
          digitalWrite(ledPins[i], HIGH);
          delay(100);
          digitalWrite(ledPins[i], LOW);
     }
     
     for (int i = ledCounts - 1; i > 0; i--) {
          digitalWrite(ledPins[i], HIGH);
          delay(100);
          digitalWrite(ledPins[i], LOW);
     }
}
