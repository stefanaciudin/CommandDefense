#pragma once
#include <string>
#include <iostream>
using namespace std;
class Teritoriu
{
public:
	string nume;
	int suprafata;

	Teritoriu();
	~Teritoriu();
	virtual void Afiseaza() = 0;
	virtual int CalculeazaSuprafata() = 0;
};