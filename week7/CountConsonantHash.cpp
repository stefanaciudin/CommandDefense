#include "CountConsonantHash.h"
#include <string.h>
const char vowels[] = "aeiouAEIOU";
int CountConsonantHash::calculate_hash(const char* string)
{
	int number_consonants = 0;
	for (int i = 0; i < strlen(string); i++)
	{
		if (strchr(vowels, string[i]) == NULL)
			number_consonants++;
	}
	return number_consonants;
	
}
