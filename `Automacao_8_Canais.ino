// Automação 8 Canais - Controle via Serial (Wokwi Simples) - Adam 2025
const int rele[8] = {4, 5, 18, 19, 21, 22, 23, 25};

void setup() {
  Serial.begin(115200);
  for(int i = 0; i < 8; i++) {
    pinMode(rele[i], OUTPUT);
    digitalWrite(rele[i], HIGH); // Desliga (ativo-baixo)
  }
  Serial.println("Automação 8 Canais Iniciada!");
  Serial.println("Digite: 'on X' ou 'off X' (X=1 a 8) pra controlar. Ex: on 1");
}

void loop() {
  if (Serial.available() > 0) {
    String comando = Serial.readStringUntil('\n');
    comando.trim();
    if (comando.startsWith("on ")) {
      int canal = comando.substring(3).toInt() - 1;
      if (canal >= 0 && canal < 8) {
        digitalWrite(rele[canal], LOW); // Liga
        Serial.println("Canal " + String(canal+1) + " LIGADO!");
      }
    } else if (comando.startsWith("off ")) {
      int canal = comando.substring(4).toInt() - 1;
      if (canal >= 0 && canal < 8) {
        digitalWrite(rele[canal], HIGH); // Desliga
        Serial.println("Canal " + String(canal+1) + " DESLIGADO!");
      }
    } else if (comando == "status") {
      Serial.println("Status dos Canais:");
      for(int i = 0; i < 8; i++) {
        String estado = digitalRead(rele[i]) ? "OFF" : "ON";
        Serial.println("Canal " + String(i+1) + ": " + estado);
      }
    }
  }
}
