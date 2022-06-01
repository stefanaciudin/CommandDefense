#include "DetailsVisitor.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void DetailsVisitor::Visit(Book* b)
{
	string ret = "";
	vector <Author*> a = b->GetAuthors();
	for (int i = 0; i < a.size(); i++)
	{
		ret += a[i]->GetSurname() + " " + a[i]->GetFirstname();

	}
	cout << "Cartea are " << b->GetNrPages() << " pagini, iar autorii sunt ";
		
}

void DetailsVisitor::Visit(Pen* p)
{
	cout << "Pixul este de culoarea " << p->GetColor() << endl;
}
