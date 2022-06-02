#include "Dreptunghi.h"
#include <iostream>
using namespace std;

void Dreptunghi::set(int x, int y, int lungime, int latime)
{
	this->x = x;
	this->y = y;
	this->lungime = lungime;
	this->latime = latime;
}

void Dreptunghi::Paint()
{
	cout << "dreptunghi(" << this->x << "," << this->y << "," << this->lungime << "," << this->latime << ")" << endl;
}
