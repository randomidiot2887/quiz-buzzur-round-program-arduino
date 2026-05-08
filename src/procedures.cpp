#include "procedures.h"

// ==========
// Procedures required for the program are stored here
// ==========
// - Beep (beep the buzzur 1 time for 100ms, halts the program while running)
void beep(){
  digitalWrite(buzzur, HIGH);
  delay(100);
  digitalWrite(buzzur, LOW);
}