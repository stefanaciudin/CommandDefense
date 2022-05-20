#include "ShoppingList.h"
#include <iostream>
using namespace std;
ShoppingList::ShoppingList()
{
}
ShoppingList::~ShoppingList()
{
}
void ShoppingList::addItem(Item* item)
{
	items.push_back(item);
}

void ShoppingList::printList()
{
	int n = items.size();
	for (int i = 0; i < n; i++)
		cout << items[i]->getInfo();
}
