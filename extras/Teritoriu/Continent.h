#pragma once
#include "Teritoriu.h"
#include "Stat.h"
class Continent:public Teritoriu
{
private:
	const char* name;
	Stat state[10];
	int count;
	int max_count = 10;
public:
	Continent(const char* nume);
	~Continent();
	int CalculeazaSuprafata();
	void Afiseaza();
	bool Add(Stat s);
	void AfiseazaStateCuMunti();
};