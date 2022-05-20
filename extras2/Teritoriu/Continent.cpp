#include "Continent.h"

Continent::Continent(string n)
{
	nume = n;
}

Continent::~Continent()
{
}

void Continent::Add(Stat s)
{
	state.push_back(s);
}

int Continent::CalculeazaSuprafata()
{
	int sum = 0;
	int n = state.size();
	for (int i = 0; i < n; i++)
		sum += state[i].suprafata;
	return sum;
}

void Continent::Afiseaza()
{
	cout << "Continent " << nume << '\n';
	int n = state.size();
	for (int i = 0; i < n; i++)
		state[i].Afiseaza();
}

void Continent::AfiseazaStateCuMunti()
{
	int n = state.size();
	for (int i = 0; i < n; i++)
	{
		int m = state[i].munti.size();
		int sum = 0;
		for (int j = 0; j < m; j++)
			sum += state[i].munti[j].suprafata;
		if (sum >= ((float)3 / 10) * state[i].suprafata)
			state[i].Afiseaza();
	}
}
