#pragma once
#include "MasinaOras.h"
#include <string>
class Dacia :public MasinaOras
{
	int capacitate;
	string culoare;
public:
	string GetName();
	int getCapacitate();
	string getCuloare();
	void setCapacitate(int c);
	void setCuloare(string color);
};