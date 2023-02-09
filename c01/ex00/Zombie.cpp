#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::~Zombie()
{
	std::cout << this->_name << " has been successfully destroyed\n";
}

/*void	Zombie::Zombie(Zombie const &a)
{
	return;
}

void	Zombie::Zombie & operator=(const Zombie &a)
{
	return;
}*/

void	Zombie::announce(void)
{
	std::cout << this->_name << " : BraiiiiiiinnnzzzZ...\n";
}
