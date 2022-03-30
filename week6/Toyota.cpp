#include "Car.h"
#include "Toyota.h"
#include "Weather.h"
Toyota::Toyota()
{
	fuelCapacity = 120;
	fuelConsumption = 40;
	averageSpeed[Rain] = 100;
	averageSpeed[Sunny] = 160;
	averageSpeed[Snow] = 50;
	name = (char*)"Toyota";
}
float Toyota::Run(int weather, int circl_length)
{
	int speed = averageSpeed[weather];
	float time = fuelCapacity / fuelConsumption;
	float distance = time * speed;
	return (time * circl_length / distance);
}

char* Toyota::getName()
{
	return name;
}