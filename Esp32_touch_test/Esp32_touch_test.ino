// This is just a test of the touch pins of esp32-wroom-32
// Touch0 is T0 which is on GPIO 4.

void setup() {
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Test");
}

void loop() {
  Serial.print("Touch: ");
  Serial.println(touchRead(4));  // get touch value on GPIO 4
  delay(1000);
}