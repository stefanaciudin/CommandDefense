#pragma once
class Phrase
{
private:
	const char* words[20];
	int words_count;

public:
	Phrase();
	Phrase(const char* string);
	~Phrase();
	operator int();
	const char* operator[](int index);
	int CountLetter(int number, char to_find);
	int CountLetter(char find);
	int CountVowelsWord(const char* word);
	int CountVowels();
	const char* GetLongestWord();


};