#pragma once
#include <string>
using namespace std;
class Printer
{
public:
	virtual string GetFormatName();
	virtual string FormatNumber(int number);
};