#include "Author.h"
#include <string>
using namespace std;
Author::Author()
{
	surname = "surname";
	firstname = "firstname";
}

Author::Author(string s, string f)
{
	surname = s;
	firstname = f;
}

string Author::GetSurname()
{
	return this->surname;
}

string Author::GetFirstname()
{
	return this->firstname;
}
