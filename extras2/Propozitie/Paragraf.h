#pragma once
#include "Text.h"
#include <vector>
using namespace std;
class Paragraf :public Text
{
	vector <Text*> texte;
public:
	void Afiseaza();
	void Add(Text* txt);
};