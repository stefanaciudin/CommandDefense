#include "ShoppingList.h"

ShoppingList::~ShoppingList()
{
}

ShoppingList::ShoppingList()
{
	count = 0;
}

bool ShoppingList::addItem(Item* item)
{
	if (count < max_count)
	{
		items[count++] = item;
		return true;
	}
	return false;
}
