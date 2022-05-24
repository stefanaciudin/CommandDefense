#pragma once
#include <string>
using namespace std;

class Color
{
private:
	string culoare;
public:
	Color();
	Color(string c);
	~Color();
	bool HasColor();
	string GetColor();
};

