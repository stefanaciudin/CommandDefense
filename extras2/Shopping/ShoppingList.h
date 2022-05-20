#pragma once
#include "Item.h"
#include <vector>
using namespace std;
class ShoppingList
{
public:
	vector <Item*> items;
	ShoppingList();
	~ShoppingList();
	void addItem(Item* item);
	void printList();

};