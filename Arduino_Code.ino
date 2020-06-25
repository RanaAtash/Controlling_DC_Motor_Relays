// Define control pins for the two relays 
int relay1 = 2;
int relay2 = 3;

void setup()
{
  // configure pins as OUTPUT
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT); 
}

void loop()
{
  // Rotate motor ClockWise
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, HIGH);
  // Wait for 2 seconds 
  delay(2000); 
  // Rotate motor CounterClockWise
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, LOW);
  // Wait for 2 seconds
  delay(2000);
  // Stop motor
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  // Wait for 2 seconds
  delay(2000);  
}
