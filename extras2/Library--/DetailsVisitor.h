#pragma once
#include "Pen.h"
#include "Book.h"
#include "Visitor.h"
class DetailsVisitor : public Visitor
{
public:
	void Visit(Book* b);
	void Visit(Pen* p);
};