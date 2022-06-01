#include "Pen.h"

Pen::Pen()
{
	color = "culoare";
	price = 0;
}

Pen::Pen(int pret, string culoare)
{
	this->price = pret;
	this->color = culoare;
}

string Pen::GetColor()
{
	return color;
}

int Pen::GetPrice()
{
	return price;
}
