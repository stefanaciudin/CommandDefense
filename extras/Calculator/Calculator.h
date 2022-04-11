#pragma once
#include "Operatii.h"
class Calculator
{
private:
	Operatii* ops[10];

	int count;
	int max_count=10;
public:
	Calculator();
	~Calculator();
	bool find(Operatii* a);
	int Compute(int val1, int val2);
	bool operator+=(Operatii* o);
	void operator-=(const char* string);
	bool operator[](const char* string);
	operator int();

};