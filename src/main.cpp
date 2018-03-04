#include "Arduino.h"

int test = 0;

void setup(){


}

void loop () {
for (size_t i = 0; i < 10; i++) {
 test = test ++;
  if (test == 1000) {
    test = 0;
  }
  delay(1000);
}


}
