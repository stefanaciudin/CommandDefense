#pragma once
#include "Dacia.h"
#include "Toyota.h"
#include "Mercedes.h"
#include <string>
using namespace std;
class Circuit 
{
private:
	int circ_length;
	Car* cars[10];
	int finish_time[10];
	bool its_finished[10];

	int cars_number;
	int weather;


public:
	Circuit();
	void SetLength(int length);
	void SetWeather(int weather);
	bool AddCar(Car* c);
	void Race();

	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};
