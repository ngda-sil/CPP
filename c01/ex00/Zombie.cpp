#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : _name(name)
{
	return;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " has been successfully destroyed\n";
}

void	Zombie::announce(void)
{
	std::cout << this->_name << " : BraiiiiiiinnnzzzZ...\n";
}
