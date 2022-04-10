#pragma once
#include "Hash.h"
struct HashPair
{
	char name[256];
	Hash* hash;
};
class HashManager
{
private:
	HashPair pairs[16];
	int count = 0;

public:
	Hash*& operator[](const char* hash_name);
	void print_hashes(const char* param);

};