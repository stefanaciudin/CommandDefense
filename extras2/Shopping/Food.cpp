#include "Food.h"

void Food::setQuantity(float q)
{
	quantity = q;
}

string Food::getInfo()
{
	string s = to_string(quantity);
	string info = "";
	info += name;
	info += ":";
	info += s;
	info += "kg";
	info += "; ";
	return info;

}
