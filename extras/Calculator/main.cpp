#include "Calculator.h"
#include "Adunare.h"
#include "Impartire.h"
#include "Inmultire.h"
#include "Scadere.h"
#include <iostream>
int main()
{
	Calculator c;
	c += new Adunare();
	c += new Scadere();
	c += new Adunare();
	c += new Inmultire();
	c += new Impartire();
	std::cout << "Numar de operatii suportate: " << (int)c << std::endl;
	c.Compute(20, 10);
	if (c["Scadere"])
		std::cout << "Operatia de scadere este suportata de calculator" << std::endl;
	c -= "Scadere";
	c -= "Impartire";
	c.Compute(15, 6);
	std::cout << "Numar de operatii suportate: " << (int)c << std::endl;

}