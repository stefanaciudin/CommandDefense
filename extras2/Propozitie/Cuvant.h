#pragma once
#include "Text.h"
using namespace std;
#include <string>

class Cuvant :public Text
{
	string txt;
public:
	void Afiseaza();
	Cuvant(string std);
	void SetCuvant(string cuvant);

};