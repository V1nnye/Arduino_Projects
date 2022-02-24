
int LED = 12;
int BOTAO = 9;

void setup(){
  pinMode(BOTAO, INPUT);
  pinMode(LED, OUTPUT);
}

void loop(){
  if (digitalRead(BOTAO) == HIGH){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED, LOW);
  }
}
