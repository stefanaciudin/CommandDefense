#pragma once
#include "Message.h"
#include <string>
#include <vector>
using namespace std;
class Sticker :public Message
{
private:
	int x;
	int y;
	string text;
	string culoare;
	vector <Message*> alte_mesaje;
	Message* parent;
public:
	Sticker(Message* parent, int x, int y, string message, string c);
	int GetX();
	int GetY();
	string GetContent();
	void Afiseaza();
	void Attach(Message* attach);

};