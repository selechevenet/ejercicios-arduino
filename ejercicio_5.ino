int distancia = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2); // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT); // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(2, OUTPUT); //define el pin 2 como salida
  pinMode(3, OUTPUT); //define el pin 3 como salida
}

void loop()
{
  distancia = 0.01723 * readUltrasonicDistance(1, 1); //le da un valor a la variable distancia, este vale una constante por el valor que devuelve la función
  if (distancia < 150) { //condición que dice que si la distancia es mayor a 150 cm, se ejecutan las líneas dentro del if
    digitalWrite(2, HIGH); //se prende el pin 2
    tone(3, 523, 1000); //suena el tono del pin 3, con 523Hz, durante un segundo
  } else { //si el if es falso, se ejecutan las siguintes líneas
    digitalWrite(2, LOW); //apaga el pin 2
    noTone(3); //desactiva el tono
  }
  delay(10); //hace una pausa de 10 segundos para volver a empezar
