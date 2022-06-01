#include "Hexazecimal.h"
#pragma warning(disable:4996)
string Hexazecimal::GetFormatName()
{
	return "Hexazecimal";
}

string Hexazecimal::FormatNumber(int number)
{
	char buffer[50];
	itoa(number, buffer, 16);
	string str(buffer);
	return str;

}
