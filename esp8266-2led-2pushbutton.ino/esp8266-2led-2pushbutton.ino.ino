const int botao1Pin = 16; //D0
const int botao2Pin = 5; //D1
const int led1Pin = 2; //D4
const int led2Pin = 14; //D5

// Variáveis para armazenar o estado dos LEDs
bool led1Ligado = false;
bool led2Ligado = false;

void setup() {
  pinMode(botao1Pin, INPUT);
  pinMode(botao2Pin, INPUT);
  
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  
  // Desliga os LEDs inicialmente
  digitalWrite(led1Pin, LOW);
  digitalWrite(led2Pin, LOW);
}

void loop() {
  // Verifica o estado do botão 1
  if (digitalRead(botao1Pin) == HIGH) {
    led1Ligado = !led1Ligado; // Inverte o estado do LED 1
    digitalWrite(led1Pin, led1Ligado ? HIGH : LOW); // Liga ou desliga o LED 1
    delay(200); // Delay para debounce
  }
  
  // Verifica o estado do botão 2
  if (digitalRead(botao2Pin) == HIGH) {
    led2Ligado = !led2Ligado; // Inverte o estado do LED 2
    digitalWrite(led2Pin, led2Ligado ? HIGH : LOW); // Liga ou desliga o LED 2
    delay(200); // Delay para debounce
  }
}