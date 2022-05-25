#include "Sticker.h"
#include <iostream>
using namespace std;
Sticker::Sticker(Message* parent, int x, int y, string message, string c)
{
	this->parent = parent;
	this->x = x;
	this->y = y;
	this->text = message;
	this->culoare = c;
}

int Sticker::GetX()
{
	return this->x;
}

int Sticker::GetY()
{
	return this->y;
}

string Sticker::GetContent()
{
	return this->text;
}

void Sticker::Afiseaza()
{
	for (int i = 0; i < alte_mesaje.size(); i++)
		cout << alte_mesaje[i]->GetContent() << " ";
}

void Sticker::Attach(Message* attach)
{
	alte_mesaje.push_back(attach);
}
