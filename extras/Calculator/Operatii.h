#pragma once
class Operatii
{
public:
	virtual int Compute(int val1, int val2) = 0;
	Operatii();
	~Operatii();
	const char* name;
};