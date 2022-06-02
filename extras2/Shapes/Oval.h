#pragma once
#include "Forma.h"
class Oval :public Forma
{
private:
	int x;
	int y;
	int raza1;
	int raza2;
public:
	void Paint();
	void set(int x, int y, int raza1, int raza2);

};