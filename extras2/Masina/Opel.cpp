#include "Opel.h"

string Opel::GetName()
{
    return "Opel";
}

int Opel::getCapacitate()
{
    return capacitate;
}

string Opel::getCuloare()
{
    return culoare;
}

void Opel::setCapacitate(int capacity)
{
    capacitate = capacity;
}

void Opel::setCuloare(string color)
{
    culoare = color;
}

void Opel::setAnFabricatie(int an)
{
    anFabricatie = an;
}

int Opel::getAnFabricatie()
{
    return anFabricatie;
}
