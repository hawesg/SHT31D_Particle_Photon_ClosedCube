/*

This is example for SHT3X-DIS Digital Humidity & Temperature Sensors Arduino Library
ClosedCube SHT31-D [Digital I2C] Humidity and Temperature Sensor Breakout 

Initial Date: 06-Oct-2015
Last Updated: 12-Oct-2016

Hardware connections for Arduino Uno:
	VDD to 3.3V DC
	SDA to A4
	SCL to A5
	GND to common ground

MIT License

*/

#include <Wire.h>
#include <ClosedCube_SHT31D.h>

ClosedCube_SHT31D sht31d;

void setup()
{
	Serial.begin(9600);
	Serial.println("ClosedCube SHT31-D Who I Am Example");
	
	sht31d.begin(0x44);
}

void loop()
{
	Serial.print("SHT31D Serial #");
	Serial.println(sht31d.readSerialNumber());
	delay(250);	
}

