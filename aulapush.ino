int LedVermelho= 11; 
int PushVermelho= 12; 
int LedLaranja= 8; 
int PushLaranja= 7;
int LedAmarelo= 4; 
int PushAmarelo= 2;                                                                                                                             

void setup() {
  pinMode(LedVermelho, OUTPUT);
  pinMode(PushVermelho, INPUT);
  Serial.begin(9600);

   pinMode(LedLaranja, OUTPUT);
  pinMode(PushLaranja, INPUT);
  Serial.begin(9600);

   pinMode(LedAmarelo, OUTPUT);
  pinMode(PushAmarelo , INPUT);
  Serial.begin(9600);

}

void loop() {   
  digitalWrite(LedLaranja,LOW);
 if(digitalRead(PushLaranja)==HIGH){
  digitalWrite(LedLaranja,HIGH); }
  else {digitalWrite(LedLaranja,LOW);}

   digitalWrite(LedVermelho,LOW);
 if(digitalRead(PushVermelho)==HIGH){
  digitalWrite(LedVermelho,HIGH); }
  else {digitalWrite(LedVermelho,LOW);}

   digitalWrite(LedAmarelo,LOW);
 if(digitalRead(PushAmarelo)==HIGH){
  digitalWrite(LedAmarelo,HIGH); }
  else {digitalWrite(LedAmarelo,LOW);}
  
}
