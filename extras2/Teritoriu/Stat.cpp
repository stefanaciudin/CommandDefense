#include "Stat.h"

Stat::Stat(string n, int s)
{
	nume = n;
	suprafata = s;
}

Stat::~Stat()
{
}

void Stat::Add(Munti m)
{
	munti.push_back(m);
}

int Stat::CalculeazaSuprafata()
{
	return suprafata;
}

void Stat::Afiseaza()
{
	cout << "Stat " << nume << "(" << suprafata << "km2" << '\n';
	int n = munti.size();
	for (int i = 0; i < n; i++)
		munti[i].Afiseaza();
}
