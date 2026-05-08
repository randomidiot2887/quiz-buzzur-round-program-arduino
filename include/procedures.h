#ifndef PROCEDURES_H
#define PROCEDURES_H

#include <Arduino.h>

// "extern" means: this variable exists somewhere else (likely main.cpp)
// Don't give it a value here!
extern const int buzzur; 

// The "map" for your function
void beep();

#endif