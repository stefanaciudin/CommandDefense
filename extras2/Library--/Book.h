#pragma once
#include "Product.h"
#include "Author.h"
#include <vector>
using namespace std;
#include "Visitor.h"
#include "Product.h"
class Product;
class Visitor;
class Book : public Product
{
	int nrPages;
	int price;
public:
	vector <Author*> autori;
	Book();
	Book(int pret, int pagini);
	void AddAuthor(Author* a);
	int GetNrPages();
	int GetPrice();
	vector <Author*>& GetAuthors();
};