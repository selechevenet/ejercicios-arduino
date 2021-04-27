void setup()
{
  pinMode(3, INPUT); //define el pin 3 como entrada
  pinMode(2, OUTPUT); //define el pin 2 como salida
  pinMode(1, OUTPUT); //define el pin 1 como salida
}

void loop()
{
  if (digitalRead(3) == HIGH) { //pone como condición para ejecutar las líneas de abajo, que el pin 3 esté en alto
    digitalWrite(2, HIGH); //línea que se ejecuta si la condición es verdadera, prende el pin 2
    digitalWrite(1, LOW); //línea que se ejecuta si la condición es verdadera, apaga el pin 1
  } else { //si la condición no es verdadera, se jecuta esta parte del código
    digitalWrite(2, LOW); //línea que se ejecuta si la condición es falsa, apaga el pin 2
    digitalWrite(1, HIGH); //línea que se ejecuta si la condición es falsa, prende el pin 1
  }
  delay(10); //deja en pausa el código y hace una espera de 10 segundos para volver a empezar
}
