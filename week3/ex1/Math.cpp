#include "Math.h"
#include <stdarg.h>
#include <cstring>
#pragma warning(disable:4996)
int Math::Add(int x, int y)
{
	return x + y;
}
int Math::Add(int x, int y, int z)
{
	return x + y + z;
}
int Math::Add(double x, double y)
{
	return (int)(x + y);
}
int Math::Add(double x, double y, double z)
{
	return (int)(x + y + z);
}
int Math::Mul(int x, int y)
{
	return x * y;
}
int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}
int Math::Mul(double x, double y)
{
	return (int)(x * y);
}
int Math::Mul(double x, double y, double z)
{
	return (int)(x * y * z);
}
int Math::Add(int count, ...)
{
	int s = 0;
	va_list ptr;
	va_start(ptr, count);
	for (int i = 0; i < count; i++)
		s += va_arg(ptr, int);
	va_end(ptr);
	return s;

}
char* Math::Add(const char* sir1, const char* sir2)
{
	if (sir1 == nullptr || sir2 == nullptr)
		return nullptr;
	int val = strlen(sir1) + strlen(sir2);
	char* rez = new char[val + 1];
	strcat(rez, sir1);
	strcat(rez, sir2);
	return rez;
	//????
}
