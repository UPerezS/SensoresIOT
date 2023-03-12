#include <dht.h>        // Incluir la biblioteca para el sensor DHT11

#define dhtPin 2        // Pin digital para el sensor DHT11
int ledPin = 13;        // Pin digital para el LED

dht DHT;                // Crear una instancia del objeto para el sensor DHT11

void setup() {
  // Configurar los pines como entrada y salida
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);  // Iniciar la comunicación serial
}

void loop() {
  int chk = DHT.read11(dhtPin);    // Leer los valores de temperatura y humedad del sensor DHT11
  Serial.print("Temperatura = ");
  Serial.print(DHT.temperature);
  Serial.print(" grados Celsius\t");
  Serial.print("Humedad = ");
  Serial.print(DHT.humidity);
  Serial.println("%");

  if (DHT.temperature > 25) {     // Encender el LED si la temperatura es mayor a 25 grados Celsius
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);    // Apagar el LED si la temperatura es menor o igual a 25 grados Celsius
  }

  delay(2000);  // Pequeña pausa entre lecturas
}
