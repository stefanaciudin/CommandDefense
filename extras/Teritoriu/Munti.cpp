#include "Munti.h"
#include <iostream>
using namespace std;

Munti::Munti(const char* nume, int sup, int alt)
{
	this->nume = nume;
	altitudine = alt;
	suprafata = sup;
	count = 0;
}

int Munti::CalculeazaSuprafata()
{
	return suprafata;
}


void Munti::Afiseaza()
{
	cout << "\tMunte: " << nume << "(" << suprafata << " km2)" << '\n';
}

