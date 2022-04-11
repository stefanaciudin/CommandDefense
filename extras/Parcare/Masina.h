#pragma once
class Masina
{
protected:

public:
	Masina();
	~Masina();
	virtual const char* GetColor() = 0;
	virtual const char* GetName() = 0;
};