#pragma once
#include "Item.h"
class ShoppingList
{
public:
	Item* items[10];
	int count;
	int max_count;
	ShoppingList();
	~ShoppingList();
	bool addItem(Item* item);
	void printList();
};