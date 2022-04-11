#include "Parcare.h"
#include <iostream>
#include <string.h>
using namespace std;
Parcare::Parcare()
{
	count = 0;
	//masini = nullptr;
}

Parcare::~Parcare()
{

}

void Parcare::Create(int max_count)
{
	max_number = max_count;

}

bool Parcare::Add(Masina* m)
{
	if (!IsFull())
	{
		masini[count++] = m;
		return true;
	}
	return false;
}

void Parcare::RemoveByName(const char* name)
{
	for (int i = 0; i < count; i++)
	{
		if (strcmp(masini[i]->GetName(), name))
		{
			//delete masini[i];
			for (int j = i + 1; j < count - 1; j++)
				masini[j] = masini[j + 1];
		}
		count--;
	}
}

int Parcare::GetCount()
{
	return this->count;
}

bool Parcare::IsFull()
{
	if (count >= max_number)
		return true;
	else
		return false;
}

void Parcare::ShowAll()
{
	cout << "SHOW ALL: ";
	for (int i = 0; i < count; i++)
		cout << masini[i]->GetName() << "(" << masini[i]->GetColor() << "), ";
	cout << endl;
}

void Parcare::ShowByColor(const char* color)
{
	cout << "SHOW COLOR: (" << color << "): ";
	for (int i = 0; i < count; i++)
	{
		if(strcmp(masini[i]->GetColor(),color)==0)
			cout << masini[i]->GetName() << ", ";
	}
		
	cout << endl;
}
