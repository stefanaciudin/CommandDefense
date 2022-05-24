#pragma once
#include "carte.h"
class Roman :public Carte
{
	string nume;
	string autor;
public:
	Roman(string nume, string autor);
	string GetInfo();

};