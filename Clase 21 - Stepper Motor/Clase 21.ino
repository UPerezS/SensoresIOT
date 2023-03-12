#include <Stepper.h>   // Incluir la biblioteca Stepper.h

// Definir los pines para el motor
#define motorPin1 8
#define motorPin2 9
#define motorPin3 10
#define motorPin4 11

// Crear una instancia del objeto Stepper para el motor
Stepper motor(2048, motorPin1, motorPin3, motorPin2, motorPin4);

void setup() {
  // No se necesita configurar los pines del motor paso a paso
}

void loop() {
  // Mover el motor una vuelta en una dirección
  motor.setSpeed(60);   // Velocidad en rpm
  motor.step(2048);     // Número de pasos por vuelta

  delay(1000);  // Pequeña pausa entre movimientos

  // Mover el motor una vuelta en la dirección opuesta
  motor.setSpeed(60);   // Velocidad en rpm
  motor.step(-2048);    // Número de pasos por vuelta en dirección opuesta

  delay(1000);  // Pequeña pausa entre movimientos
}
