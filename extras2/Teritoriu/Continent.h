#pragma once
#include <vector>
#include "Teritoriu.h"
#include "Stat.h"

class Continent :public Teritoriu
{
public:
	vector<Stat> state;
	Continent(string n);
	~Continent();
	void Add(Stat s);
	int CalculeazaSuprafata();
	void Afiseaza();
	void AfiseazaStateCuMunti();
};