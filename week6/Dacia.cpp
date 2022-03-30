#include "Car.h"
#include "Dacia.h"
#include "Weather.h"

Dacia::Dacia()
{
	fuelCapacity = 50;
	fuelConsumption = 20;
	averageSpeed[Rain] = 20;
	averageSpeed[Sunny] = 60;
	averageSpeed[Snow] = 10;
	name = (char*)"Dacia";
}
float Dacia::Run(int weather, int circl_length)
{
	int speed = averageSpeed[weather];
	float time = fuelCapacity / fuelConsumption;
	float distance = time * speed;
	return (time * circl_length / distance);
}

char* Dacia::getName()
{
	return name;
}