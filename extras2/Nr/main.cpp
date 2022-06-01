﻿#include <iostream>
#include "Printer.h"
#include "Number.h"
#include "Decimal.h"
#include "Hexazecimal.h"
int main()
{
	Number n1(1), n2(2), n3(10);
	Number n4((int)((((n1 + n2) * n3) / n2) + (n1 - n2)));
	(n4.operator+=(new Hexazecimal())) += (new Decimal());
	n4.Print();
	std::cout << "Valoarea hexazecimala este: " << std::hex << (int)n4 << std::endl;
	return 0;
}