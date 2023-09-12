/*
   Blink
   Turns on and off an LED with a button press
*/

// the setup function runs once when you press reset or power the board
int button;
int led;
int keyPressed;

void setup()
{
  button = 3;
  led = 6;
  // set up the read and write button
  pinMode(button, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}


// the loop function runs over and over again forever

void loop() {
  // button is pressed
  if(digitalRead(button)==HIGH){
    keyPressed = ~keyPressed; 
    delay(200);
  }
  if(keyPressed==0){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
}