void setup()
{
  pinMode(1, OUTPUT); //define el pin 1 como salida
  pinMode(10, OUTPUT); //define el pin 10 como salida
  pinMode(2, OUTPUT); //define el pin 2 como salida
  pinMode(3, OUTPUT); //define el pin 3 como salida 
  pinMode(8, OUTPUT); //define el pin 8 como salida 
  pinMode(9, OUTPUT); //define el pin 9 como salida
}

void loop()
{
  digitalWrite(1, HIGH); //prende el pin 1
  digitalWrite(10, HIGH); //prende el pin 10
  delay(3000); //espera 3000 milisegundos
  digitalWrite(1, LOW); //apaga el pin 1
  digitalWrite(2, HIGH); //prende el pin 2
  delay(3000); //espera 3000 milisegundos
  digitalWrite(2, LOW); //apaga el pin 2
  digitalWrite(3, HIGH); //prende el pin 3
  digitalWrite(10, LOW); //apaga el pin 10
  delay(3000); //espera 3000 milisegundos
  digitalWrite(3, LOW); //apaga el pin 3
  digitalWrite(8, HIGH); //prende el pin 8
  delay(3000); //espera 3000 milisegundos
  digitalWrite(8, LOW); //apaga el pin 8
  digitalWrite(9, HIGH); //prende el pin 9
  delay(3000); //espera 3000 milisegundos
  digitalWrite(9, LOW); //apaga el pin 9
}
