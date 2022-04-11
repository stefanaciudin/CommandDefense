#include "Dacia.h"

Dacia::Dacia(const char* color)
{
	culoare = color;
}

const char* Dacia::GetColor()
{
	return this->culoare;
}

const char* Dacia::GetName()
{
	return "Dacia";
}
