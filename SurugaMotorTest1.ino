

#define STEPANGLE_SELECT_PIN 2
#define ALLWINDINGS_OFF_PIN 3
#define ROTATION_DIR_PIN 4
#define PULSE_PIN 5


float lastTime = 0;
int pulseDelay = 10;
long pulseToMove = 2500000;   //1cm, stepangle = 0.18


unsigned long int finishTime = 0;
int i;
double time1;
double time2;

void setup()
{
	Serial.begin(9600);      // open the serial port at 9600 bps:

							 //Define all motor control pins as outputs
	pinMode(STEPANGLE_SELECT_PIN, OUTPUT);
	pinMode(ALLWINDINGS_OFF_PIN, OUTPUT);
	pinMode(ROTATION_DIR_PIN, OUTPUT);
	pinMode(PULSE_PIN, OUTPUT);

	//Choose step angle as that from DATA1
	digitalWrite(STEPANGLE_SELECT_PIN, HIGH);

	//Choose motor to have windings on
	digitalWrite(ALLWINDINGS_OFF_PIN, LOW);

	//Choose clockwise rotation
	digitalWrite(ROTATION_DIR_PIN, HIGH);

	//Pulse low initally
	digitalWrite(PULSE_PIN, LOW);

	delay(5000);
	i = 0;
	time1 = 0;
	time2 = 0;

	/* add setup code here */




}

void loop()
{
	/*
	if (i == 0) {
	time1 = millis();
	for (double i = 0; i < 40000; i++) {
	digitalWrite(PULSE_PIN, HIGH);
	delayMicroseconds(10);
	digitalWrite(PULSE_PIN, LOW);
	delayMicroseconds(10);
	}
	time2 = millis();

	Serial.print((time2 - time1));

	i = 1;
	}


	//finishTime = millis();
	while (pulseToMove != 0) {
	if (micros() - lastTime >= pulseDelay) {
	digitalWrite(PULSE_PIN, HIGH);
	delayMicroseconds(2);
	digitalWrite(PULSE_PIN, LOW);
	lastTime = micros();
	pulseToMove--;
	}
	}

	*/




	//finishTime = millis() - finishTime;

	/* add main program code here */

}
