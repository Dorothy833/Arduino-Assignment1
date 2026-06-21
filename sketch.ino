int startValue = 5;
int ledPin = 13;

void flashLED(int times) {
  // Blink the LED 'times' times
  int i = 0;
  while (i < times) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
    i = i + 1;
  }
}

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("=== Smart Countdown Starting ===");

  int count = startValue;

  while (count > 0) {
    Serial.print("Count: ");
    Serial.println(count);

    flashLED(count);   // blink the LED count times

    delay(1000);       // wait 1 second

    count = count - 1;
  }

  Serial.println("=== Countdown Complete ===");
}

void loop() {
  // Empty — everything happens once in setup()
}