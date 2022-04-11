#include <iostream>
#include "Vector.h"
using namespace std;

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

	v.sort(nullptr);
	cout << endl << "Vectorul sortat: ";
	v.print();

	return 0;

}