#pragma once
#include "Figura.h"

class Dreptunghi : public Figura
{
public:
	Dreptunghi();
	Dreptunghi(string c);
	~Dreptunghi();
	virtual string GetName();
};

