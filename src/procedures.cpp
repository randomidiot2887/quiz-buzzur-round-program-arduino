#include "procedures.h"


void beep(){
  digitalWrite(buzzur, HIGH);
  delay(100);
  digitalWrite(buzzur, LOW);
}