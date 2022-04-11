#pragma once
class Miscellaneous:public Item
{
private:
	int count;
public:
	const char* getInfo();
	void setCount(int count);

};