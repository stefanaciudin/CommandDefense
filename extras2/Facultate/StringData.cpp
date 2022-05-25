#include "StringData.h"
#include <string>
#include <iostream>
using namespace std;
StringData::StringData(string name, string value)
{
	this->name = name;
	this->value = value;
}

void StringData::Add(string toAdd)
{
	value += toAdd;
}

bool StringData::Substract(int toSubstract)
{
	if (toSubstract > value.length())
	{
		cout << "StringData: (len)" << this->value << "<" << toSubstract<<endl;
		return false;
	}
	else
	{
		while (toSubstract)
		{
			value.pop_back();
			toSubstract--;
		}
	}
}

void StringData::Print()
{
	cout << this->name << "=" << this->value<<" ";
}
