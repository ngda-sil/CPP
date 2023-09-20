#include "Base.hpp"

int main()
{
	Base* B = new Base();
	Base* tab[20];

	for (int i = 0; i < 20; i++)
		tab[i] = generate();
	
	for (int i = 0; i < 20; i++)
	{
		std::cout<< "------------------\n";
		identify(tab[i]);
		identify(*tab[i]);
		std::cout<< "------------------\n";

	}

	delete B;
	for (int i = 0; i < 20; i++)
		delete tab[i];
	return (0);
}
