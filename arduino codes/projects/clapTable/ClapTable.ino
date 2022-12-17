void setup() {

  int delay = 100;
  int clapDuration = 200;
  int timeBetweenClaps = 500;
  int numberOfClaps = 0;
  long clapMoment = 0;
  long clapDelay = 0;

  pinMode(5, INPUT);  // Sensor

  pinMode(1, OUTPUT);  // Relé 1
  digitalWrite(1, HIGH);

  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);

  pinMode(3, OUTPUT);
  digitalWrite(3, HIGH);

  pinMode(4, OUTPUT);
  digitalWrite(4, HIGH);
}

void loop() {


  int sensorRead = digitalRead(5);

  if (sensorRead == LOW) {

    if (clapMoment == 0) {
      clapMoment = clapDelay = millis();
      numberOfClaps = numberOfClaps + 1;
    } else if ((millis() - clapMoment) >= clapDuration) {
      clapMoment = 0;
    }
  }

  //Verifica se nenhuma palma mais pode ser dada
  if (((millis() - clapDelay) > timeBetweenClaps) && (numberOfClaps != 0)) {

    // Executa os relés
    if (numberOfClaps == 1) {
      digitalWrite(1, !digitalRead(1));  // Inverte a condição do relé
    }
    if (numberOfClaps == 2) {
      digitalWrite(2, !digitalRead(2));
    }
    if (numberOfClaps == 3) {
      digitalWrite(3, !digitalRead(3));
    }
    if (numberOfClaps == 4) {
      digitalWrite(4, !digitalRead(4));
    }

    delay(delay);
    numberOfClaps = 0;
  }
}
