#pragma once
#include "Hash.h"
class EasyHash :public Hash
{
private:
public:
	virtual int calculate_hash(const char* string);
};