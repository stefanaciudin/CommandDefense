#pragma once
#include "SpatiuInchis.h"
#include <string>
using namespace std;
class Camera :public SpatiuInchis
{
private:
	string miros;
	bool lumina;
	string nume;
public:
	Camera(string smell, bool light, string name);
	~Camera();
	void AddSpatiu();
	void PrintInfo();
};