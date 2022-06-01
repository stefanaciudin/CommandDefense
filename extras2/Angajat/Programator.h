#pragma once
#include "Angajat.h"
#include <string>
using namespace std;
class Programator :public Angajat
{
private:
	string cod;
public:
	void Lucreaza();
	string GetCode();
	Programator(string nume, int salariu, int id);
	void Add(string cod);
};