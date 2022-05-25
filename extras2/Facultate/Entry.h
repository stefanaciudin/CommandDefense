#pragma once
#include <string>
using namespace std;

class Entry
{
protected:
	string name;
public:
	Entry();
	~Entry();
	Entry(string name);
	string GetName();
	virtual void Add(string toAdd);
	virtual bool Substract(int toSubstract);
	virtual void Print();
};