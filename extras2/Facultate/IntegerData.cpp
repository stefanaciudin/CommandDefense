#include "IntegerData.h"
#include <iostream>
using namespace std;
IntegerData::IntegerData(string name, string value)
{
	this->name = name;
	this->value = stoi(value);
}

void IntegerData::Add(string toAdd)
{
	this->value += stoi(toAdd);
}

bool IntegerData::Substract(int toSubstract)
{
	this->value -= toSubstract;
	return true;
}

void IntegerData::Print()
{
	cout << this->name << "=" << this -> value<<" ";
}
