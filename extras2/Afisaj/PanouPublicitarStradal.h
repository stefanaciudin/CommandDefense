#pragma once
#include <string>
using namespace std;
#include "Afisaj.h"

class PanouPublicitarStradal :public Afisaj
{
private:
	string adresa;
	int Lungime;
	int Inaltime;
public:
	PanouPublicitarStradal(string adress,int L,int H);
	~PanouPublicitarStradal();
	void Display();

};