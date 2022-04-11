#include "Cuvant.h"
#include <iostream>
using namespace std;
void Cuvant::Afiseaza()
{
	cout << txt << " ";
}

void Cuvant::SetCuvant(const char* cuvant)
{
	txt = cuvant;
}

Cuvant::Cuvant(const char* cuv)
{
	txt = cuv;
}

const char* Cuvant::GetTxt()
{
	return this->txt;
}

Cuvant* Cuvant::transf(Cuvant word)
{
	this->txt = word.txt;
	return this;
}
