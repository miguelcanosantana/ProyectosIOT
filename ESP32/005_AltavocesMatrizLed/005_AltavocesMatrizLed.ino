#define BUZZER_PIN 32

byte ledPins[] = {15, 2, 0, 4, 5, 18, 19, 21, 22, 23};
int ledCounts;

//Music notes
const int C4 = 261;
const int D4 = 294;
const int E4 = 329;
const int F4 = 349;
const int G4 = 391;
const int A4 = 440;
const int B4 = 493;
const int C5 = 523;

int melody[] = {C4, D4, E4, F4, G4, A4, B4, C5};
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
      increasePlayMelody()

      delay(variation);
      
      noTone(BUZZER_PIN);
      digitalWrite(ledPins[i], LOW);
     }

     for (int i = ledCounts - 1; i > 0; i--) {

      int variation = 20 + i * 30;
      
      digitalWrite(ledPins[i], HIGH);
      increasePlayMelody()

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
