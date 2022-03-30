#pragma once
#include "Car.h"
class Mercedes :public Car
{
public:
	Mercedes();
	virtual float Run(int weather, int circ_length);
	virtual char* getName();
};