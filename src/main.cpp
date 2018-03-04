/*
A code to mess around with to get to know gitHub
 */
#include "Arduino.h"

int test = 0;

void setup(){

}

void loop () {
        for (int i = 0; i < 10; i++) {
                test = test++;
                if (test == 1000) {
                        test = 0;
                }
                delay(1000);

                //this is the main function
        }
}
