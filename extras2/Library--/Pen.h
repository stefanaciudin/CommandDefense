#pragma once
#include "Product.h"
#include "Visitor.h"
#include <string>
using namespace std;
class Product;
class Visitor;
class Pen : public Product
{
	string color;
	int price;
public:
	Pen();
	Pen(int pret, string culoare);
	string GetColor();
	int GetPrice();
};