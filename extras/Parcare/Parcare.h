#pragma once
#include "Masina.h"
class Parcare
{
	Masina* masini[10];
	int max_number;
	int count;
public:
	Parcare();
	~Parcare();
	void Create(int max_count);
	bool Add(Masina* m);
	void RemoveByName(const char* name);
	int GetCount();
	bool IsFull();
	void ShowAll();
	void ShowByColor(const char* color);
};