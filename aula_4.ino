int ledverde=11;
int ledamarelo=10;
int ledlaranja=9;
int ledazul=6;
int tempo=300;

void setup() {
  pinMode(ledverde,OUTPUT);
  pinMode(ledamarelo,OUTPUT);
  pinMode(ledlaranja,OUTPUT);
  pinMode(ledazul,OUTPUT);

}

void loop() {
  analogWrite(ledverde,65);
  delay(tempo);
  analogWrite(ledverde,125);
  delay(tempo);
  analogWrite(ledverde,195);
  delay(tempo);
  analogWrite(ledverde,255);
  delay(tempo);
  analogWrite(ledverde,195);
  delay(tempo);
  analogWrite(ledverde,125);
  delay(tempo);

  analogWrite(ledamarelo,65);
  delay(tempo);
  analogWrite(ledamarelo,125);
  delay(tempo);
  analogWrite(ledamarelo,195);
  delay(tempo);
  analogWrite(ledamarelo,255);
  delay(tempo);
  analogWrite(ledamarelo,195);
  delay(tempo);
  analogWrite(ledamarelo,125);
  delay(tempo);

  analogWrite(ledlaranja,45);
  delay(tempo);
  analogWrite(ledlaranja,105);
  delay(tempo);
  analogWrite(ledlaranja,175);
  delay(tempo);
  analogWrite(ledlaranja,235);
  delay(tempo);
  analogWrite(ledlaranja,175);
  delay(tempo);
  analogWrite(ledlaranja,105);
  delay(tempo);

  analogWrite(ledazul,65);
  delay(tempo);
  analogWrite(ledazul,125);
  delay(tempo);
  analogWrite(ledazul,195);
  delay(tempo);
  analogWrite(ledazul,255);
  delay(tempo);
  analogWrite(ledazul,195);
  delay(tempo);
  analogWrite(ledazul,125);
  delay(tempo);



  
} 
