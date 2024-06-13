void setup() {
  pinMode(21, OUTPUT);
}

// the loop function runs over and over again forevers
void loop() {
  digitalWrite(21, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);                       // wait for a second
  digitalWrite(21, LOW);    // turn the LED off by making the voltage LOW
  delay(300);                       // wait for a second       
               
}