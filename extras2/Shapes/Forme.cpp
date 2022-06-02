#include "Forme.h"

void Forme::Add(Forma* f)
{
	shapes.push_back(f);
}

void Forme::Paint()
{
	for (int i = 0; i < shapes.size(); i++)
		shapes[i]->Paint();
}

