#pragma once
#include "Hash.h"
class CountAsciiHash :public Hash
{
private:
public:
	virtual int calculate_hash(const char* string);
};