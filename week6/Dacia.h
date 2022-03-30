#pragma once
#include "Car.h"
class Dacia :public Car
{
public:
	Dacia();
	virtual float Run(int weather, int circ_length);
	virtual char* getName();
};