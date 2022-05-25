#pragma once
#include <vector>
#include "Entry.h"
using namespace std;

class Database
{
private:
	vector <Entry*> entries;
public:
	Database& operator+=(Entry* e);
	Database& operator-=(string s);
	vector <Entry*>::iterator begin() { return entries.begin(); }
	vector <Entry*>::iterator end() { return entries.end(); }
	void Print();


};