#include "Anunt.h"
#include <iostream>
using namespace std;
Anunt::Anunt(string s)
{
	mesaj = s;
}


Anunt::~Anunt()
{

}

void Anunt::Display()
{
	cout << "ANUNT: " << "[ " << mesaj << " ]" << '\n';
}
