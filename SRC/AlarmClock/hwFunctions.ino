
int digits[4];
int oldK=4;

void diaplay(int AB, int CD, int k, short* digitsPin,  short* numberPin) {
	//input domain: AB,CD:[ 0,99]
	digits[0] = AB / 10;
	digits[1] = AB % 10;
	digits[2] = CD / 10;
	digits[3] = CD % 10;

	for (int i = 0; i < 10; i++){

		if(i<4)digitalWrite(digitsPin,0);
		digitalWrite(numberPin,0);
	}

	digitalWrite(numberPin[digits[k]], 1);
}
void noDisplay( short* digitsPin,  short* numberPin){

	for (int i = 0; i < 10; i++){

		if(i<4)digitalWrite(digitsPin,0);
		digitalWrite(numberPin,0);
	}
}