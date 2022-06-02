#pragma once
#include "Forma.h"
class Cerc:public Forma
{
private:
	int x;
	int y;
	int raza;
public:
	void Paint();
	void set(int x, int y, int raza);
};