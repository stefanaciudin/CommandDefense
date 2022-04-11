#include "Stat.h"
#include "Munti.h"
#include <iostream>
using namespace std;
int Stat::CalculeazaSuprafata()
{
	return suprafata;
}

void Stat::Afiseaza()
{
	cout << "\tStat: " << nume << "(" << suprafata << " km2)" << '\n';
	for (int i = 0; i < count; i++)
		munti[i].Afiseaza();
}

bool Stat::Add(Munti m)
{

	if (count < count_max)
	{
		munti[count++] = m;
		return true;

	}
	return false;
}

Stat::Stat(const char* nume, int sup)
{
	this->nume = nume;
	suprafata = sup;
	count = 0;
}
