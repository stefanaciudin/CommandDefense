#pragma once
class Teritoriu
{
	const char* nume;
	int suprafata;
public:
	Teritoriu();
	~Teritoriu();
	virtual void Afiseaza() = 0;
	virtual int CalculeazaSuprafata() = 0;
};