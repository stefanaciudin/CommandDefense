#pragma once
class Munti
{
	int altitudine;
	int suprafata;
	const char* nume;
	int count;
	int max_count = 10;;
public:
	Munti(const char* nume, int sup, int alt);
	~Munti();
	Munti();
	int CalculeazaSuprafata();
	void Afiseaza();


};