#include "Item.h"

Item::Item()
{
}

Item::~Item()
{
}

const char* Item::getName()
{
	return name;
}

void Item::setName(const char* n)
{
	name = n;
}
