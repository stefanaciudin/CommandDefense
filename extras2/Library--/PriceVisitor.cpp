#include "PriceVisitor.h"
#include <iostream>
using namespace std;
void PriceVisitor::Visit(Book* b)
{
	cout << "Pretul cartii este " << b->GetPrice() << " lei"<<endl;
}

void PriceVisitor::Visit(Pen* p)
{
	cout << "Pretul pixului este " << p->GetPrice() << " lei" << endl;
}
