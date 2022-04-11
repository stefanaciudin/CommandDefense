#pragma once
class Item
{
	const char* name;
public:
	Item();
	~Item();
	const char* getName();
	virtual const char* getInfo()=0;
	void setName(const char* n);
};