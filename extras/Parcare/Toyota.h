#pragma once
#pragma once
#include "Masina.h"
class Toyota :public Masina
{
private:
	const char* culoare;
public:
	Toyota();
	~Toyota();
	Toyota(const char* color);
	const char* GetColor();
	const char* GetName();
};