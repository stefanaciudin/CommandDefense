#pragma once
#include "Printer.h"
class Hexazecimal :public Printer
{
public:
	string GetFormatName();
	string FormatNumber(int number);
};