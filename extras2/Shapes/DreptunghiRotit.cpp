#include "DreptunghiRotit.h"
#include <iostream>
using namespace std;
void DreptunghiRotit::set(int x, int y, int lungime, int latime, int unghi)
{
	this->x = x;
	this->y = y;
	this->lungime = lungime;
	this->latime = latime;
	this->unghi = unghi;
}

void DreptunghiRotit::Paint()
{
	cout << "dreptunghi(" << this->x << "," << this->y << "," << this->lungime << "," << this->latime << ")" << " rotit la "<<this->unghi<<" de grade"<<endl;

}
