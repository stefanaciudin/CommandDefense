#pragma once
#include "Afisaj.h"
#include <string>
using namespace std;
class Anunt :public Afisaj
{
private:
	string mesaj;
public:
	Anunt(string s);
	~Anunt();
	void Display();
};