#pragma once
#include "Text.h"
#include "Cuvant.h"
class Propozitie :public Text
{
private:
	Cuvant cuvinte[10];
	int count = 0;
	int max_count = 10;
public:
	Propozitie();
	~Propozitie();
	Propozitie(const char* prop);
	void Afiseaza();
	bool AddCuvant(Cuvant cuvant);
};