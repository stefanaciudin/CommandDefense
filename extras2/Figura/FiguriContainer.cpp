#include "FiguriContainer.h"

FiguriContainer::FiguriContainer()
{

}

FiguriContainer::~FiguriContainer()
{

}

void FiguriContainer::Add(Figura* f)
{
	figuri.push_back(f);
}

void FiguriContainer::ShowAll()
{
	int n = figuri.size();
	for (int i = 0; i < n; ++i)
		cout << (*figuri[i]).GetName() << " " << (*figuri[i]).GetCuloare() << '\n';
}

void FiguriContainer::ShowByColor(Color* c)
{
	cout << "Figuri cu culoarea: " << (*c).GetColor() << '\n';
	int n = figuri.size();
	for (int i = 0; i < n; ++i)
		if ((*figuri[i]).GetCuloare() == (*c).GetColor())
			cout << (*figuri[i]).GetName() << '\n';
}