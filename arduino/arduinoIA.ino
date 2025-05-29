int ledPin1 = 12;
int ledPin2 = 13;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char c = Serial.read();
    if (c == '1') {
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, LOW);
    } else if (c == '2') {
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, HIGH);
    } else {
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
    }
  }
}