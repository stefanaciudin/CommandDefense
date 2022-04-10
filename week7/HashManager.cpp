#include "HashManager.h"
#include <string.h>
#include <iostream>
#pragma warning(disable:4996)
Hash*& HashManager::operator[](const char* hash_name)
{
	Hash*& h = pairs[count].hash;
	strcpy(pairs[count].name, hash_name);
	count++;
	return h;
}

void HashManager::print_hashes(const char* param)
{
	for (int i = 0; i < count; i++)
		std::cout << pairs[i].hash->calculate_hash(param);
}
