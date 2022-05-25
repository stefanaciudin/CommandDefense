#include "WhiteBoard.h"
#include <iostream>
using namespace std;
WhiteBoard::WhiteBoard(Message* parent, int x, int y, string message, string c)
{
	this->parent = parent;
	this->x = x;
	this->y = y;
	this->text = message;
	this->culoare = c;
}

int WhiteBoard::GetX()
{
	return this->x;
}

int WhiteBoard::GetY()
{
	return this->y;
}

string WhiteBoard::GetContent()
{
	return this->text;
}

void WhiteBoard::Afiseaza()
{
	for (int i = 0; i < alte_mesaje.size(); i++)
		cout << alte_mesaje[i]->GetContent() << " ";
}

void WhiteBoard::Attach(Message* attach)
{
	alte_mesaje.push_back(attach);
}
