#include <string.h>
#include "Phrase.h"
#pragma warning(disable:4996)
Phrase::Phrase()
{
	words[20] = nullptr;
	words_count = 0;
}
Phrase::Phrase(const char* string)
{
	words_count = 0;
	char* p;
	char elem[256];
	strcpy(elem, string);
	p = strtok(elem, " ");
	while (p != NULL)
	{
		words[words_count++] = elem;
		p = strtok(NULL, " ");
	}

}

Phrase::~Phrase()
{
	delete words;
}

Phrase::operator int()
{
	return words_count;
}

const char* Phrase::operator[](int index)
{
	return words[index];
}

int Phrase::CountLetter(int number, char to_find)
{
	int letter_count = 0;
		for (int j = 0; j < strlen(words[number]); j++)
			if (words[number][j] == to_find)
				letter_count++;

	return letter_count;
}

int Phrase::CountLetter(char find)
{
	int nr = 0;
	for (int i = 0; i < words_count; i++)
		nr += CountLetter(i, find);
	return nr;
}

int Phrase::CountVowelsWord(const char* word)
{
	const char vowels[] = "AEIOUaeiou";
	int number = 0;
	for (int i = 0; i < strlen(word); i++)
	{
		if (strchr(vowels, word[i]) != NULL)
			number++;
	}
	return number;
}

int Phrase::CountVowels()
{
	const char vowels[] = "AEIOUaeiou";
	int vowels_number = 0;
	for (int i = 0; i < words_count; i++)
	{
		vowels_number += CountVowelsWord(words[i]);
	}
	return vowels_number;
	
	
}

const char* Phrase::GetLongestWord()
{
	int max_char = 0;
	int length_now = 0;
	int found_index = -1;
	for (int i = 0; i < words_count; i++)
	{
		length_now = strlen(words[i]);
		if (length_now > max_char)
		{
			max_char = length_now;
			found_index = i;
		}
		
	}
	return words[found_index];
}
