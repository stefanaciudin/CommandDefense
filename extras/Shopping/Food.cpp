#include "Food.h"

void Food::setQuantity(float quantity)
{
	this->quantity = quantity;
}

const char* Food::getInfo()
{
	const char* string;
	strcpy(string, name);
}
