#include "Entry.h"

Entry::Entry()
{
}

Entry::~Entry()
{
}

Entry::Entry(string name)
{
	this->name = name;
}

string Entry::GetName()
{
	return this->name;
}

void Entry::Add(string toAdd)
{
}

bool Entry::Substract(int toSubstract)
{
	return false;
}

void Entry::Print()
{
}
