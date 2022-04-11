#include "Continent.h"
#include <iostream>
using namespace std;

Continent::Continent(const char* nume)
{
	this->name = nume;
	count = 0;
}

int Continent::CalculeazaSuprafata()
{
	int sum = 0;
	for (int i = 0; i < count; i++)
		sum += state[i].CalculeazaSuprafata();
	return sum;
}

void Continent::Afiseaza()
{
	cout << "Continent: " << name << '\n';
	for (int i = 0; i < count; i++)
		state[i].Afiseaza();
}

bool Continent::Add(Stat s)
{

	if (count < max_count)
	{	
		state[count++] = s;
		return true;

    }
	return false;
}

void Continent::AfiseazaStateCuMunti()
{
	
	for (int i = 0; i < count; i++)
	{
		int sum = 0;
		for(int j=0;j<count;j++)
		sum += state[i].munti[j].CalculeazaSuprafata();
		
		if (sum >= ((double)3 / 10) * state[i].CalculeazaSuprafata())
			state[i].Afiseaza();
	}
}
