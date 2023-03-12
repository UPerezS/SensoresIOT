int sensorPin = A0;   // Pin analógico para el sensor de sonido

void setup() {
  // Configurar los pines como entrada y salida
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);  // Iniciar la comunicación serial
}

void loop() {
  int sensorValue = analogRead(sensorPin);  // Leer el valor del sensor
  Serial.println(sensorValue);              // Imprimir el valor en el monitor serial

  if (sensorValue > 500) {
    digitalWrite(dPin, HIGH);  // Encender el LED si el nivel de sonido es alto
  }

  delay(10);  // Pequeña pausa entre lecturas
}

En este ejemplo, se configura un pin analógico para leer la señal del sensor de sonido y un pin digital para controlar un LED. En el bucle principal, se lee el valor del sensor y se imprime en el monitor serial para su visualización en la computadora. Si el nivel de sonido es alto (valor mayor a 500), se enciende el LED; de lo contrario, se apaga. El código también incluye una pequeña pausa entre lecturas para evitar lecturas erráticas del sensor.

