#include "Toyota.h"

Toyota::Toyota()
{

}

Toyota::~Toyota()
{
	//delete this;
}

Toyota::Toyota(const char* color)
{
	this->culoare = color;
}

const char* Toyota::GetColor()
{
	return this->culoare;
}

const char* Toyota::GetName()
{
	return "Toyota";
}
