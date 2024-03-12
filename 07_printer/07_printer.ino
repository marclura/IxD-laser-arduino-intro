int pot = 0;
int bottone = 0;
String simbolo = "♥";

void setup() {
  
  Serial.begin(115200);
  pinMode(12, INPUT);   // bottone su pin 12

}

void loop() {

  pot = analogRead(A0);
  bottone = digitalRead(12);

  if(bottone == 1) {
    simbolo = "-";
  }
  else {
    simbolo = "♥";
  }

  for(int i = 0; i < pot; i++) {
    Serial.print(simbolo);
  }

  Serial.println();
  
  delay(1);

}
