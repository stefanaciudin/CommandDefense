#include "biblioteca.h"
#include "carte.h"
#include "revista.h"
#include "roman.h"
#include <iostream>
int main()
{
	Biblioteca b;
	(b += new Roman("DON QUIJOTE", "MIGUEL DE CERVANTES")) += new Revista("Journal of Artificial Intelligence", 100);
	b += new Roman("MACBETH", "WILLIAM SHAKESPEARE");
	for (auto x : b)
	{
		std::cout << x->GetInfo() << std::endl;
	}
	std::cout << "Numar de intrari in biblioteca: " << (int)b << std::endl;
	std::cout << "Lista doar cu romane:" << std::endl;
	b.PrintFilter([](Carte* c)->bool 
		{
			if (dynamic_cast<Roman*>(c) != nullptr)
				return true;
			return false;
		// adaugati codul care determina daca o carte este un roman
		});
	return 0;
}