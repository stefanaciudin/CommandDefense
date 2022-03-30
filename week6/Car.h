#pragma once
class Car 
{
protected:
	int fuelCapacity;
	int fuelConsumption;
	int averageSpeed[3];
	char* name;
public:
	virtual float Run(int weather, int circ_length) = 0;
	virtual char* getName() = 0;
};