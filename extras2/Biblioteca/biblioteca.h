#pragma once
#include "carte.h"
#include <vector>
#include <functional>
using namespace std;
class Biblioteca
{
	int count;
	vector <Carte*> carti;
public:
	Biblioteca();
	~Biblioteca();
	Biblioteca& operator+=(Carte* c);
	vector <Carte*>::iterator begin() { return carti.begin(); }
	vector <Carte*>::iterator end() { return carti.end(); }
	operator int();
	void PrintFilter(function<bool(Carte*)> fn);
};
