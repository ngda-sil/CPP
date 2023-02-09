#include "Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie	Random = Zombie(name);
	Random.announce();
}
