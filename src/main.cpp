#include <Arduino.h>
#include "procedures.h"

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
const int onboardled=LED_BUILTIN;
const int buzzur=12;
const int button[4]={4, 5, 6, 7};
const int led[4]={8, 9, 10, 11};
const int baud=9600; // Change to change the baud of the serial output of the arduino to match with the serial console


/*
Setup code that
- Enables serial (for debugging)
- Initialises LED's as outputs
- Initialises Buttons as inputs
- Intiialises the status of the components
*/

void setup(){
  Serial.begin(baud);                               // Enables serial with specified baud in line 19
  digitalWrite(onboardled, HIGH);
  Serial.println("Initialising devices connected to the arduino");
  for (int i=0;i<4;i++){                              // Start of for loop for initialising inputs & outputs
    pinMode(button[i], INPUT_PULLUP);               // Initialising buttons using the arduino's internal pull up resistor
    pinMode(led[i], OUTPUT);                        // Initialising leds of the arduino as outputs
    digitalWrite(led[i], OFF);                      // Turns off the LED as soon as it is declared
  }
  digitalWrite(onboardled, LOW);
  beep();
  Serial.println("Arduino has been initialised succesfully. Program will begin running in a bit");
  delay(500);
  digitalWrite(onboardled, HIGH);
}


void loop(){}