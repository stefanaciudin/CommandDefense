#pragma once
#include "Text.h"
class Cuvant:public Text
{
	const char* txt;
public:
	void Afiseaza();
	void SetCuvant(const char* cuvant);
	Cuvant();
	~Cuvant();
	Cuvant(const char* cuv);
	const char* GetTxt();
	Cuvant* transf(Cuvant word);
};