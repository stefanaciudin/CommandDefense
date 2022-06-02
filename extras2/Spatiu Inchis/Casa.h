#pragma once
#include "SpatiuInchis.h"
#include <string>
#include <vector>
using namespace std;
class Casa :public SpatiuInchis
{
private:
	string miros;
	bool lumina;
	string nume;
public:
	vector <SpatiuInchis*> homes;
	Casa(string smell, bool light, string name);
	~Casa();
	void AddSpatiu(SpatiuInchis* s);
	void PrintInfo();
};