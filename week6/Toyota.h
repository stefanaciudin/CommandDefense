#pragma once
#include "Car.h"
class Toyota :public Car
{
public:
	Toyota();
	virtual float Run(int weather, int circ_length);
	virtual char* getName();
};