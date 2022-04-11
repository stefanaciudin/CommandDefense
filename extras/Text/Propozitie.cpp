#include "Propozitie.h"
#include <string.h>
#pragma warning(disable:4996)
Propozitie::Propozitie()
{
	count = 0;
}

Propozitie::Propozitie(const char* prop)
{
	char* p;
	char elem[256];
	strcpy(elem, prop);
	p = strtok(elem, " ");
	while (p != NULL)
	{
		p = strtok(NULL, " ");
		Cuvant p1(p);
		this->AddCuvant(p1);
	}

}

void Propozitie::Afiseaza()
{
	for (int i = 0; i < count; i++)
		cuvinte[i].Afiseaza();
}

bool Propozitie::AddCuvant(Cuvant cuvant)
{
	if (count < max_count)
	{
		cuvinte[count++] = cuvant;
		return true;
	}
	return false;
}
