#include "Cuvant.h"
#include <iostream>
using namespace std;

void Cuvant::Afiseaza()
{
	cout << this->txt<<" ";
}

Cuvant::Cuvant(string std)
{
	this->txt = std;
}

void Cuvant::SetCuvant(string cuvant)
{
	this->txt = cuvant;
}
