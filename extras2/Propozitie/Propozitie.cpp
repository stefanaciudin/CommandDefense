#include "Propozitie.h"
#include <iostream>
using namespace std;
void Propozitie::Afiseaza()
{
	for (int i = 0; i < cuvinte.size(); i++)
		cuvinte[i].Afiseaza();
}

void Propozitie::AddCuvant(Cuvant cuv)
{
	cuvinte.push_back(cuv);
}

Propozitie::Propozitie(string prop)
{
	string word = "";
	for (int i = 0; i < prop.size(); i++)
	{
		if (prop[i] != ' ')
			word += prop[i];
		else
			if (word != "")
			{
				this->AddCuvant(word);
				word = "";
			}
	}
	if (word != "")
		this->AddCuvant(word);
}
