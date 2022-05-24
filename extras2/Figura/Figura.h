#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Figura
{
protected:
	string culoare;
public:
	Figura();
	~Figura();
	virtual string GetName() = 0;
	string GetCuloare();
};

