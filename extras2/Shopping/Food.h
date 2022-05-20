#pragma once
#include "Item.h"
class Food :public Item
{
	float quantity;
public:
	void setQuantity(float q);
	string getInfo();
};