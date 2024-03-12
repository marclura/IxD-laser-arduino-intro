int pot = 0;

void setup() {

  Serial.begin(9600);

  pinMode(13, OUTPUT);  // Led sul pin 13

}

void loop() {

  pot = analogRead(A0);

  Serial.println(pot);

  digitalWrite(13, HIGH);

  delay(pot / 2);

  digitalWrite(13, LOW);

  delay(pot / 2);

}
