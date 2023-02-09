#include "Zombie.hpp"

int	main()
{
	Zombie	ZombieMaker = Zombie("Patient 0");
	Zombie	ZombieOne = Zombie("Jean");
	Zombie*	ZombieTwo;

	ZombieOne.announce();
	ZombieTwo = ZombieMaker.newZombie("Jacques");
	ZombieTwo->announce();
	ZombieMaker.randomChump("Paul");

	delete ZombieTwo;
	return (0);
}
