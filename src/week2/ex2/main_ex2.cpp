#include <iostream>
#include "EnemyWave.h"
#include "GlobalFunctions.h"
using namespace std;
/*
	Design a C++ class that reflects the properties of an wave of  enemies. The class should include the following:
 - methods to set and get the name of the wave
 - methods to set and get the number of enemies  (must be bigger than 0)
 - methods to set and get the starting health (bigger than 0)
 - methods to set and get the money per enemy (must be a float value)


	Create 2 global functions that compare two wave in terms of: number of enemies and money per enemy.
If two waves are equal the return value of such a function will be 0. If the first wave is bigger than the second one, the return value will be 1, otherwise -1.
	Make sure that you have the following:
a cpp file for the methods specific to the class
a header file for the global functions
a cpp file for the global functions implementation
a main.cpp file that shows how the methods and global functions can be used.

*/

#pragma warning(disable:4996)
int main()
{
	EnemyWave Wave1;
	EnemyWave Wave2;
	char a[100];
	char b[100];
	cin >> a >> b;
	Wave1.setName(a);
	Wave1.setEnemyNumber(100);
	Wave1.setMoney(100);
	Wave1.setHealth(100);
	
	Wave2.setName(b);
	Wave2.setEnemyNumber(100);
	Wave2.setMoney(100);
	Wave2.setHealth(100);
	cout << CmpEnemyNumber(Wave1, Wave2) << endl;
	cout << CmpEnemyMoney(Wave1, Wave2) << endl;



    return 0;
}