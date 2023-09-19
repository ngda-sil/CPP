#include "Base.hpp"

int main()
{
	Base* B = new Base();
	Base* tab[20];

	for (int i = 0; i < 20; i++)
		tab[i] = B->generate();
	
	for (int i = 0; i < 20; i++)
		identify(tab[i]);
	
	A& a();
	identify(a);
	
	delete B;
	for (int i = 0; i < 20; i++)
		delete tab[i];
	return (0);
}
