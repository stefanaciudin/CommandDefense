#pragma once
#include "Advertisment.h"
#include <vector>
using namespace std;
class Agency
{
private:
	const char* name;
public:
	vector <Advertisment*> ads;
	void AddAdvertisment(Advertisment* a);
	void PrintOffers(int minSurface, int maxPrice);
	Agency(const char* n);

};