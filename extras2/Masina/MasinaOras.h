#pragma once
#include "Masina.h"
class MasinaOras :public Masina
{
public:
	virtual string GetName();
    virtual int getCapacitate();
	virtual string getCuloare();
};