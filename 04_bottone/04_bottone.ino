int counter = 0;

void setup() {

  Serial.begin(9600);

  pinMode(12, INPUT);   // bottone, pin e tipo di modo (INPUT o OUTPUT);
  pinMode(13, OUTPUT);  // LED sul pin numero 13

}

void loop() {

  if( digitalRead(12) == 1 ) {    // bottone premuto!
    Serial.println("Bottone premuto, esegui reset counter");
    counter = 0;

    digitalWrite(13, HIGH); // accendi il LED sul pin 13 (HIGH)
  }
  else {
    digitalWrite(13, LOW);  // senò, spegni il LED sul pin 13 (LOW)
  }

  Serial.println(counter);

  counter = counter + 1;

  delay(200);   // 0.2 secondi di pausa

}

