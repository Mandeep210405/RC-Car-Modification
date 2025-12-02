#include <ESP8266WiFi.h>
#include <Servo.h>

Servo myServo;
int servoPin = D3;  // Connect servo signal (yellow) to D3

void setup() {
  Serial.begin(115200);
  Serial.println("\n\nSERVO TEST PROGRAM");
  Serial.println("==================");
  
  // Attach servo to pin
  myServo.attach(servoPin);
  
  Serial.println("Servo attached to pin D3");
  Serial.println("Test sequence will start in 2 seconds...");
  delay(2000);
}

void loop() {
  Serial.println("\n--- TEST 1: Center Position (90°) ---");
  myServo.write(90);
  delay(2000);
  
  Serial.println("--- TEST 2: Full Left (0°) ---");
  myServo.write(0);
  delay(2000);
  
  Serial.println("--- TEST 3: Full Right (180°) ---");
  myServo.write(180);
  delay(2000);
  
  Serial.println("--- TEST 4: Back to Center (90°) ---");
  myServo.write(90);
  delay(2000);
  
  Serial.println("--- TEST 5: Sweep Left to Right ---");
  for(int angle = 0; angle <= 180; angle += 10) {
    myServo.write(angle);
    Serial.print("Angle: ");
    Serial.println(angle);
    delay(200);
  }
  
  Serial.println("--- TEST 6: Sweep Right to Left ---");
  for(int angle = 180; angle >= 0; angle -= 10) {
    myServo.write(angle);
    Serial.print("Angle: ");
    Serial.println(angle);
    delay(200);
  }
  
  Serial.println("\nTest cycle complete. Restarting in 3 seconds...");
  delay(3000);
}