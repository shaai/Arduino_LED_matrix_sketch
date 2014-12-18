//include the library
#include "LedControlMS.h"

/*
Configuring the LEDMatrix:
Digital 2 is conneted to DIN (Data IN)
Digital 3 is connected to CLK (CLocK)
Digital 4 is connected to CS (LOAD)
5V is connected to VCC
GND is connected to GND
There is only one MAX7219 display module.
*/

#define NBR_MTX 2
LedControl lc=LedControl(2,3,4, NBR_MTX);
//LedControl lc=LedControl(2,3,4, NBR_MTX);

String sentence= "WDI WHAATTT ";
int letterCounter=0;
/* wait time between updates of the display */
unsigned long delaytime=300;

void setup() { // initalizes and sets up the initial values. Declaring function setup.
  /* The display module is in power-saving mode on startup.
  Do a wakeup call */
  Serial.begin(9600); // setting data rate as 9600 bits per second for serial data communication to computer
  Serial.println("Setup"); //prints data to serial port as human-readable text
  letterCounter=0;
  for (int i=0; i< NBR_MTX; i++){
    lc.shutdown(i,false); //keep the screen on
    lc.setIntensity(i,8); // set brightness to medium values
    lc.clearDisplay(i); //clear the display after each letter
  }
}

void loop() { //declaring function loop
  char ch= sentence[letterCounter]; //define character ch
  letterCounter++;
  if (letterCounter>14) letterCounter=0; //sets up loop
  lc.displayChar(0, lc.getCharArrayPosition(ch)); //display each character on the screen
  delay(2);
  lc.clearAll();
  delay(2);
}
