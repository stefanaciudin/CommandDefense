#include <iostream>
#include "Canvas.h"
int main()
{
	Canvas object(30,30);
	//object.DrawRect(10, 10, 20, 20, '-');
	//object.FillRect(10, 10, 20, 20, '-');
	//object.DrawCircle(15, 15, 10, '.');
	//object.FillCircle(15, 15, 10, '.');
	object.DrawLine(3, 3, 27, 27, '.');
	object.Print();
	return 0;
}