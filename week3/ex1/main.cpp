#include <iostream>
#include <stdio.h>
#include "Math.h"

int main()
{
	Math object;
	printf("%d \n", object.Add(10, 20));
	printf("%d \n", object.Add(10, 20, 30));
	printf("%d \n", object.Add(10.0, 20.0));
	printf("%d \n", object.Add(10.0, 20.0, 30.0));
	printf("%d \n", object.Mul(10, 20));
	printf("%d \n", object.Mul(10, 20, 30));
	printf("%d \n", object.Mul(10.0, 20.0));
	printf("%d \n", object.Mul(10.0, 20.0, 30.0));
	printf("%d \n", object.Add(4, 10, 20, 30, 40));
	//char *Add
}