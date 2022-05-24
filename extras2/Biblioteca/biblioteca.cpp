#include "biblioteca.h"

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
	return *this;
}

Biblioteca::operator int()
{
	return carti.size();
}
