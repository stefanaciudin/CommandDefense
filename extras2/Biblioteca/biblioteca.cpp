#include "biblioteca.h"
#include <iostream>
using namespace std;
Biblioteca::Biblioteca()
{
	count = 0;
}

Biblioteca::~Biblioteca()
{
	count = 0;
}

Biblioteca& Biblioteca::operator+=(Carte* c)
{
	carti.push_back(c);
	count = carti.size();
	return *this;
}

Biblioteca::operator int()
{
	return count;
}

void Biblioteca::PrintFilter(function<bool(Carte*)> fn)
{
	for (auto x : carti)
	{
		if (fn(x))
			cout << x->GetInfo() << endl;
	}
}
