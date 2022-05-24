#pragma once
#include <vector>
using namespace std;
class Afisaj
{
protected:
	vector <Afisaj*> childs;
public:
	virtual void Display();
	void Add(Afisaj* a);
	vector <Afisaj*>::iterator begin() { return childs.begin(); }
	vector <Afisaj*>::iterator end() { return childs.end();}

};