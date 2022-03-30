#include "Car.h"
#include "Mercedes.h"
#include "Weather.h"
#include<string>
Mercedes::Mercedes()
{
	fuelCapacity = 190;
	fuelConsumption = 20;
	averageSpeed[Rain] = 40;
	averageSpeed[Sunny] = 80;
	averageSpeed[Snow] = 40;
	name = (char*)"Mercedes";
}
float Mercedes::Run(int weather, int circ_length)
{
	int speed = averageSpeed[weather];
	float time = fuelCapacity / fuelConsumption;
	float distance = time * speed;
	return (time * circ_length / distance);
}

char* Mercedes::getName()
{
	return name;
}