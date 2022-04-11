#pragma once
#include "Masina.h"
class Dacia :public Masina
{
private:
	const char* culoare;
public:
	Dacia();
	~Dacia();
	Dacia(const char* color);
	const char* GetColor();
	const char* GetName();
};