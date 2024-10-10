int ledverde=11;
int ledamarelo=10;
int ledlaranja=9;
int ledazul=6;
int tempo=1;

void setup() {
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(6,OUTPUT);

}

void loop() {
  for(int pino=11;pino>=6;pino--){
  
  for (int escada=0;escada<=255;escada++){
  analogWrite(pino,escada);
  delay(tempo);}

  for (int escada=255;escada>=0;escada--){
  analogWrite(pino,escada);
  delay(tempo);}
}
}
