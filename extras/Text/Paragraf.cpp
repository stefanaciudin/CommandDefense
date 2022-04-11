#include "Paragraf.h"
#include <iostream>
using namespace std;

Paragraf::Paragraf()
{
	count = 0;
}

void Paragraf::Afiseaza()
{
	for (int i = 0; i < count; i++)
		cout << texte[i] << " ";
}

bool Paragraf::Add(Text* txt)
{
	if (count < max_count)
	{
		texte[count++] = txt;
		return true;
	}
	return false;
}
