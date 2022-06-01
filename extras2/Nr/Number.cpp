#include "Number.h"
#include <iostream>
using namespace std;
Number::Number(int value)
{
	this->number = value;
}

Number::operator int()
{
	return int(this->number);
}

Number Number::operator+(const Number& n)
{
	return { number + n.number };
}

Number Number::operator-(const Number& n)
{
	return { number - n.number };
}

Number Number::operator*(const Number& n)
{
	return { number * n.number };
}

Number Number::operator/(const Number& n)
{
	return { number / n.number };
}

Number& Number::operator+=(Printer* prnt)
{
	// // O: insert return statement here
	if (count <= 100)
	{
		printers.push_back(prnt);
		count++;
	}
	return *this;
}

void Number::Print()
{
	for (int i = 0; i < printers.size(); i++)
		cout << "Format: " << printers[i]->GetFormatName() << " "<< "Value: " << printers[i]->FormatNumber(this->number) << endl;

}
