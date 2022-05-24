#include "Agency.h"
#include <vector>
using namespace std;
#include <iostream>
void Agency::AddAdvertisment(Advertisment* a)
{
	ads.push_back(a);
}

void Agency::PrintOffers(int minSurface, int maxPrice)
{
	int n = ads.size();
	bool ok = false;

	for (int i = 0; i < n; ++i)
	{
		if (ads[i]->GetPrice() <= maxPrice && ads[i]->GetSurface() >= minSurface)
		{
				ok = true;
				cout << "Agency " << name << " found the following offers:\n";
				ads[i]->PrintInfo();
		}
	}

	if (!ok)
	{
		cout << "Agency " << name << " could not find any offer for the criteria:\n";
		cout << "\t -min surface = " << minSurface << '\n';
		cout << "\t -max price = " << maxPrice << '\n';
	}
}

Agency::Agency(const char* n)
{
	name = n;
}
