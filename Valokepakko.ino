const int BUTTON_PIN = 12;
const int LED_PIN = 13;
const int PIEZO_PIN = 8;

// See https://www.arduino.cc/en/Tutorial/StateChangeDetection

void setup() {
  // Initialize the button pin as a input.
  pinMode(BUTTON_PIN, INPUT);
  // initialize the LED as an output.
  pinMode(LED_PIN, OUTPUT);
  // Initialize serial communication for debugging.
  Serial.begin(9600);
}

int buttonState = 0;
int lastButtonState = 0;


void loop() {
  buttonState = digitalRead(BUTTON_PIN);

  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      // If the current state is HIGH then the button
      // went from off to on:
      Serial.println("on");

    } else {
      Serial.println("off");
    }
  }
  lastButtonState = buttonState;

  if (buttonState == HIGH) {
    // Play a tone
    tone(PIEZO_PIN, 200, 20);
    // Light the LED.
    digitalWrite(LED_PIN, HIGH);
    // Delay a little bit to avoid bouncing.
    delay(50);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}