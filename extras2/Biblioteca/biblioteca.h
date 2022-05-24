#pragma once
#include "carte.h"
#include <vector>
using namespace std;
class Biblioteca
{
	int count;
	//Carte* carti[100];
	vector <Carte*> carti;
public:
	Biblioteca();
	~Biblioteca();
	Biblioteca& operator+=(Carte* c);
	vector <Carte*>::iterator begin() { return carti.begin(); }
	vector <Carte*>::iterator end() { return carti.end(); }
	operator int();
	void PrintFilter(Carte fn);
};
