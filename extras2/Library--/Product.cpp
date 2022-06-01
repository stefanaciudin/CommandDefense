#include "Product.h"

Product::Product()
{
}

Product::~Product()
{
}

void Product::Accept(Visitor* v)
{
	v->Visit(dynamic_cast<Pen*>(this));
	v->Visit(dynamic_cast<Book*>(this));
}
