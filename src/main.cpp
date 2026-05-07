#include <Arduino.h>

/*
If neccecery you can replace the below code with
#define ON HIGH
#define OFF LOW
If we figure out what the fuge is wrong with the circut
*/
#define ON LOW
#define OFF HIGH
/*
The following block of code handles the setting of the pins of all the components used in the circut
These pins will be used by the arduino to interact with the circut
-----------------
*/
const int buzzur=12;
const int button[4]={4, 5, 6, 7};
const int led[4]={8, 9, 10, 11};
const int baud=9600; // Change to change the baud of the serial output of the arduino to match with the serial console

// ==========
// FUNCTIONS
// ==========
// - Beep (beep the buzzur 1 time for 100ms, halts the program while running)
void beep(){
  digitalWrite(buzzur, HIGH);
  delay(100);
  digitalWrite(buzzur, LOW);
}


/*
Setup code that
- Enables serial (for debugging)
- Initialises LED's as outputs
- Initialises Buttons as inputs
- Intiialises the status of the components
*/

void setup(){
  Serial.begin(baud);                               // Enables serial with specified baud in line 19
  Serial.println("Initialising devices connected to the arduino");
  for (int i=0;i<4;i++){                              // Start of for loop for initialising inputs & outputs
    pinMode(button[i], INPUT_PULLUP);               // Initialising buttons using the arduino's internal pull up resistor
    pinMode(led[i], OUTPUT);                        // Initialising leds of the arduino as outputs
    digitalWrite(led[i], OFF);                      // Turns off the LED as soon as it is declared
  }
  beep();
  Serial.println("Arduino has been initialised succesfully. Program will begin running in a bit");
  delay(500);
}


void loop(){
  
}
/*
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
*/
