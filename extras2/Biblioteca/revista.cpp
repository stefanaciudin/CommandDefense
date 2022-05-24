#include "revista.h"
#include <string>
using namespace std;
Revista::Revista(string titlu, int nrArticole)
{
	this->titlu = titlu;
	this->nrArticole = nrArticole;
}

string Revista::GetInfo()
{
	//return string();
	string s = to_string(this->nrArticole);
	string info = "";
	info += "Revista ";
	info += this->titlu;
	info += " cu ";
	info += s;
	info += " articole";
	return info;
}
