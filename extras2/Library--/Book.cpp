#include "Book.h"

Book::Book()
{
	price = 0;
	nrPages = 0;
}

Book::Book(int pret, int pagini)
{
	this->price = pret;
	this->nrPages = pagini;
}


void Book::AddAuthor(Author* a)
{
	autori.push_back(a);
}

int Book::GetNrPages()
{
	return nrPages;
}

int Book::GetPrice()
{
	return price;
}

vector<Author*>& Book::GetAuthors()
{
	return autori;
}
