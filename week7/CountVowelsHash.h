#pragma once
#include "Hash.h"
class CountVowelsHash :public Hash
{
private:

public:
	virtual int calculate_hash(const char* string);
};