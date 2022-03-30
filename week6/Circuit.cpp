#include <iostream>
#include "Car.h"
#include "Weather.h"
#include "Circuit.h"
#include <string>

Circuit::Circuit()
{
	cars_number = 0;
}

void Circuit::SetLength(int length)
{
	circ_length = length;
}

void Circuit::SetWeather(int weather)
{
	this->weather = weather;
}

bool Circuit::AddCar(Car* c)
{
	if (cars_number < 10)
	{
		cars[cars_number++] = c;
		return true;
	}
	return false;
}

void Circuit::Race()
{
	for (int i = 0; i < cars_number;i++)
	{
		finish_time[i] = cars[i]->Run(weather, circ_length);
		its_finished[i] = true;
	}
}

void Circuit::ShowFinalRanks()
{
	for (int i = 0; i < cars_number; i++)
	{
		if (its_finished[i] == true)
		{
			std::cout << " "<<cars[i]->getName() << " " << finish_time[i];
		}
	}
	std::cout << std::endl;
}

void Circuit::ShowWhoDidNotFinish()
{
	for (int i = 0; i < cars_number; i++)
	{
		if (!its_finished[i])
			std::cout << cars[i]->getName() << std::endl;
	}
}