#include "HouseAdvertisment.h"
#include <iostream>
using namespace std;
void HouseAdvertisment::SetNrFloors(int nr)
{
	nrFloors = nr;
}

void HouseAdvertisment::PrintInfo()
{
	cout << "House with " << GetNrFloors() << " floors, with a surface of " << GetSurface() << " square meters that costs " << GetPrice() << " dollars.\n";
}

int HouseAdvertisment::GetNrFloors()
{
	return nrFloors;
}

HouseAdvertisment::HouseAdvertisment(int s, int p, int l)
{
	surface = s;
	price = p;
	nrFloors = l;
}
