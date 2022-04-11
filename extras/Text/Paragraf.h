#pragma once
#include "Text.h"
class Paragraf:public Text
{
protected:
	Text* texte[10];
	int count;
	int max_count = 10;
public:
	Paragraf();
	~Paragraf();
	void Afiseaza();
	bool Add(Text* txt);
};