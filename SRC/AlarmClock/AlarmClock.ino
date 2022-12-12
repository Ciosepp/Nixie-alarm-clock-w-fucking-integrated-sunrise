//Arduino Uno board
/*
pin config
number0
number1
number2
number3
number4
number5
number6
number7
number8
number9

digit1
digit2
digit3
digit4

allarm out

I2C SDA
I2C SCL

Analog Multi1
Analog Multi2
*/
#include "Timer.h"
Timer refeshTimer;

#include "pinConfig.h"
#include "dataConfig.h"

bool busy = false;
int c = 0;


void setup() {
	refeshTimer.setClock(10,80);
}

void loop() {

}