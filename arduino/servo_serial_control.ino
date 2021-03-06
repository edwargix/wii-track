
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object

  Serial.begin(9600);
  Serial.println("<Arduino is ready>\r\n");


}

void loop() {

  String recieved_data;
  int servo_data;

  if (Serial.available()) {
    delay(15);
    Serial.println("IN LOOP");
    recieved_data = Serial.readString();
    servo_data = recieved_data.toInt();
    myservo.write(servo_data);
    delay(15);
  }


//    for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
//      // in steps of 1 degree
//      myservo.write(pos);              // tell servo to go to position in variable 'pos'
//      delay(15);                       // waits 15ms for the servo to reach the position
//    }
//    for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
//      myservo.write(pos);              // tell servo to go to position in variable 'pos'
//      delay(15);                       // waits 15ms for the servo to reach the position
//    }





}
