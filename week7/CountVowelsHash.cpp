#include "CountVowelsHash.h"
#include <string.h>
const char vowels[] = "aeiouAEIOU";
int CountVowelsHash::calculate_hash(const char* string)
{
	int number_vowels = 0;
	for (int i = 0; i < strlen(string); i++)
	{
		if (strchr( vowels, string[i]) != NULL)
			number_vowels++;
	}
	return number_vowels;
}
