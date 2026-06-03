/**
 * blinking_light — Arduino Sketch
 * Created: 2026-05-08
 */

/**
 * Initial setup — Runs once when board powers on.
d */
#define MYPIN 10
void setup() {
  // Initialize serial communication (baud rate: 9600)
  Serial.begin(9600);
  pinMode(MYPIN, OUTPUT);
  
}

void loop() {
  digitalWrite(MYPIN, HIGH);
  delay(100);
  Serial.print("Test");
  digitalWrite(MYPIN, LOW);
  delay(100);
}
