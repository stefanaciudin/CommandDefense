#include "FerrariRosu.h"

FerrariRosu::FerrariRosu()
{

}

FerrariRosu::~FerrariRosu()
{
	//delete this;
}

FerrariRosu::FerrariRosu(const char* color)
{
	this->culoare = color;
}

const char* FerrariRosu::GetColor()
{
	return this->culoare;
}

const char* FerrariRosu::GetName()
{
	return "Ferrari";
}
