#include <iostream>
#include "Header.h"
using namespace std;

template <class T>
bool compare(T& a, T& b)
{
	return a > b;
}

template <class T>
bool is_equal(T& a, T& b)
{
	return a == b;
}

int main()
{
	Vector<int> v(5);
	v.push(12334);
	v.push(1);
	v.push(231445);
	v.push(314);
	v.push(3454);
	v.print();
	cout << endl << "Nr de elem din vector este: " << v.count();
	cout << "Pop: " << v.pop();
	v.remove(2);
	cout << endl << "Dupa apelul v.remove(2): ";
	v.print();

	v.set(2, 70);
	cout << endl << "Dupa inlocuire: ";
	v.print();

	v.sort(&compare);
	cout << endl << "Vectorul sortat: ";
	v.print();

	cout << endl;


	return 0;
}