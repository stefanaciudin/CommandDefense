#pragma once
#include <string>
#include <vector>
using namespace std;
#include "Message.h"
class WhiteBoard :public Message
{
private:
	int x;
	int y;
	string text;
	string culoare;
	vector <Message*> alte_mesaje;
	Message* parent;
public:
	WhiteBoard(Message* parent, int x, int y, string message, string c);
	int GetX();
	int GetY();
	string GetContent();
	void Afiseaza();
	void Attach(Message* attach);
};