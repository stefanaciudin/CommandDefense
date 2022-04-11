#pragma once
#include "Masina.h"
class FerrariRosu :public Masina
{
private:
	const char* culoare;
public:
	FerrariRosu();
	~FerrariRosu();
	FerrariRosu(const char* color);
	const char* GetColor();
	const char* GetName();
};