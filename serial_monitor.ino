// Define the pin for the button
const int buttonPin = 2;
int led = 8;


void setup() {
  // Set up serial communication
  Serial.begin(9600);
  
  // Configure the button pin as input with internal pull-up resistor
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(led, OUTPUT);

}

void loop() {
  // Read the state of the button
  int buttonState = digitalRead(buttonPin);

  // Check if the button is pressed (LOW)
  if (buttonState == LOW) {
    // Print "Pressed" in the serial monitor
    digitalWrite(led, HIGH);
    Serial.println("Umenifinya");
    delay(500); // Delay to avoid rapid serial output if the button is held down
  }
  else {
    digitalWrite(led, LOW);
    Serial.println("I'm not pressed!");
    delay(500);
  }
}
