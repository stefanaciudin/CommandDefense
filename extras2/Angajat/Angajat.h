#pragma once
#include <string>
using namespace std;
class Angajat
{
protected:
	int salariu;
	string nume;
	
public:
	int id;
	Angajat();
	~Angajat();
	string GetNume();
	int GetSalariu();
	bool SetSalariu(int salariu);
	virtual void Lucreaza();
	Angajat(string nume, int salariu, int id);
};