#include "Cerc.h"
#include <iostream>
using namespace std;
void Cerc::Paint()
{
	cout << "cerc(" << this->x << "," << this->y << "," << this->raza << ")" << endl;

}

void Cerc::set(int x, int y, int raza)
{
	this->x = x;
	this->y = y;
	this->raza = raza;
}
