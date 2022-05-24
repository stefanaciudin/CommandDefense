#pragma once
#include "Advertisment.h"
class HouseAdvertisment :public Advertisment
{
private:
	int nrFloors;
public:
	void SetNrFloors(int nr);
	void PrintInfo();
	int GetNrFloors();
	HouseAdvertisment(int s, int p, int l);

};