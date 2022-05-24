#include "Color.h"

Color::Color()
{

}

Color::Color(string c)
{
	culoare = c;
}


Color::~Color()
{

}

bool Color::HasColor()
{
	if (culoare == "")
		return false;
	return true;
}

string Color::GetColor()
{
	return culoare;
}
