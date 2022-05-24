#include <iostream>
#include "FiguriContainer.h"
#include "Cerc.h"
#include "Patrat.h"
#include "Dreptunghi.h"

int main() 
{
	FiguriContainer fig;
	fig.Add(new Cerc("rosu"));
	fig.Add(new Patrat("verde"));
	fig.Add(new Dreptunghi("rosu"));
	fig.ShowAll();
	fig.ShowByColor(new Color("rosu"));
	system("pause");
	return 0;
}
