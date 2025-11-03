int porta=A0;
int valor;
int led=7; //led na porta 7

void setup()
{
  Serial.begin(9600); //fazendo a ligação do arduíno com o computador
  pinMode(porta,INPUT); //porta indefinida 
  pinMode(led,OUTPUT);

}

void loop() {

  valor=analogRead(porta); //lê o valor que o ldr está recebendo (quantidade de luz)
  Serial.println(valor); // mostra o valor no "verificar"
  if (valor<1023)
     digitalWrite(led,HIGH); // se o valor for maior que x o led acende e se for menor ele apaga 
  else
     digitalWrite(led,LOW);



}
