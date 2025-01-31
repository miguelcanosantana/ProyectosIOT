#define LED 2
#define BUTTON 13

void setup() {
  pinMode (LED, OUTPUT);
  pinMode (BUTTON, INPUT);
}

void loop() {

  int buttonState = digitalRead(BUTTON);

  if (buttonState == LOW) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }

  delay(50);
}
