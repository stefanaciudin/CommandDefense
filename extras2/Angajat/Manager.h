#pragma once
#include "Angajat.h"
#include <vector>
#include <string>
using namespace std;
class Manager :public Angajat
{
private:
	vector <Angajat*> echipa;
	string numeEchipa;
public:
	bool Angajeaza(Angajat* x);
	bool Concediaza(Angajat* x);
	Angajat* GetAngajat(int id);
	Manager(string numeEchipa, string nume, int salariu, int id);
	void Lucreaza();
};