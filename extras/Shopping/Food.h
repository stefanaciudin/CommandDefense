#pragma once
class Food :public Item
{
private:
	float quantity;
public:
	void setQuantity(float quantity);
	const char* getInfo();

};