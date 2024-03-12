// IF condition

int counter = 0;

void setup() {

  Serial.begin(9600);

}

void loop() {

  if(counter == 10) {   // se counter = 10, reset counter = 0
    Serial.println("Reset counter!");
    counter = 0;
  }
  else if(counter == 5) {   // siamo a metà
    Serial.println("Siamo a metà");
  }
  else if(counter == 9) {
    Serial.println("Ultimo numero raggiunto");
  }
  else {    // in tutti gli altri casi...
    Serial.println("conta ancora!");
  }

  Serial.println(counter);

  counter = counter + 1;

  delay(1000);

}
