#include "Zombie.hpp"
#include <iostream>

int	main()
{
	int	i = 3;
	Zombie* MyZombies = zombieHorde(i, "Jean");
	MyZombies->announce();
	for (int j = 0; j < i; j++)
		MyZombies[j].announce();
	
	delete [] MyZombies;
	return (0);
}
