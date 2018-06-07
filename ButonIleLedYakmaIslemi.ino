int butonDurumu;

void setup() {

  pinMode(8,OUTPUT);
  pinMode(9,INPUT);
}

void loop() {

  butonDurumu = digitalRead(9);
  if(butonDurumu == HIGH)
  {
    digitalWrite(8,HIGH);
  }
  else 
  {
    digitalWrite(8,LOW);
  }
}
