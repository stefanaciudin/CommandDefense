#include "Paragraf.h"
#include <iostream>
using namespace std;
void Paragraf::Afiseaza()
{
	for (int i = 0; i < texte.size(); i++)
		texte[i]->Afiseaza();
}

void Paragraf::Add(Text* txt)
{
	texte.push_back(txt);
}
