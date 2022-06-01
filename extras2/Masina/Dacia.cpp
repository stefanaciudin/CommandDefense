#include "Dacia.h"

string Dacia::GetName()
{
    return "Dacia";
}

int Dacia::getCapacitate()
{
    return capacitate;
}

string Dacia::getCuloare()
{
    return culoare;
}

void Dacia::setCapacitate(int c)
{
    this->capacitate = c;
}

void Dacia::setCuloare(string color)
{
    this->culoare = color;
}
