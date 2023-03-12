int motorPin = 9;  // Pin digital para controlar el motor

void setup() {
  // Configurar el pin del motor como salida
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // Encender el motor en una dirección durante 2 segundos
  digitalWrite(motorPin, HIGH);
  delay(2000);

  // Apagar el motor durante 2 segundos
  digitalWrite(motorPin, LOW);
  delay(2000);
}
