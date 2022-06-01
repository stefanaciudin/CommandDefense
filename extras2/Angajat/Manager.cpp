#include "Manager.h"
#include <iostream>
using namespace std;
bool Manager::Angajeaza(Angajat* x)
{
	echipa.push_back(x);
	return true;
}

bool Manager::Concediaza(Angajat* x)
{
	for (int i = 0; i < echipa.size(); i++)
		if (echipa[i] == x)
			echipa.erase(echipa.begin() + i);
	return true;
}

Angajat* Manager::GetAngajat(int id)
{
	for (int i = 0; i < echipa.size(); i++)
		if (echipa[i]->id == id)
			return echipa[i];
}

Manager::Manager(string numeEchipa, string nume, int salariu, int id)
{
	this->numeEchipa = numeEchipa;
	this->nume = nume;
	this->salariu = salariu;
	this->id = id;
}

void Manager::Lucreaza()
{
	cout << "==============" << endl;
	cout << numeEchipa << endl;
	cout << "==============" << endl;
	for (int i = 0; i < echipa.size(); i++)
	{	
		cout <<"["<< echipa[i]->GetNume()<<"]" << endl;
		
	}

		
}
