#pragma once
#include "carte.h"
class Revista :public Carte
{
	string titlu;
	int nrArticole;
public:
	Revista(string titlu, int nrArticole);
	string GetInfo();
};