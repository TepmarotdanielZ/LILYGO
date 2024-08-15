void setup() {
  // Start the serial communication at 9600 baud rate
  Serial.begin(9600);
}

void loop() {
  // Print "Helloooo" to the serial monitor
  Serial.println("Helloooo");
  
  // Wait for 1 second (1000 milliseconds)
  delay(1000);
}
