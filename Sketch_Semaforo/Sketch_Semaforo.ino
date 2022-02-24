//Simulador de Semáforo

int VERM = 10;
int AMAR = 11;
int VERD = 12;

void setup(){
  pinMode(VERM, OUTPUT);
  pinMode(AMAR, OUTPUT);
  pinMode(VERD, OUTPUT);
}

void loop(){
  digitalWrite(VERM, HIGH);
  digitalWrite(AMAR, LOW);
  digitalWrite(VERD, LOW);
  delay(2000);

  digitalWrite(VERM, LOW);
  digitalWrite(AMAR, LOW);
  digitalWrite(VERD, HIGH);
  delay(3000);

  digitalWrite(VERM, LOW);
  digitalWrite(AMAR, HIGH);
  digitalWrite(VERD, LOW);
  delay(1000);
}
