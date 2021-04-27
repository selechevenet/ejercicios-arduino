void setup()
{
  pinMode(2, INPUT); //define el pin 2 como entrada
  pinMode(1, INPUT); //define el pin 1 como entrada
  pinMode(3, OUTPUT); //define el pin 3 como salida
  pinMode(11, OUTPUT); //define el pin 11 como salida
}

void loop()
{
  if (digitalRead(2) == HIGH) { //pone como condición que el pin 2 esté en alto para ejecutar el código adentro del if
    if (digitalRead(1) == HIGH) { //pone otra condición que si el pin 1 está en alto ejecuta las líneas dentro de este if
      tone(3, 523, 1000); //si la segunda condición es verdadera, comienza a sonar un tono del pin 3, con 523Hz, durante 1 segundo
      digitalWrite(11, HIGH); //si la segunda condición es verdadera, también prende el pin 11
    } else { //si la segunda condición es falsa, se ejecuta esta parte del código
      digitalWrite(11, LOW); //apaga el pin 11
      noTone(3); //desactiva el tono
    }
  } else { //si la primer condición es falsa, se ejecuta a partir de estas líneas
    digitalWrite(11, LOW); //apaga el pin 11
    noTone(3); //desactiva el tono
  }
  delay(10); //hace una pausa de 10 segundos para volver a empezar
