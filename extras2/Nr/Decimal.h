#pragma once
#include "Printer.h"
class Decimal :public Printer
{
	string GetFormatName();
	string FormatNumber(int number);
};