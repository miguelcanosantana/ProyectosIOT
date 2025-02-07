#define BUZZER_PIN 32

byte ledPins[] = {15, 2, 0, 4, 5, 18, 19, 21, 22, 23};
int ledCounts;

//Music notes
const int nC4 = 261;
const int nD4 = 294;
const int nE4 = 329;
const int nF4 = 349;
const int nG4 = 391;
const int nA4 = 440;
const int nB4 = 493;
const int nC5 = 523;

int melody[] = {nC4, nD4, nE4, nF4, nG4, nA4, nB4, nC5};
int currentMelodyPosition = 0; 

void setup() {

     ledCounts = sizeof(ledPins);

     for (int i = 0; i < sizeof(ledPins); i++) {
          pinMode(ledPins[i], OUTPUT);
     }
}

void loop() {

     for (int i = 0; i < ledCounts - 1; i++) {

      int variation = 20 + i * 30;

      digitalWrite(ledPins[i], HIGH);
      increasePlayMelody();

      delay(variation);
      
      noTone(BUZZER_PIN);
      digitalWrite(ledPins[i], LOW);
     }

     for (int i = ledCounts - 1; i > 0; i--) {

      int variation = 20 + i * 30;
      
      digitalWrite(ledPins[i], HIGH);
      increasePlayMelody();

      delay(variation);

      noTone(BUZZER_PIN);
      digitalWrite(ledPins[i], LOW);
     }
}

void increasePlayMelody() {

  if (currentMelodyPosition < sizeof(melody)) {
    currentMelodyPosition ++;
  }
  else {
    currentMelodyPosition = 0;
  }

  tone(BUZZER_PIN, melody[currentMelodyPosition]);
}
