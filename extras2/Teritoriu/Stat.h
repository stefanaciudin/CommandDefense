#pragma once
#include <vector>
#include <string>
#include "Teritoriu.h"
#include "Munti.h"

class Stat :public Teritoriu
{
public:
	vector <Munti> munti;
	Stat(string n, int s);
	~Stat();
	void Add(Munti m);
	int CalculeazaSuprafata();
	void Afiseaza();
};