// Bottone input

void setup() {

  Serial.begin(9600);

  pinMode(12, INPUT);   // dire all'Arduino che sul pin 12 c'è qualcosa da leggere

}

void loop() {

  int bottone = digitalRead(12);  // leggere il pin 12 e salvare il valore nella variabile bottone

  Serial.println(bottone);

  delay(100);

}
