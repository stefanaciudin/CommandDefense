#include "PanouPublicitarStradal.h"
#include <iostream>
using namespace std;
PanouPublicitarStradal::PanouPublicitarStradal(string adress, int L, int H)
{
	adresa = adress;
	Lungime = L;
	Inaltime = H;
}

PanouPublicitarStradal::~PanouPublicitarStradal()
{
}

void PanouPublicitarStradal::Display()
{
	cout << "PANOU_PUBLICITAR: [" << adresa << "]" << "[L:" << Lungime << "][l:" << Inaltime << "]" << '\n';
	for (auto it : *this)
		it->Display();
}
