#include <Arduino.h>

// inititlaiing all 4 leds
const int led1=8;
const int led2=9;
const int led3=10;
const int led4=11;
// initialising all 4 buttons
const int button1=4;
const int button2=5;
const int button3=6;
const int button4=7;


// Below is the code that runs one during setup
void setup() {
  // Initialising serial connection at 9600 baud
  Serial.begin(9600);
  // Initialising the leds as outputs
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);

  Serial.println("Ready to hear button presses");
}


// Below is the code to be looped
void loop() {
  if (digitalRead(button2) == LOW) {
    Serial.println("HE TOUCHED THE rrrrrrr BUTTON");
    
  }
}