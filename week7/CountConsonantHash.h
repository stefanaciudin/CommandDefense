#pragma once
#include "Hash.h"
class CountConsonantHash :public Hash
{
private:
public:
	virtual int calculate_hash(const char* string);
};