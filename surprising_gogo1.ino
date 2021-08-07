// C++ code
//
#include <Servo.h>

int position = 0;

int i = 0;

int j = 0;

Servo servo_6;

Servo servo_5;

Servo servo_4;

Servo servo_3;

Servo servo_2;

Servo servo_1;

void setup()
{
  servo_6.attach(6, 500, 2500);

  servo_5.attach(5, 500, 2500);

  servo_4.attach(4, 500, 2500);

  servo_3.attach(3, 500, 2500);

  servo_2.attach(2, 500, 2500);

  servo_1.attach(1, 500, 2500);

}

void loop()
{
  position = 0;
  for (position = 1; position <= 89; position += 1) {
    servo_6.write(position);
  }
  delay(20); // Wait for 20 millisecond(s)
  for (i = 89; i >= 1; i -= 1) {
    servo_6.write(position);
  }
  position = 0;
  for (position = 1; position <= 89; position += 1) {
    servo_5.write(position);
  }
  delay(20); // Wait for 20 millisecond(s)
  for (i = 89; i >= 1; i -= 1) {
    servo_5.write(position);
  }
  position = 0;
  for (position = 1; position <= 89; position += 1) {
    servo_4.write(position);
  }
  delay(20); // Wait for 20 millisecond(s)
  for (i = 89; i >= 1; i -= 1) {
    servo_4.write(position);
  }
  position = 0;
  for (position = 1; position <= 89; position += 1) {
    servo_3.write(position);
  }
  delay(20); // Wait for 20 millisecond(s)
  for (i = 89; i >= 1; i -= 1) {
    servo_3.write(position);
  }
  position = 0;
  for (position = 1; position <= 89; position += 1) {
    servo_2.write(position);
  }
  delay(20); // Wait for 20 millisecond(s)
  for (i = 89; i >= 1; i -= 1) {
    servo_2.write(position);
  }
  position = 0;
  for (position = 1; position <= 89; position += 1) {
    servo_1.write(position);
  }
  delay(20); // Wait for 20 millisecond(s)
  for (i = 89; i >= 1; i -= 1) {
    servo_1.write(position);
  }
}