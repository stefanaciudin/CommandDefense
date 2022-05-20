#include "Munti.h"

Munti::Munti(string name, int sup, int alt)
{
	nume = name;
	suprafata = sup;
	altitudine = alt;
}

Munti::~Munti()
{
}

int Munti::CalculeazaSuprafata()
{
	return suprafata;
}

void Munti::Afiseaza()
{
	cout << "Munte " << nume << "(" << suprafata << " km2)" << '\n';
}
