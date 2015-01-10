#include <SoftwareSerial.h>

#define RXPIN 6
#define TXPIN 7

SoftwareSerial mySerial(RXPIN, TXPIN);

void setup()
{
	Serial.begin(115200);
	while(!Serial)
		;

	mySerial.begin(2400);

	return;
}

void loop()
{
	int c;

	if(mySerial.available())
		Serial.write(mySerial.read());
	if(Serial.available())
		mySerial.write(Serial.read());
	
	return;
}
