#include "Database.h"
#include <string>
#include <iostream>
using namespace std;
Database& Database::operator+=(Entry* e)
{
	// // O: insert return statement here
	entries.push_back(e);
	return *this;
}

Database& Database::operator-=(string s)
{
	// // O: insert return statement here
	for (int i = 0; i < entries.size(); i++)
	{
		if (entries[i]->GetName() == s)
			entries.erase(entries.begin() + i);
	}
	return *this;
}

void Database::Print()
{
	for (int i = 0; i < entries.size(); i++)
	{
		entries[i]->Print();
		
	}
	cout << endl;
}
