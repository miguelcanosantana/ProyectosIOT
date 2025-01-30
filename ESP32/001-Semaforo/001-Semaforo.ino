#define RED 4
#define BLUE 0
#define GREEN 2
#define WAIT_TIME 500

void setup() {
  pinMode (RED, OUTPUT);
  pinMode (BLUE, OUTPUT);
  pinMode (GREEN, OUTPUT);
}

void loop() {
  digitalWrite(GREEN, LOW);
  digitalWrite(RED, HIGH);
  delay(WAIT_TIME);
  digitalWrite(RED, LOW);
  digitalWrite(BLUE, HIGH);
  delay(WAIT_TIME);
  digitalWrite(BLUE, LOW);
  digitalWrite(GREEN, HIGH);
  delay(WAIT_TIME);
  // put your main code here, to run repeatedly:
}
