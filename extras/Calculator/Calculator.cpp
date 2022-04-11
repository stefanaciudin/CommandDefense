#include "Calculator.h"
#include <iostream>
using namespace std;
Calculator::Calculator()
{
	count = 0;
}

bool Calculator::find(Operatii* a)
{
	for (int i = 0; i < count; i++)
		if (ops[count]->name == a->name)
			return true;
	return false;
}

int Calculator::Compute(int val1, int val2)
{
	for (int i = 0; i < count; i++)
	{
		cout << ops[i]->name << "(" << val1 << "," << val2 << ")" << ops[i]->Compute(val1, val2);
	}
}

bool Calculator::operator+=(Operatii* o)
{
	/*if (count < max_count)
	{
		ops[count++] = o;
		return true;
	}
	return false;*/
	for (int i = 0; i <= count; i++)
	{
		if (!find(o))
			ops[count++] = o;
		return true;
	}
	return false;
}

void Calculator::operator-=(const char* string)
{
	for (int i = 0; i < count; i++)
	{
		if (!strcmp(ops[i]->name, string))
		{
			for (int j = i + 1; j < count - 1; j++)
				ops[j] = ops[j + 1];
		}
		count--;

	}
}

bool Calculator::operator[](const char* string)
{
	for (int i = 0; i < count; i++)
		if (!strcmp(ops[i]->name, string))
			return true;
	return false;
}

Calculator::operator int()
{
	return count;
}
