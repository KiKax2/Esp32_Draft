// set pin numbers
const int touchPin = 4;
const int ledPin = 2;

const int threshold = 30;  // set the threshold

int ledState = LOW;         // the current state of the output pin
int touchState;             // the current reading from the input pin
int lastTouchState = LOW;   // the previous reading from the input pin

unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
unsigned long debounceDelay = 50;    // the debounce time; increase if the output flickers

void setup() {
  pinMode(ledPin, OUTPUT);

  // set initial LED state
  digitalWrite(ledPin, ledState);
}

void loop() {
  // read the state of the pin
  int reading = touchRead(touchPin);

  // binarize touch reading for easy operation
  if (reading < threshold) {
    reading = HIGH;
  } else{
    reading = LOW;
  }
  
  // If the pin is touched:
  if (reading != lastTouchState) {
    // reset the debouncing timer
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    // whatever the reading is at, it's been there for longer than the debounce
    // delay, so take it as the actual current state:

    // if the touch state has changed:
    if (reading != touchState) {
      touchState = reading;

      // only toggle the LED if the new touch state is HIGH
      if (touchState == HIGH) {
        ledState = !ledState;
      }
    }
  }

  // set the LED:
  digitalWrite(ledPin, ledState);

  // save the reading. Next time through the loop, it'll be the lastTouchState:
  lastTouchState = reading;
}