#include "Afisaj.h"

void Afisaj::Display()
{
	for (int i = 0; i < childs.size(); i++)
		childs[i]->Display();
}

void Afisaj::Add(Afisaj* a)
{
	childs.push_back(a);
}
