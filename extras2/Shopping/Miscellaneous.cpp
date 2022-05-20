#include "Miscellaneous.h"

string Miscellaneous::getInfo()
{
	string s = to_string(count);
	string info = "";
	info += name;
	info += " : ";
	info += s;
	info += " items";
	info += ";  ";
	return info;
}

void Miscellaneous::setCount(int count)
{
	this->count = count;
}
