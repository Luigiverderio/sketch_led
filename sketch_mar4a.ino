int led = 6; //Definindo o pino como 6

void setup(){ //Inicializando o Arduino

  pinMode(led, OUTPUT); //Declarando a porta de saída do Arduino
}

void loop(){ 
  digitalWrite(led, HIGH); //Liga
  delay(100); //Delay 100 mS
  digitalWrite(led, LOW); //Desliga
  delay(200); //Delay 400 mS
}
//------------------------//