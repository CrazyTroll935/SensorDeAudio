int MIC = 2;
int LED = 3;
int VALOR;
int ESTADO;

void setup() {
pinMode(MIC, INPUT);
pinMode(LED, OUTPUT);
}

void loop() {
VALOR = digitalRead(MIC);
if (VALOR == HIGH){
  ESTADO = digitalRead(LED);
  digitalWrite(LED, !ESTADO);
  delay(500);
}

}
