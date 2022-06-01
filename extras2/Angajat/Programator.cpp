#include "Programator.h"
#include <string>
#include <iostream>
using namespace std;
void Programator::Lucreaza()
{
    cout << this->cod;
}
string Programator::GetCode()
{
    return cod;
}

Programator::Programator(string nume, int salariu, int id)
{
    this->nume = nume;
    this->salariu = salariu;
    this->id = id;
}

void Programator::Add(string cod)
{
    this->cod += cod;
}
