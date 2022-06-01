#pragma once
#include <vector>
#include "Printer.h"
using namespace std;
class Number
{
	int number;
	int count;
public:
	vector <Printer*> printers;
	Number(int value);
	operator int();
	Number operator+(const Number& n);
	Number operator-(const Number& n);
	Number operator*(const Number& n);
	Number operator/(const Number& n);
	Number& operator+=(Printer* prnt);
	void Print();

};