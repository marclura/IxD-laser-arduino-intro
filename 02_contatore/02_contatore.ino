// Variabili

int counter = 0;
String messaggio = "Ciao Marco";

void setup() {

  Serial.begin(9600);

  Serial.println(messaggio);

}

void loop() {

  Serial.println(counter);

  counter = counter + 1;    // counter++;

  delay(1000);

}
