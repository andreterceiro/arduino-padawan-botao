
33 lines (28 sloc) 577 Bytes
float s;
const int seletor = A3; 
const int intervalo = 1000;
const int Bar_Y2 = A5;
const int Bar_R = A4;
const int botao = 2;

float ler_sensor() {
  return digitalRead(botao);
}

void setup() {
  pinMode(Bar_R, OUTPUT);
  pinMode(Bar_Y2, OUTPUT);
  pinMode(seletor, OUTPUT);
  pinMode(botao, OUTPUT);
  digitalWrite(seletor, HIGH);
}

void loop() {
  s = ler_sensor();
  
  if (s == 1) {
    digitalWrite(Bar_R, HIGH);
    digitalWrite(Bar_Y2, LOW);
    delay(intervalo);
  } else {
    digitalWrite(Bar_Y2, HIGH);
    digitalWrite(Bar_R, LOW);
    delay(intervalo);
  }
}
