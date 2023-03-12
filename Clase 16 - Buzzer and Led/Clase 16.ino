int buzzerPin = 13;    // Pin para el buzzer
int ledPin = 12;       // Pin para el LED

void setup() {
  // Configurar los pines como salida
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Encender el LED y activar el buzzer durante medio segundo
  digitalWrite(ledPin, HIGH);
  tone(buzzerPin, 1000);
  delay(500);  // Esperar medio segundo

  // Apagar el LED y el buzzer durante medio segundo
  digitalWrite(ledPin, LOW);
  noTone(buzzerPin);
  delay(500);  // Esperar medio segundo
}