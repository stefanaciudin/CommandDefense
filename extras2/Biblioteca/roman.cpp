#include "roman.h"
#include <string>
using namespace std;
Roman::Roman(string nume, string autor)
{
	this->nume = nume;
	this->autor = autor;
}

string Roman::GetInfo()
{
	string info = "";
	info += "Roman ";
	info += this->nume;
	info += " de ";
	info += this->autor;
	return info;
}
