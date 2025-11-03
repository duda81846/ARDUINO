int pino10=10;
int pino08=8;
int pino06=6;

void setup(){
  pinMode (pino10,OUTPUT);
  pinMode (pino08,OUTPUT);
  pinMode (pino06,OUTPUT);
}
void loop(){
    digitalWrite(pino10,HIGH);
    digitalWrite(pino08,LOW);
    delay(1000);

    digitalWrite(pino10,LOW);
    digitalWrite(pino06,HIGH);
    delay(1000);

    digitalWrite(pino06,LOW);
    digitalWrite(pino08,HIGH);
    delay(1000);
  }
