#pragma once
#include <string>
#include <vector>
using namespace std;
#include "SpatiuInchis.h"
class Pestera :public SpatiuInchis
{
private:
	string miros;
	bool lumina;
	string nume;
public:
	vector <SpatiuInchis*> pesteri;
	Pestera(string smell, bool light, string name);
	~Pestera();
	void AddSpatiu(SpatiuInchis* s);
	void PrintInfo();
};