int Pinoled=13; //led no pino 13
int Botao=2; //botao no pino 2
int EstadoBotao=0; //variavel para ler o status do pushbutton

void setup()
{
     pinMode(Pinoled,OUTPUT); //pino do led sera saida
     pinMode(Botao,INPUT); //pino com botao sera entrada
}
void loop()
{
  EstadoBotao=digitalRead(Botao);
  if(EstadoBotao==HIGH) //se o botao estiver ligado
  {
    digitalWrite(Pinoled,HIGH); //acende o led do pino 13
  }
  else{
    digitalWrite(Pinoled,LOW); //deixa o led do pino 13 apagado
  }
}
