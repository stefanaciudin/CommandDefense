#include <iostream>
using namespace std;
float operator"" _Kelvin(unsigned long long kel)
{
	return 1.0 * kel - 273.15;
}
float operator"" _Fahrenheit(unsigned long long fah)
{
	return (1.0 * fah - 32) / 1.8;
}
int main()
{
	float a = 320_Kelvin;
	float b = 120_Fahrenheit;
	cout << "Kelvin to Celsius: " << a << "\n";
	cout << "Fahrenheit to Celsius: " << b << "\n";
	return 0;
}