#include "Zombie.hpp"

int	main()
{
	Zombie	ZombieOne = Zombie("1) Jean");
	Zombie*	ZombieTwo = newZombie("2) Jacques");

	ZombieOne.announce();
	ZombieTwo->announce();
	//delete ZombieTwo;
	randomChump("3) Paul");

	delete ZombieTwo;
	
	return (0);
}
