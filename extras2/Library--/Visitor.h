#pragma once
#include "Book.h"
#include "Pen.h"
class Book;
class Pen;
class Visitor
{
public:
	virtual void Visit(Book* b);
	virtual void Visit(Pen* p);
};
