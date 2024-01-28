#define JOYSTICK_X A0 // Analog pin connected to X-axis of joystick
#define JOYSTICK_Y A1 // Analog pin connected to Y-axis of joystick
#define JOYSTICK_BUTTON 2 // Digital pin connected to the joystick button
#define Throttle A2 
void setup() {
  pinMode(JOYSTICK_BUTTON, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // Read joystick position
  float xVal = (analogRead(JOYSTICK_X)/512.0)-0.987;
  float yVal = (analogRead(JOYSTICK_Y)/512.0)-0.980;
  float throt = ((analogRead(Throttle)/1024.0));
  // Read button state
  int buttonState = digitalRead(JOYSTICK_BUTTON);
 /* if (throt>1){
    throt=1;
  }
  else if (throt<0){
    throt=0;
  }*/

  // Print values to Serial Monitor
  Serial.print(xVal,3);
  Serial.print(",");
  Serial.print(yVal,3);
  Serial.print(",");
  Serial.print(throt,2);
  Serial.print(",");
  Serial.print(throt,2);
  Serial.print(",");
  Serial.println(throt,2);
 // delay(33); // Adjust delay as needed
}
