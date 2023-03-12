int redPin = 9;    // Pin para el LED rojo
int greenPin = 10;  // Pin para el LED verde
int bluePin = 11;   // Pin para el LED azul

void setup() {
  // Configurar los pines como salida
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Encender el LED rojo
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  delay(1000);  // Esperar un segundo

  // Encender el LED verde
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  delay(1000);  // Esperar un segundo

  // Encender el LED azul
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  delay(1000);  // Esperar un segundo
}
