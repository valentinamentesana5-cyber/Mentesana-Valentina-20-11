// Declaración de pines
const int ledRojo = 12;
const int ledAmarillo = 9;
const int ledVerde = 6;

void setup() {
  // Configurar los pines como salidas
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  // 1. Encender LED Verde (5 segundos)
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledAmarillo, LOW);
  digitalWrite(ledRojo, LOW);
  delay(5000); // 5000 ms = 5 segundos

  // 2. Encender LED Amarillo (2 segundos)
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarillo, HIGH);
  digitalWrite(ledRojo, LOW);
  delay(2000); // 2 segundos

  // 3. Encender LED Rojo (5 segundos)
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarillo, LOW);
  digitalWrite(ledRojo, HIGH);
  delay(5000); // 5 segundos
}