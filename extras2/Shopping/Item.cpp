#include "Item.h"

Item::Item()
{
}

Item::~Item()
{
}

string Item::GetName()
{
	return name;
}

void Item::setName(string n)
{
	this->name = n;
}
