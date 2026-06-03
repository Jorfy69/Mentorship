// aaaaa

const int buttonPin = 2;  // the number of the pushbutton pin
const int redledPin = 12;    // the number of the LED pin
const int blueledpin =13;

// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status

void setup() {
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(redledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(redledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(redledPin, LOW);
  }
}
