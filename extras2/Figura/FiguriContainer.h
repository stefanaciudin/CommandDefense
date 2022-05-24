#pragma once
#include "Figura.h"
#include "Color.h"

class FiguriContainer
{
private:
	vector<Figura*> figuri;
public:
	FiguriContainer();
	~FiguriContainer();
	void Add(Figura* f);
	void ShowAll();
	void ShowByColor(Color* c);
};

