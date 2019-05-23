#include <Servo.h>

Servo servoLeft;
Servo servoRight;



void setup() {
tone(4,300,1000);
delay(1000);

Serial.begin(9600);
servoLeft.attach(13);

}

void loop()
{
  // loop counts with pulseWidth from 1375 to 1625 in increments of 25.
  for (int pulseWidth = 1375; pulseWidth <= 1625; pulseWidth += 25)
  {
  Serial.print("pulseWidth = ");
  Serial.println(pulseWidth);
  
  Serial.println("Press a key and click");
  Serial.println("Send to start servo...");

  while(Serial.available() == 0);
  Serial.read();

  Serial.println("Running...");
  servoLeft.writeMicroseconds(1500);
}
}

