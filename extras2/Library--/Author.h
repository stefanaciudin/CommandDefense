#pragma once
#include <string>
using namespace std;
class Author
{
	string surname;
	string firstname;
public:
	Author();
	Author(string s, string f);
	string GetSurname();
	string GetFirstname();
};