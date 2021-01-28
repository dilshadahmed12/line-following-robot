int sensor_left=3;
int sensor_right=5;
int motor_right_forward=A4;
int motor_right_backward=A3;
int motor_left_forward=A2;
int motor_left_backward=A1;



void setup()
{
  pinMode(motor_right_forward, OUTPUT);
  pinMode(motor_right_backward, OUTPUT);
  pinMode(motor_left_forward, OUTPUT);
  pinMode(motor_left_backward, OUTPUT);
  pinMode(sensor_left, INPUT);
  pinMode(sensor_right, INPUT);
}

void loop()
{
if (digitalRead(sensor_left)<500 && digitalRead(sensor_right)<500) {
    digitalWrite(motor_right_forward,150);
    digitalWrite(motor_left_forward,150);
}
  else if (digitalRead(sensor_left)>500 && digitalRead(sensor_right)<500) {
    digitalWrite(motor_right_forward,150);
    digitalWrite(motor_left_forward,0);
  }
  else if (digitalRead(sensor_left)<500 && digitalRead(sensor_right)>500) {
    digitalWrite(motor_right_forward,0);
    digitalWrite(motor_left_forward,150);
  }
else {
      digitalWrite(motor_right_forward,0);
    digitalWrite(motor_left_forward,0);
}
}
