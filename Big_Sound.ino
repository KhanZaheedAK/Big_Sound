const int soundDigital = 2;
const int soundAnalog = A0;
const int led = 8;
const int buzzer = 9;

void setup() {
  pinMode(soundDigital, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int digitalValue = digitalRead(soundDigital);
  int analogValue = analogRead(soundAnalog);

  Serial.print("Digital: ");
  Serial.print(digitalValue);

  Serial.print(" | Analog: ");
  Serial.println(analogValue);

  if (digitalValue == HIGH) {
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(100);
}