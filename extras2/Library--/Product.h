#pragma once
#include "Visitor.h"
class Visitor;
class Product
{
public:
	Product();
	~Product();
	virtual void Accept(Visitor* v);
};