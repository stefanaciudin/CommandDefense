#pragma once
#include "Cuvant.h"
#include "Text.h"
#include <vector>
#include <string>
using namespace std;
class Propozitie :public Text
{
	vector <Cuvant> cuvinte;
public:
	void Afiseaza();
	void AddCuvant(Cuvant cuv);
	Propozitie(string prop);
};