
int LED = 12;
int BOTAO = 9;

void setup(){
  pinMode(BOTAO, INPUT); // configura o pino com o botão como entrada
  pinMode(LED, OUTPUT); // configura o pino com o LED como saída
}

void loop(){
  if (digitalRead(BOTAO) == HIGH){ // se botão estiver pressionado (HIGH)
    digitalWrite(LED, HIGH); // acende o LED
  }
  else{ // se não estiver pressionado (LOW)
    digitalWrite(LED, LOW); // apaga o LED
  }
}
