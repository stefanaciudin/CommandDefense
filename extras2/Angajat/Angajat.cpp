#include "Angajat.h"

Angajat::Angajat()
{
}

Angajat::~Angajat()
{
}

string Angajat::GetNume()
{
    return nume;
}

int Angajat::GetSalariu()
{
    return salariu;
}

bool Angajat::SetSalariu(int salariu)
{
    this->salariu = salariu;
    return true;
}

void Angajat::Lucreaza()
{
}

Angajat::Angajat(string nume, int salariu, int id)
{
    this->nume = nume;
    this->salariu = salariu;
    this->id = id;
}
