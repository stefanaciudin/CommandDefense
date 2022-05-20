#pragma once
#include <string>
using namespace std;
class Item
{
	
public:
	string name;
	Item();
	~Item();
	string GetName();
	virtual string getInfo() = 0;
	void setName(string n);
};