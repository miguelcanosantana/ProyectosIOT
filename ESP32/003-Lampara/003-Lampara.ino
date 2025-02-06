#define LED 2
#define BUTTON 13
bool debounce = false;

void setup() {
  pinMode (LED, OUTPUT);
  pinMode (BUTTON, INPUT);
}

void loop() {

  int buttonState = digitalRead(BUTTON);

  if (buttonState == LOW && debounce == 0) {
      reverse(LED);
  } else {
    debounce = 0;
  }

  delay(50);
}

void reverse(int pin) {
  debounce = 1;
  digitalWrite(pin, !digitalRead(pin));
}