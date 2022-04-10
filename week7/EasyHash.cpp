#include "EasyHash.h"
#include <string.h>
const char vowels[] = "aeiouAEIOU";
int EasyHash::calculate_hash(const char* string)
{
	int every_other = 0;
	int sum = 0;
	for (int i = 0; i < strlen(string); i++)
	{
		if (strchr(vowels, string[i]) != NULL)
		{
			if (every_other % 2 == 1)
				sum += string[i] * 10 * 12;
			else
				sum += string[i] * 10;
		}
		if (strchr(vowels, string[i]) == NULL)
		{
			if (every_other % 2 == 1)
				sum += string[i] * 11 * 12;
			else
				sum += string[i] * 11;
		}
	}
	return sum;
}
