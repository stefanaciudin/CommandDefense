#pragma once
#include "Advertisment.h"
class ApartmentAdvertisment :public Advertisment
{
private:
	int atLevel;
public:
	void SetLevel(int lvl);
	void PrintInfo();
	int GetLevel();
	ApartmentAdvertisment(int s, int p, int l);

};