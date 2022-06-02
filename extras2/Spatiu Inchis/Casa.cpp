#include "Casa.h"
#include <iostream>
using namespace std;
Casa::Casa(string smell, bool light, string name)
{
	miros = smell;
	lumina = light;
	nume = name;
}

Casa::~Casa()
{
}

void Casa::AddSpatiu(SpatiuInchis* s)
{
	homes.push_back(s);
}

void Casa::PrintInfo()
{
	cout << this->nume << " are " << homes.size() << " camere" << " miros " << this->miros << " ";		
	if (lumina)
			cout << "luminos" << endl;
		else
			cout << "intunecat" << endl;
	for (int i = 0; i < homes.size(); i++)
	{
		homes[i]->PrintInfo();
	}
}
