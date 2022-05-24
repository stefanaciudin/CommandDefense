#include "ApartmentAdvertisment.h"
#include <iostream>
using namespace std;
void ApartmentAdvertisment::SetLevel(int lvl)
{
	atLevel = lvl;
}

void ApartmentAdvertisment::PrintInfo()
{
	cout << "Apartment at " << GetLevel() << "-th level, with a surface of " << GetSurface() << " square meters that costs " << GetPrice() << " dollars.\n";
}

int ApartmentAdvertisment::GetLevel()
{
	return atLevel;
}

ApartmentAdvertisment::ApartmentAdvertisment(int s, int p, int l)
{
	surface = s;
	price = p;
	atLevel = l;
}
