#include "Decimal.h"
#pragma warning(disable:4996)
string Decimal::GetFormatName()
{
	return "Decimal";
}

string Decimal::FormatNumber(int number)
{
	char buffer[50];
	itoa(number, buffer, 10);
	string str(buffer);
	return str;
}
