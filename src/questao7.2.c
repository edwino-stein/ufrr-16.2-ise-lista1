//
// Programa para ligar e desligar um LED para Arduino
//

// Inicializa a placa
void setup() {
    // Define o pino LED_BUILTIN (13) como output
    pinMode(LED_BUILTIN, OUTPUT);
}

// Programa princial
void loop() {
    // Liga o LED
    digitalWrite(LED_BUILTIN, HIGH);
    // Espera 5 segundos
    delay(5000);
    // Desliga o LED
    digitalWrite(LED_BUILTIN, LOW);
}
