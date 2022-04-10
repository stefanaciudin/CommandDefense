#include "CountAsciiHash.h"
#include <string.h>
int CountAsciiHash::calculate_hash(const char* string)
{
	int hash_sum = -0;
	for (int i = 0; i < strlen(string); i++)
		hash_sum += string[i];
	return hash_sum;
}
