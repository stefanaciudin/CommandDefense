#pragma once
#include "Teritoriu.h"
#include "Munti.h"
class Stat :public Teritoriu
{
	const char* nume;
	int suprafata;
	int count;
	int count_max = 10;
	
public:
	Munti munti[10];
	int CalculeazaSuprafata();
	void Afiseaza();
	bool Add(Munti m);
	Stat();
	Stat(const char* nume, int sup);
	~Stat();
};