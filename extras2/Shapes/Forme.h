#pragma once
#include "Forma.h"
#include <vector>
using namespace std;
class Forme :public Forma
{
public:
	vector <Forma*> shapes;
	void Add(Forma* f);
	void Paint();
};