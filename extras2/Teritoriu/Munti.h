#pragma once
#include "Teritoriu.h"

class Munti :public Teritoriu
{
public:
	int altitudine;

	Munti(string name, int sup, int alt);
	~Munti();
	int CalculeazaSuprafata();
	void Afiseaza();
};