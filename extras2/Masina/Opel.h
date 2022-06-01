#pragma once
#include <string>
using namespace std;
#include "MasinaOras.h"
class Opel :public MasinaOras
{
	int capacitate;
	string culoare;
	int anFabricatie;
public:
	string GetName();
	int getCapacitate();
	string getCuloare();
	void setCapacitate(int capacity);
	void setCuloare(string color);
	void setAnFabricatie(int an);
	int getAnFabricatie();
};