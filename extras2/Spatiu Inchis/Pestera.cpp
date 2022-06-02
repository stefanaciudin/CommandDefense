#include "Pestera.h"
#include <iostream>
using namespace std;
Pestera::Pestera(string smell, bool light, string name)
{
	miros = smell;
	lumina = light;
	nume = name;
}

Pestera::~Pestera()
{
}

void Pestera::AddSpatiu(SpatiuInchis* s)
{
	pesteri.push_back(s);
}

void Pestera::PrintInfo()
{
	cout << this->nume << " are " << pesteri.size() << " camere" << " miros " << this->miros << " ";		
	if (lumina)
			cout << "luminos" << endl;
		else
			cout << "intunecat" << endl;
	for (int i = 0; i < pesteri.size(); i++)
	{
		pesteri[i]->PrintInfo();
	}
}
