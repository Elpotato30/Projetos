// Projeto Arduino - Sinaleira de Largada Fórmula 1

// LEDs vermelhos
int ledVermelho01 = 12;
int ledVermelho02 = 11;
int ledVermelho03 = 9;
int ledVermelho04 = 10;

// LEDs verdes
int ledVerde01 = 7;
int ledVerde02 = 6;
int ledVerde03 = 5;
int ledVerde04 = 4;

void setup()
{
  pinMode(ledVermelho01, OUTPUT);
  pinMode(ledVermelho02, OUTPUT);
  pinMode(ledVermelho03, OUTPUT);
  pinMode(ledVermelho04, OUTPUT);

  pinMode(ledVerde01, OUTPUT);
  pinMode(ledVerde02, OUTPUT);
  pinMode(ledVerde03, OUTPUT);
  pinMode(ledVerde04, OUTPUT);
}

void loop()
{
  // Acende os vermelhos em sequência

  digitalWrite(ledVermelho01, HIGH);
  delay(800);

  digitalWrite(ledVermelho02, HIGH);
  delay(800);

  digitalWrite(ledVermelho03, HIGH);
  delay(800);

  digitalWrite(ledVermelho04, HIGH);
  delay(800);

  // Espera antes da largada
  delay(1000);

  // Apaga vermelhos

  digitalWrite(ledVermelho01, LOW);
  digitalWrite(ledVermelho02, LOW);
  digitalWrite(ledVermelho03, LOW);
  digitalWrite(ledVermelho04, LOW);

  // Acende verdes

  digitalWrite(ledVerde01, HIGH);
  digitalWrite(ledVerde02, HIGH);
  digitalWrite(ledVerde03, HIGH);
  digitalWrite(ledVerde04, HIGH);

  // Mantém a largada finalizada
  while (true)
  {

  }
}
