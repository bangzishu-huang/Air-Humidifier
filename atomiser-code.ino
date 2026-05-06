int atomPin = 3; 

void setup() {
  pinMode(atomPin, OUTPUT);
  digitalWrite(atomPin, HIGH);  
  pressButton();
}

void loop() {
}

void pressButton() {
  digitalWrite(atomPin, LOW);  
  delay(200);               
  digitalWrite(atomPin, HIGH); 
}